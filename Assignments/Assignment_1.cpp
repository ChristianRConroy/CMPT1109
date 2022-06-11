#include <iostream>

using namespace std;

//adds odd numbers together
int addOdds(int arr[], int size){

int j = 0;

int sum = 0;

for(int i = 0; i < (size - 1); i++) //runs as many times as the size of the array
{
    if(j < (size - 1)) //makes sure it doesnt add more numbers than are elements of the array
    {
        sum += arr[j]; //adds elements
        j = j + 2;     //ensures only "odd" elements are added
    }
}

cout << sum << endl; //just for testing right now

return sum; //returns the sum


}

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

cout << sum << endl; //just for testing right now

return sum; //returns the sum


}

int main(){


const int CODE = 12;
//                   0  1  2  3  4  5  6  7  8  9  10 11
int barCode[CODE] = {2, 3, 1, 3, 9, 0, 8, 5, 3, 7, 7, 9};


//addOdds(barCode, CODE);
addEvens(barCode, CODE);


//int numbers;

//int sum = 0;

//int j = 0; 


//int ansOdd;

//int ansEven;

//cout << sum << endl;

//ansOdd = barCode[0] + barCode[2] + barCode[4] + barCode[6] + barCode[8] + barCode[10];

//ansEven = barCode[1] + barCode[3] + barCode[5] + barCode[7] + barCode[9];




return 0;
}
