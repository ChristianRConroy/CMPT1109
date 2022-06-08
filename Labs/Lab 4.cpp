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


int main(){

is_leap(1900);

return 0;

}