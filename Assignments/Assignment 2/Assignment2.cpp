#include <iostream>

using namespace std;

class Rational
{

private:
    int numerator = 0, denomenator = 0;
    double a = 0, b = 0, c = 0, d = 0, target = 0, num = 0;

public:
    // default constructor for class
    Rational()
    {

        a = 0, b = 0, c = 0, d = 0, target = 0, numerator = 0, denomenator = 0;
    }
    // rational number class is created

    Rational(int numerator, int denomenator)
    {
        this->numerator = numerator;
        this->denomenator = denomenator;
    }

    // returns the integer value of the numerator of a rational number
    int getNum(Rational x)
    {

        this->numerator = numerator;

        return numerator;
    }

    // returns the integer value of the denomenator of a rational number
    int getDenom(Rational x)
    {

        this->denomenator = denomenator;

        return denomenator;
    }
    //adds two rational numbers
    double add(Rational x)
    {
        // this retrieves all our data we need to perform operations
        a = numerator;
        b = denomenator;
        c = x.getNum(x); //function that grabs from input
        d = x.getDenom(x);

        return ((a * d + b * c) / (b * d));
    }

//subtracts two rational numbers
    double sub(Rational x)
    {
        // this retrieves all our data we need to perform operations
        a = numerator;
        b = denomenator;
        c = x.getNum(x); //function that grabs from input
        d = x.getDenom(x);

        return ((a * d - b * c) / (b * d));
    }

//multiplication of rational numbers
    double mul(Rational x)
    {

        // this retrieves all our data we need to perform operations
        a = numerator;
        b = denomenator;
        c = x.getNum(x); //function that grabs from input
        d = x.getDenom(x);

        return ((a * c) / (b * d));
    }

//division of two rationals
    double div(Rational x)
    {

        // this retrieves all our data we need to perform operations
        a = numerator;
        b = denomenator;
        c = x.getNum(x); //function that grabs from input
        d = x.getDenom(x);

        return ((a * d) / (c * b));
    }

//less than
    bool less(Rational x)
    {
        //collects all our necessary data
        a = numerator;
        b = denomenator;
        c = x.getNum(x); //function that finds denom and num of input class
        d = x.getDenom(x);

        if ((a * d) < (c * b))
            return true;
        else
            return false;
    }
};

int main()
{

    Rational number(1, 8);

    Rational number2(1, 5);

    cout << number.add(number2) << endl;
    cout << number.sub(number2)<< endl;
    cout << number.mul(number2)<< endl;
    cout << number.div(number2)<< endl;
    cout << number.less(number2)<< endl;

    return 0;
}