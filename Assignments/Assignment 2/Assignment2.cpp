#include <iostream>
#include <fstream>

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

    // rational number class for more complicated rationals is created
    Rational(int numerator, int denomenator)
    {
        this->numerator = numerator;
        this->denomenator = denomenator;
    }

    // rational number class for things like 34/1 or 2/1 is created
    Rational(int numerator)
    {
        this->numerator = numerator;
        denomenator = 1;
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
    
    // adds two rational numbers
    double add(Rational x)
    {
        // this retrieves all our data we need to perform operations
        a = numerator;
        b = denomenator;
        c = x.getNum(x); // function that grabs from input
        d = x.getDenom(x);

        return ((a * d + b * c) / (b * d));
    }

    // subtracts two rational numbers
    double sub(Rational x)
    {
        // this retrieves all our data we need to perform operations
        a = numerator;
        b = denomenator;
        c = x.getNum(x); // function that grabs from input
        d = x.getDenom(x);

        return ((a * d - b * c) / (b * d));
    }

    // multiplication of rational numbers
    double mul(Rational x)
    {

        // this retrieves all our data we need to perform operations
        a = numerator;
        b = denomenator;
        c = x.getNum(x); // function that grabs from input
        d = x.getDenom(x);

        return ((a * c) / (b * d));
    }

    // division of two rationals
    double div(Rational x)
    {

        // this retrieves all our data we need to perform operations
        a = numerator;
        b = denomenator;
        c = x.getNum(x); // function that grabs from input
        d = x.getDenom(x);

        return ((a * d) / (c * b));
    }

    // less than
    bool less(Rational x)
    {
        // collects all our necessary data
        a = numerator;
        b = denomenator;
        c = x.getNum(x); // function that finds denom and num of input class
        d = x.getDenom(x);

        if ((a * d) < (c * b))
            return true;
        else
            return false;
    }
   
    // returns the negative of the member
    double neg()
    {

        a = numerator;
        b = denomenator;

        return ((-1 * a) / b);
    }
};

// i wasnt able to get it to work with classes, but here is a function outside the
// member class that writes to a file
void output()
{
    ofstream file;
    int x, y;
    cout << "please enter numerator" << endl;
    cin >> x;
    cout << "please enter denomenator" << endl;
    cin >> y;

    file.open("Rationals.txt");

    file << x << "/" << y;

    file.close();
}

//non class member function that does the same thing
void input()
{

    string rational;

    ifstream file;

    file.open("Rationals.txt");

    file >> rational;

    file.close();
}

int main()
{

    //test cases
    Rational number1(8,3);
    Rational number2(2);

//tests
cout << number1.add(number2) << endl;
cout << number1.sub(number2) << endl;
cout << number1.mul(number2) << endl;
cout << number1.div(number2) << endl;
cout << number1.less(number2) << endl;
cout << number1.neg() << endl;
cout << number2.neg() << endl;

//non-member file i/o
input();
output();

    return 0;
}