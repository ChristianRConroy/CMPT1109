#include <iostream>
#include <fstream>
using namespace std;




int main(){

ifstream file;

char partAnswer[100];

int counter = 0;

file.get(partAnswer[counter++]); //this goes to the next character and .get reads from the file

while(!file.eof()){ //this will allow us to read the whole line

    if(partAnswer[counter] == '\n') //this will give us our answer
    {   
    cout << partAnswer;
    counter = 0;
    }
   else
   file.get(partAnswer[counter++]);



}


return 0;    
}