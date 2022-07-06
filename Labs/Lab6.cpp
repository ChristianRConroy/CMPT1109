#include<iostream>

using namespace std;

const int ROWS = 4;

int COLUMNS_PER_ROWS_ARR [ROWS] = {5, 6, 4, 3};

int main(){



int user_Id = 12345;
int lab_Num = 3;
int comp_Station = 2;

string setter = "empty";



string **arr = new string *[ROWS];

arr[0] = new int [5];
arr[1] = new int [6];
arr[2] = new int [4];
arr[3] = new int [3];



arr[lab_Num -1][comp_Station -1] = user_Id;

for(int i = 0; i < ROWS; i++){
    for(int j = 0; j< COLUMNS_PER_ROWS_ARR[i]; j++)
    {
        arr[i][j] = setter;

    }

        cout << endl;
}

for(int i = 0; i < ROWS; i++){
    for(int j = 0; j< COLUMNS_PER_ROWS_ARR[i]; j++)
    {
        cout << arr[i][j] << " ";

    }

        cout << endl;
}

/*
cout << "please enter your user ID" << endl;
    cin >> user_Id;
    if(sizeof(user_Id) != 5)
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

*/




delete arr[0];
delete arr[1];
delete arr[2];
delete arr[3];



    return 0;
}