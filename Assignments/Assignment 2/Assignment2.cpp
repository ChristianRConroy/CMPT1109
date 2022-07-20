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
    double add(Rational x)
    {

        a = numerator;
        b = denomenator;

        c = x.getNum(x);

        d = x.getDenom(x);

        return (a + b + c + d);
    }

    //returns the integer value of the numerator of a rational number
    int getNum(Rational x)
    {

        this->numerator = numerator;

        return numerator;
    }
    //returns the integer value of the denomenator of a rational number
    int getDenom(Rational x)
    {

        this->denomenator = denomenator;

        return denomenator;
    }

    double sub(double num)
    {
        return (target - num);
    }

    double mult(double num)
    {
        return (target * num);
    }

    double div(double num)
    {
        return ((target / num));
    }

    bool less(double num)
    {
        if (target < num)
            return true;
        else
            return false;
    }
};

int main()
{

    Rational number(10, 20);

    Rational number2(4, 2);

    cout << number.add(number2);

    return 0;
}