#include <iostream>
#include <fstream>
using namespace std;




int main(){

ifstream file;

file.open("answers.txt");

if(file.fail())
{
cout << "something went wrong" << endl;

}
else

cout << "all good" << endl;

while(true){

cout << "plz, enter your next question" << endl;


string question;

cin >> question;

string answer;

if (file >> answer)
cout << answer << endl;

else
file.close();
file.open("answers.txt");

file >> answer;
cout << answer << endl;

}





return 0;    
}