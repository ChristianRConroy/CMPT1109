#include <iostream>
#include <string>

using namespace std;

class Movie
{

private:
    // defines all our variables

    string name;

    string MBAA;

    int ratingarr[5];

    int numRating1, numRating2, numRating3, numRating4, numRating5;

public:
    // regular constructor
    Movie(string name, string MBAA)
    {

        // these connect our inputs to the members of our class
        this->name = name;
        this->MBAA = MBAA;

        // initializes our rating counters
        numRating1 = 0, numRating2 = 0, numRating3 = 0, numRating4 = 0, numRating5 = 0;


        for(int i = 0; i < 5; i++)
        {
            ratingarr[i] = 0;
        }
    }

    // default constructor
    Movie()
    {

        numRating1 = 0, numRating2 = 0, numRating3 = 0, numRating4 = 0, numRating5 = 0;
         
         for(int i = 0; i < 5; i++)
        {
            ratingarr[i] = 0;
        }
    }

    // increments our rating counter "adds a review"
    void addRating(int num)
    {
        if (num == 1)
        {
             ratingarr[0]++;
        }
        else if (num == 2)
        {
            ratingarr[1]++;
        }
        else if (num == 3)
        {
            ratingarr[2]++;
        }
        else if (num == 4)
        {
            ratingarr[3]++;
        }
        else if (num == 5)
        {
            ratingarr[4]++;
        }
        else
            cout << "invalid entry" << endl;
    }

    // returns the name of the movie
    string getName()
    {
        return name;
    }

    // returns the rating of the movie
    string getMBAA()
    {

        return MBAA;
    }

    // collects the average
    double getAverage()
    {

        double total = 0, amountCount = 0;

        // ensures we get a proper average regardless of test cases
        amountCount = (ratingarr[0] + ratingarr[1] + ratingarr[2] + ratingarr[3] + ratingarr[4]) * 1.0;

        total = (ratingarr[0] * 1.0 + ratingarr[1] * 2.0 + ratingarr[2] * 3.0 + ratingarr[3] * 4.0 + ratingarr[4] * 5.0) / amountCount;

        return total;
    }

    // sets our movie name
    void setName(string name)
    {
        this->name = name;
    }

    // gets our rating
    void setMbaa(string MBAA)
    {
        this->MBAA = MBAA;
    }
};

int main()
{

    // test case number 2
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

    // test case number 2
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