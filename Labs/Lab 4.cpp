#include <iostream>

using namespace std;

//lab 4 is simplified version of lab 5, both will be due next week
//lab 5 will be full implementation while lab 4 will be just printing one month
//jan to on sunday is lab 4



//string month[12]= {"January", "Febuary", "March", "April", "May", "June", "July", "August", "September", "November", "December"};




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

int num_days_per_month(int month, int year)
{

if (month == 4 || month == 6 || month == 9 || month == 11 || month == 2 )
{
    if(month == 2 && is_leap(year))
    {
        return 29;
    }
    else if(month == 2 && is_leap(year) != true)
    {
        return 28;
    }
    else 
        {
            return 30;
        }
}
else
{
    return 31;
}
}


int main(){

int year = 2004;

cout << "Calender for year" << year << endl;
cout << "Sun Mon Tue Wed Thur Fri Sat Sun" << endl;

int day = 1;

for(int i = 0; i < 5; i++)
{
    for(int j = 0; j < 7; j++)
    {

        cout << day;
        cout << "   ";

        //if(i < 2)
          //  cout << "  ";

        day++;

    }

    cout << endl;
}


return 0;

}