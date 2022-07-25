#include <iostream>
#include <string>

using namespace std;

class Movie
{

private:
    // defines all our variables

    const int SET = 5;

    string name;

    string MBAA;

    int *arr;

public:
    // regular constructor
    Movie(string name, string MBAA)
    {

        // these connect our inputs to the members of our class
        this->name = name;
        this->MBAA = MBAA;

        arr = new int[SET];

        for (int i = 0; i < SET; i++)
        {
            arr[i] = 0;
        }
    }

    // default constructor
    Movie()
    {

        arr = new int[SET];

        for (int i = 0; i < SET; i++)
        {
            arr[i] = 0;
        }
    }

    // increments our rating counter "adds a review"
    void addRating(int num)
    {
        if (num >= 1 || num <= SET)
            arr[num - 1]++;
        else
            cout << "wrong" << endl;
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

        double sum1 = 0, sum2 = 0;

        for (int i = 0; i < SET; i++)
        {
            sum1 += arr[i] * (i + 1);
            sum2 += arr[i];
        }

        return sum1 / (sum2 * 1.0);
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

    // copy constructor
    Movie(Movie &y)
    {
        arr = new int[SET];
        for (int i = 0; i < SET; i++)
        {
            this->arr[i] = y.arr[i];
        }
    }

    // operator equal member function
    void operator=(Movie x)
    {

        // deep copy
        for (int i = 0; i < SET; i++)
        {
            this->arr[i] = x.arr[i];
        }
    }

    // deconstructors
    ~Movie()
    {
        delete[] arr;
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

    movie1 = movie2;
    movie1.addRating(3);
    cout << movie1.getAverage() << endl;
    cout << movie2.getAverage() << endl;

    return 0;
}