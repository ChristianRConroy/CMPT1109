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
                size = 8;
                return size;
            }
                break;

            case 2:
            {
                size = 12;
                return size;
            }
                break;

            case 3:
            {
                size = 13;
                return size;
            }
                break;
            
            case 4:
            {
                size = 14;
                return size;
            }
                break;
            case 5:
            {
                size = 18;
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

    int j, sum = 0;

    for(int i = 0; i < (size - 1); i++) //runs as many times as the size of the array
    {
        if(j < (size - 1)) //makes sure it doesnt add more numbers than are elements of the array
        {
            sum += arr[j]; //adds elements
            j = j + 2;     //ensures only "odd" elements are added
        }
    }

        sum = sum * 3; //this multiplies the ans by 3

            return sum; //returns the sum


}

//adds even elements of array together
int addEvens(int arr[], int size){

    int j = 1;
    int sum = 0;

    for(int i = 0; i < (size - 1); i++) //runs as many times as the size of the array
    {
        if(j < size -1) //makes sure it doesnt add more numbers than are elements of the array
        {
            sum += arr[j]; //adds elements
            j = j + 2;     //ensures only "even" elements are added  
        }
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

    ans = alter - sum; 

            return ans;

}

//this displays the full digits of the barcode with the check digit
void displayBarCode(int arr[], int size)
{

    for(int i = 0; i < (size - 1); i++) //should print out array except for last digit
    {

    cout << arr[i];

    }

    cout << findCheck(arr, size); //prints out last digits

}


int main(){


mainMenu();

const int n = prodCodeType();

int barCode[n];

for(int i = 0; i < n; i++) {

barCode[i] = 0;

}

int transfer;

string barc;

cin >> barc;

for(int i = 0; i < n; i++){

transfer = barc[i] - '0';

barCode[i] = transfer;

}


for (int i = 0; i < n; i++)
{

    cout << barCode[i];

}




    return 0;
}

