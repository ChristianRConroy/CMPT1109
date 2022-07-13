#include <iostream>
#include <string>

using namespace std;


class Movie {

private:

string name;

string rating[4];

string MBAA;

int numRating1, numRating2, numRating3, numRating4, numRating5;

public:


Movie (string name, string MBAA)
{

//these connect our inputs to the members of our class
this -> name = name; 
this -> MBAA = MBAA;

int numRating1 = 0, numRating2 = 0, numRating3 = 0, numRating4 = 0, numRating5 = 0; 

}

Movie()
{



}

void addRating(int num)
{
    if(num == 1)
        numRating1++;
    else if(num == 2)
        numRating2++;
    else if(num == 3)
        numRating3++;
    else if(num == 4)
        numRating4++;
    else if(num == 5)
        numRating5++;
    else
        cout << "invalid entry" << endl;
}

string getName()
{
    return name;
}

string getMBAA(){

    return MBAA;
}


double getAverage (){

    double total = 0, bottom = 0;

    bottom = (numRating1 + numRating2 + numRating3 + numRating4 + numRating5) * 1.0;

    total = (numRating1*1 + numRating2*2 + numRating3*3 + numRating4*4 + numRating5*5) / bottom;

    return total;
}

void setName(string name)
{
    this -> name = name;
}

void setMbaa (string MBAA)
{
    this -> MBAA = MBAA;
}





};


int main()
{

Movie movie1("300", "R");

movie1.addRating(1);
movie1.addRating(1);
movie1.addRating(3);
movie1.addRating(3);
movie1.addRating(5);
cout << movie1.getName() << endl;
cout << movie1.getMBAA() << endl;
cout << movie1.getAverage() << endl;

/*
Movie movie2("The Godfather", "R");

movie2.addRating(1);
movie2.addRating(1);
movie2.addRating(3);
movie2.addRating(3);
movie2.addRating(5);
movie2.getName();
movie2.getMBAA();
cout << movie2.getAverage();


*/

return 0;

}