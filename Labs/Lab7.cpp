#include <iostream>
#include <string>

using namespace std;


class Movie {

private:

string name;

string rating[4];

int numRating1, numRating2, numRating3, numRating4, numRating5;

public:


Movie (string x, string rating)
{

string name = x;

string rating[4] = {"G", "PG", "PG-13", "R"};

int numRating1 = 0, numRating2 = 0, numRating3 = 0, numRating4 = 0, numRating5 = 0; 

}

void addRating(int num){

switch(num)
{

    case 1:
    {	

        break;
    }

    case 2:
    {
        
        break;
    }

    case 3:
    {
        
        break;
    }

    case 4:
    {	

        break;
    {
    case 5:
    {

        break;
    }

    default:
    {

        break;
    }



    }   
}

int getAverage (){

    ;
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
movie1.getName();
movie1.getMBAA();
cout << movie1.getAverage();

Movie movie2("The Godfather", "R");

movie2.addRating(1);
movie2.addRating(1);
movie2.addRating(3);
movie2.addRating(3);
movie2.addRating(5);
movie2.getName();
movie2.getMBAA();
cout << movie2.getAverage();




return 0;

}