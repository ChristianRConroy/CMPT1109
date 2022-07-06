#include<iostream>

using namespace std;

int main(){


int user_Id = 0;
int lab_Num = 0;
int comp_Station = 0;

cout << "please enter your user ID" << endl;
    cin >> user_Id;
    if(sizeof(user_Id) > 5)
    {
        cout << "you input too many numbers" << endl;
        return 0;
    }

cout << "please enter your lab number" << endl;
    cin >> lab_Num;

     if(lab_Num > 4 && lab_Num < 0)
    {
        cout << "your lab has the wrong number" << endl;
        return 0;
    }

cout << "please enter your comp station" << endl;
    cin >> comp_Station;

     if(comp_Station > 4 && comp_Station < 0)
    {
        cout << "your comp station has the wrong number" << endl;
        return 0;
    }




    return 0;
}