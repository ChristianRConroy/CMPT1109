#include <iostream>

using namespace std;


bool is_leap(int year){

int rem, rem2, rem3;

rem = year % 4;
rem2 = year % 100;
rem3 = year % 400;

if(rem == 0)
{
    
 if(rem2 == 0)
 {
     if(rem3 ==0)
     {
        return true;
     }
     else
        {
        return false;
        }
 }
 else
    {
    return true;
    }
}
else
    {
    return false;
    }

}

int num_days_per_month(int month)
{

switch (month) {

    case 1:
    return 30;
        break;

    default:
        return 31;

}

}

int main(){
const int ROWS = 5;

const int COLUMNS = 7;


is_leap(1900);

return 0;

int month[ROWS][COLUMNS];

int day = 1;

num_days_per_month(1);


for (int i = 0; i < ROWS; i++) //for rows
{
    for(int j = 0; i < COLUMNS && day <= num_days_per_month(1); j++)
    {
        month[i][j] = day++;
    }
}



int counter = 1;
//to print the thing
for (int i = 0; i < ROWS; i++) //for rows
{
    for(int j = 0; i < COLUMNS && day <= num_days_per_month(1); j++)
    {
        cout << month[i][j] << " ";
        counter++;

    }
    cout << endl;
}

// jan 2004 starting from sunday
//is_leap(2004);





}