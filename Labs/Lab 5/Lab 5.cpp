#include <iostream>
#include <fstream>
using namespace std;

int NEXT_CHAP = 18;

int get_next_num(){ //finds the next chapter in the textbook

    if(NEXT_CHAP == 0)
    { 
        NEXT_CHAP = 18;
        return NEXT_CHAP--;
    }

    return NEXT_CHAP--;
}

int main(){


ifstream file; //our object

string question; //just for the question

char partAnswer[100]; //a 100 index array to fit our strings into

int counter = 0; //counter

bool ignoreN = false; //known as a "false flag" it will turn true later on if 
                      //correct conditions are met


//opens our file
file.open("answers.txt");

//checks to see if the file even opens
if(file.fail())
{
    cout << "problem detected" << endl;
    return 0;
}


    cout << "please  type in your question" << endl;

        cin >> question;

while(!file.eof())  //this will allow us to read the whole line
{

    if(partAnswer[counter - 1] == '\n') //this will give us our answer
    {   
        cout << partAnswer << endl;
        counter = 0;
    }

    else if(partAnswer[counter - 1] == '#') //this code checks if theres a hash in the c-string
    {

       int NEXT_CHAP;
       NEXT_CHAP = get_next_num();

       if(NEXT_CHAP >= 20) 
       {
            partAnswer[counter - 1] = '1';
            partAnswer[counter++] = (NEXT_CHAP - 10) + '0';

       }
       else
       {
            partAnswer[counter - 1] = (NEXT_CHAP - 10) + '0';
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