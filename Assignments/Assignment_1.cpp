//*************************************************

//the purpose of this code is to compute the final digit
//of multiple different types of bar codes
//it will prompt the user to decide which barcode it wants
//then it will ask for the barcode as a string

//there are error catches for both inputs

//one thing to note is that my compiler is detecting an error
//this is because I am using a non const variable technically
//to decide the size of the array i use
//it still runs fine but for now i couldnt find any way around it

//thank you

//*************************************************



#include <iostream>

using namespace std;



//adds a nice menu to start with
void mainMenu(){

    cout << "check digit calculator" << endl;
    cout << "----------------" << endl;
    cout << "1. EAN-8" << endl;
    cout << "2. UPC-A" << endl;
    cout << "3. EAN-13" << endl;
    cout << "4. EAN-14" << endl;
    cout << "5. SSCC" << endl;
    cout << "----------------" << endl;

}

//will effectively return the size of the array we will be using
 const int prodCodeType() {

    int productType, size = 0;

    cout << "chose your product code type:";

    cin >> productType;

    switch (productType) {

            case 1:
            {
                size = 7;
                cout << "Enter first 7 digits of your product code:";
                return size;
            }
                break;

            case 2:
            {
                size = 11;
                cout << "Enter first 11 digits of your product code:";
                return size;
            }
                break;

            case 3:
            {
                size = 12;
                cout << "Enter first 12 digits of your product code:";
                return size;
            }
                break;
            
            case 4:
            {
                size = 13;
                cout << "Enter first 13 digits of your product code:";
                return size;
            }
                break;
            case 5:
            {
                size = 17;
                cout << "Enter first 17 digits of your product code:";
                return size;
            }
                break;
            default:
                {
                cout <<"invalid entry" << endl;
                return 0;
                }
    }

}

//adds odd elements of array together
//this is right now built for a full array, not n-1 inputs, same with addevens
int addOdds(int arr[], int size){

    int j = 0;
    int sum = 0;

    for(int i = 0; i < size; i++) //runs as many times as the size of the array
    {
        if(j < size) //makes sure it doesnt add more numbers than are elements of the array
        {
            sum += arr[j]; //adds elements
            j = j + 2;     //ensures only "odd" elements are added
        }
    }
            if( size != 12) //takes into account the EAN-13 exception
            {
                sum = sum * 3;
            }
             //this multiplies the ans by 3

            return sum; //returns the sum


}

//adds even elements of array together
int addEvens(int arr[], int size){

    int j = 1;
    int sum = 0;

    for(int i = 0; i < (size); i++) //runs as many times as the size of the array
    {
        if(j < size) //makes sure it doesnt add more numbers than are elements of the array
        {
            sum += arr[j]; //adds elements
            j = j + 2;     //ensures only "even" elements are added  
        }
    }
        if (size == 12) //takes into account the EAN-13 exception
        {
            sum = sum * 3;
        }
        return sum; //returns the sum


}

//multiplies odds by three and adds to evens
int addEvens_Odds(int arr[], int size)
{

    int sum = 0; 

    sum = addEvens(arr,size) + addOdds(arr, size); //adds evens and odds together

        
        return sum;

}

//finds the check digit through finding the diff
int findCheck(int arr[], int size)
{

    int ans, sum, alter = 0; //just to be certain no garbage is within variables

    sum = addEvens_Odds(arr, size); 

    alter = sum; //gives us another var to work with

    while(alter % 10 != 0) //adds to the new alter variable until its the next tenth
        {
            alter++;
        }

    //cout << alter << endl;
    //cout << sum << endl;
    ans = alter - sum; 

   // cout << ans << endl;
            return ans;

}

//this displays the full digits of the barcode with the check digit
void displayBarCode(int arr[], int size)
{

    cout << "----------------" << endl;
    cout << "the check digit is ";
    cout << findCheck(arr, size);
    cout << "." << endl;

    cout << "the product code is "; 
    for(int i = 0; i < (size); i++) //prints array
    {

    cout << arr[i];

    }
    
    cout << findCheck(arr, size); //prints out last digits
    cout << "." << endl;
}


int main()
{


//initialising some vars
int transfer, barCodeLength;
string entryBarCode;


//calls the menu
mainMenu();

//asks for which type of code and returns array size
const int sizeArr = prodCodeType();

//makes it so that if product code 1-5 is not chosen, makes the whole program return 0
if(sizeArr == 0)
{
    return 0;
}

//initialising array
int codeArr[sizeArr];

//cleans out the int array
for(int i = 0; i < sizeArr; i++) 
    {
    codeArr[i] = 0;
    }

//collects the string
cin >> entryBarCode;

//gives us the length of the barcode, for error checking reasons
barCodeLength = entryBarCode.length();

//makes sure the string size is correct
if(barCodeLength != sizeArr)
    {
        cout << "you should have entered " << sizeArr; 
        cout << " digits, but you entered " << barCodeLength << " digits";
        return 0;
    }

//changes the string into an integer array
for(int i = 0; i < sizeArr; i++){

    transfer = entryBarCode[i] - '0'; //converts the string (ie a char array to from char type to int)

    codeArr[i] = transfer;

    }

//this function does all the calculation
displayBarCode(codeArr, sizeArr);


}

