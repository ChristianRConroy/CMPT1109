#include<iostream>

using namespace std;

//gives us our lab numbers
const int ROWS = 4;

//gives us our machine numbers
int COLUMNS_PER_ROWS_ARR [ROWS] = {5, 6, 4, 3};


void login_Display(){

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
            return 0;
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

        return 0;
    }

   
    return lab_Num;
}

int get_Comp_Station(){

int comp_Station = 0;

    cout << "please enter your comp station" << endl;
    cin >> comp_Station;

    if(comp_Station > 4 || comp_Station < 0)
    {
        cout << "your comp station input is invalid" << endl;
        return 0;
    }


return comp_Station;


}

int main(){

//declarations and initializations
    int user_Id = 0, lab_Num = 0, comp_Station = 0,  selection = 0, counter = 0;

    //our dynamic  pointer array
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

            cout << endl; //makes a new row
    }


//starting of the menu
cout << "choose one of the following" << endl;

do{

    login_Display();

    cin >> selection;

//allows for choice of login, logoff, search and exit
switch(selection){

    case 1:
        {
                
    user_Id = get_User();
                
    lab_Num = get_Lab_Num(); 

    comp_Station = get_Comp_Station();
           


arr[lab_Num -1][comp_Station -1] = user_Id;

for(int i = 0; i < ROWS; i++){
    for(int j = 0; j< COLUMNS_PER_ROWS_ARR[i]; j++)
    {
        if(arr[i][j] == 0)
            cout << "empty" << " ";
        else
            cout << arr[i][j] << " ";

    }

        cout << endl;
}



             break;
        }
    case 2:
        {
            
            break;
        }
    case 3:
        {

            break;
        }
   case 4:
        {
            return 0;
            break;
        }

    default:
        {
            cout << "invalid entry" << endl;
            break;
        }




}

}while(selection != -1);





delete arr[0];
delete arr[1];
delete arr[2];
delete arr[3];
delete arr;




    return 0;
}