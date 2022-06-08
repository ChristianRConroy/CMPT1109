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
        cout << "leap year" << endl;
        return true;
     }
     else
        {
        cout <<"not a leap year" << endl;
        return false;
        }
 }
 else
    {
    cout <<"leap year"<< endl;
    return true;
    }
}
else
    {
    cout <<"common year" << endl;
    return false;
    }

}


int main(){

is_leap(2003);

return 0;

}