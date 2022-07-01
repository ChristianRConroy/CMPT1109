#include <iostream>
#include <fstream>
using namespace std;

int NEXT_CHAP = 18;

int get_next_num(){

if(NEXT_CHAP == 0){

NEXT_CHAP = 18;
return NEXT_CHAP--;

}

return NEXT_CHAP--;
}

int main(){


ifstream file;

char partAnswer[100];

int counter = 0;

bool ignoreN = false;

string question;

file.open("answers.txt");

if(file.fail()){
cout << "problem detected" << endl;
}

   cout << "please  type in your question" << endl;
    cin >> question;

while(!file.eof()){ //this will allow us to read the whole line


 

    if(partAnswer[counter - 1] == '\n') //this will give us our answer
    {   

    cout << partAnswer << endl;

    counter = 0;

    }

    else if(partAnswer[counter - 1] == '#')
    {

       int x;
       x = get_next_num();

       if(x >= 20) //this effectively checks if you have a hash in an array
       {
            partAnswer[counter - 1] = '1';
            partAnswer[counter++] = (x - 10) + '0';

       }
       else
       {
            partAnswer[counter - 1] = (x - 10) + '0';
       }
        ignoreN = true;
    }

    else if(ignoreN && partAnswer[counter - 1] == 'N'){
        counter--;
        file.get(partAnswer[counter++]);
        continue;
    }


   file.get(partAnswer[counter++]);



}

return 0;    
}