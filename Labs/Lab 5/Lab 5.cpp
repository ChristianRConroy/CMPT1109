#include <iostream>
#include <fstream>
using namespace std;




int main(){


ifstream file;

char partAnswer[100];

int counter = 0;

bool ignoreN = false;

file.get(partAnswer[counter++]); //this goes to the next character and .get reads from the file

while(!file.eof()){ //this will allow us to read the whole line

    if(partAnswer[counter - 1] == '\n') //this will give us our answer
    {   

    cout << partAnswer << endl;

    counter = 0;

    }
    else if(partAnswer[counter - 1] == '\n'){

       int x = 16;     // get_next_number();

       if(x >= 20) //this effectively checks if you have a hash in an array
       {
            partAnswer[counter - 1] = '1';
            partAnswer[counter] = (x - 10) + '0';

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