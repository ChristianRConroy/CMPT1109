#include <iostream>
#include <string>

using namespace std;


class Movie {

private:

//defines all our variables

string name;    

string MBAA;

int numRating1, numRating2, numRating3, numRating4, numRating5;

public:

//default constructor
Movie (string name, string MBAA)
{

//these connect our inputs to the members of our class
this -> name = name; 
this -> MBAA = MBAA;

//initializes our rating counters
numRating1 = 0, numRating2 = 0, numRating3 = 0, numRating4 = 0, numRating5 = 0;

}

//regular constructor
Movie()
{

numRating1 = 0, numRating2 = 0, numRating3 = 0, numRating4 = 0, numRating5 = 0; 

}

//increments our rating counter "adds a review"
void addRating(int num)
{
    if(num == 1)
    {
        numRating1++;
    }
    else if(num == 2)
    {
        numRating2++;

    }
    else if(num == 3)
    {
        numRating3++;

    }
    else if(num == 4)
    {
        numRating4++;

    }
    else if(num == 5)
    {
        numRating5++;

    }
    else
        cout << "invalid entry" << endl;
}

//returns the name of the movie
string getName()
{
    return name;
}

//returns the rating of the movie
string getMBAA(){

    return MBAA;
}

//collects the average
double getAverage (){

    double total = 0, amountCount = 0;

    //ensures we get a proper average regardless of test cases
    amountCount = (numRating1 + numRating2 + numRating3 + numRating4 + numRating5) * 1.0;

    total = (numRating1*1.0 + numRating2*2.0 + numRating3*3.0 + numRating4*4.0 + numRating5*5.0) / amountCount;

    return total;
}

//sets our movie name
void setName(string name)
{
    this -> name = name;
}

//gets our rating
void setMbaa (string MBAA)
{
    this -> MBAA = MBAA; 
}


};


int main()
{

//test case number 2
Movie movie1("300", "R");

movie1.addRating(1);
movie1.addRating(1);
movie1.addRating(3);
movie1.addRating(3);
movie1.addRating(5);
cout << movie1.getName() << endl;
cout << movie1.getMBAA() << endl;
cout << movie1.getAverage() << endl;

cout << endl;


//test case number 2
Movie movie2("The Godfather", "R");

movie2.addRating(1);
movie2.addRating(3);
movie2.addRating(5);
movie2.addRating(5);
movie2.addRating(5);
cout << movie2.getName() << endl;
cout << movie2.getMBAA() << endl;
cout << movie2.getAverage() << endl;




return 0;

}