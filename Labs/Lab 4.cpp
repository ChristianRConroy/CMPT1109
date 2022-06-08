#include <iostream>

using namespace std;


void is_leap(int year){

int rem;

int rem2;

int rem3;

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
     }
     else
        cout <<"not a leap year" << endl;
 }
 else
    cout <<"leap year"<< endl;
}
else
    cout <<"common year" << endl;


}

int main(){

is_leap(2000);

return 0;

}