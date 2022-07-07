#include<iostream>

using namespace std;

//gives us our lab numbers
const int ROWS = 4;

//gives us our machine numbers
int COLUMNS_PER_ROWS_ARR [ROWS] = {5, 6, 4, 3};

//gives us the login display
void login_Display(){

    cout << " " << endl;
    cout << "choose one of the following" << endl;
    cout << " " << endl;
    cout << "1 - Login" << endl;
    cout << "2 - Logoff" << endl;
    cout << "3 - Search" << endl;
    cout << "4 - exit" << endl;

}

//finds the user id, also has an error catch
int get_User()
{

    int user_Id = 0;

    cout << "please enter your user ID" << endl;
    
    cin >> user_Id;
        
        if(user_Id > 99999 || user_Id < 10000)
            {
                cout << "your user id input is invalid" << endl;
                user_Id = 0;
            }

    return user_Id;
}

//gets the lab number and includes an error check
int get_Lab_Num(){
   
   int lab_Num = 0;
   
   cout << "please enter your lab number" << endl;

   cin >> lab_Num;

    if(lab_Num > 4 || lab_Num < 0)
        {
            cout << "your lab number input is invalid" << endl;

            lab_Num = 0;
        }

    return lab_Num;
}

int get_Comp_Station(int lab_Num){

    int comp_Station = 0;

    cout << "please enter your comp station" << endl;

    cin >> comp_Station;

    switch(lab_Num)
    {

        case 1:
        {
            if(comp_Station > 5 || comp_Station < 0)
            {
                cout << "invalid entry for comp station" << endl;
                comp_Station = 0;
            }
            break;
        }

        case 2:
        {
            if(comp_Station > 6 || comp_Station < 0)
            {
                cout << "invalid entry for comp station" << endl;
                comp_Station = 0;
            }
            break;
        }

        case 3:
        {
            if(comp_Station > 4 || comp_Station < 0)
            {
                cout << "invalid entry for comp station" << endl;
                comp_Station = 0;
            }
            break;
        }

        case 4:
        {
            if(comp_Station > 3 || comp_Station < 0)
            {
                cout << "invalid entry for comp station" << endl;
                comp_Station = 0;
            }
            break;
        }

        default:
        {
            cout << " invalid lab choice" << endl;
            comp_Station = 0;
            break;
        }

    }

return comp_Station;

}



int main(){

//declarations and initializations
int user_Id = 0, lab_Num = 0, comp_Station = 0,  selection = 0, counter = 0;

    //our dynamic pointer array
int **arr = new int *[ROWS];

    // our arrays within our pointer array
arr[0] = new int [5];
arr[1] = new int [6];
arr[2] = new int [4];
arr[3] = new int [3];

//cleans out our array for filling
for(int i = 0; i < ROWS; i++){
        for(int j = 0; j< COLUMNS_PER_ROWS_ARR[i]; j++)
        {
            arr[i][j] = 0; //sets each column and then row to 0
        }

    }

//starting of the menu
do
{

    int errorCatch = 0, errorCatch2 = 0;

    //sets up our menu
    login_Display();

    //grabs the selection 
    cin >> selection;

    //allows for choice of login, logoff, search and exit
    switch(selection)
    {
        case 1: //login
            {
                //gets our user id, lab number and computer number       
                user_Id = get_User();
                    if(user_Id == 0)
                        break; 

                //checks if the user has already been logged in
                for(int i = 0; i < ROWS; i++)
                    {
                        for(int j = 0; j< COLUMNS_PER_ROWS_ARR[i]; j++)
                            {
                                if(arr[i][j] == user_Id) //if there are "empty" quote on quote entries, they hold empty
                                   { 
                                    cout << "there is already a user with that id logged in" << endl;
                                    errorCatch = 10;
                                    break;
                                   }
                            }
                        //saves the program some time    
                        if (errorCatch == 10)
                        break;
                    }

                    //restarts the program if thats the case
                    if (errorCatch == 10)
                        break;

                //gets the lab number, with error catch
                lab_Num = get_Lab_Num();
                    if(lab_Num  == 0)
                        break;
                
                //gets the comp station number, with error catch
                comp_Station = get_Comp_Station(lab_Num);
                    if(comp_Station == 0)
                        break;

                //performs a search to see if a computer has aleady been logged into
                for(int i = 0; i < ROWS; i++)
                    {
                        for(int j = 0; j < COLUMNS_PER_ROWS_ARR[i]; j++)
                            {
                                int placeHolder = 0;
                                placeHolder = arr[i][j];

                                if( (i + 1) == lab_Num && (j + 1) == comp_Station && placeHolder != 0 )
                                {
                                    cout << "there is already someone logged into that machine" << endl;
                                    errorCatch2 = 10;
                                    break;
                                }
                                       
                            }
                        //saves the program some time    
                        if (errorCatch2 == 10)
                        break;
                    }
                    if (errorCatch2 == 10)
                        break;
      
                //effectively is what places our user id in the multidimensional array 
                arr[lab_Num -1][comp_Station -1] = user_Id;
                
                cout << endl; //just for spacing

                for(int i = 0; i < ROWS; i++)
                    {
                        cout << (i + 1) << "     ";

                        for(int j = 0; j< COLUMNS_PER_ROWS_ARR[i]; j++)
                            {
                                if(arr[i][j] == 0) //if there are "empty" quote on quote entries, they hold empty
                                    cout << (j + 1) << ": " << "empty ";
                                else
                                    cout << (j + 1) << ": " << arr[i][j] << " "; //otherwise a value is assigned to them

                            }
                            cout << endl;
                    }
                    break;
            }
        case 2: //logout
            {
               // user_Id = get_User(); 
                lab_Num = get_Lab_Num();
                comp_Station = get_Comp_Station(lab_Num);

                arr[lab_Num - 1][comp_Station - 1] = 0;

                    cout << endl; //just for spacing

                for(int i = 0; i < ROWS; i++)
                    {
                        cout << (i + 1) << "     ";

                        for(int j = 0; j< COLUMNS_PER_ROWS_ARR[i]; j++)
                            {
                                if(arr[i][j] == 0) //if there are "empty" quote on quote entries, they hold empty
                                    cout << (j + 1) << ": " << "empty ";
                                else
                                    cout << (j + 1) << ": " << arr[i][j] << " "; //otherwise a value is assigned to them

                            }
                            cout << endl;
                    }
                break;
            }
        case 3: //linear search
            {
                user_Id = get_User();
                if(user_Id == 0)
                    break; 

                for(int i = 0; i < ROWS; i++)
                    {
                        for(int j = 0; j< COLUMNS_PER_ROWS_ARR[i]; j++)
                            {
                                if(arr[i][j] == user_Id) //if there are "empty" quote on quote entries, they hold empty
                                   { 
                                    cout << "the lab is "<< i + 1 << endl;
                                    cout << "the machine is " << j + 1 << endl;;
                                   }
                            }
                            
                    }
                    break;
                
            }
        case 4: //exit
            {   
                //prevents memory leak in case of shutdown
                delete arr[0];
                delete arr[1];
                delete arr[2];
                delete arr[3];
                delete arr;
                return 0;
                break;
            }

        default:
            {
                cout << "invalid selection" << endl;
                break;
            }




    }

}
while(selection != 0);
//cleans everything in case 0 is selected
delete arr[0];
delete arr[1];
delete arr[2];
delete arr[3];
delete arr;

return 0;
}



