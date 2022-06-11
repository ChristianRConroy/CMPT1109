#include <iostream>

using namespace std;

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
cout << sum << endl; //just for testing right now

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

cout << sum << endl; //just for testing right now

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




int main(){


const int CODE = 12;
//                   0  1  2  3  4  5  6  7  8  9  10 11
int barCode[CODE] = {2, 3, 1, 3, 9, 0, 8, 5, 3, 7, 7, 9};

//cout << "odds" << endl;
//addOdds(barCode, CODE);
//cout << "evens" << endl;
//addEvens(barCode, CODE);
//cout << "both added" << endl;
addEvens_Odds(barCode, CODE);



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
