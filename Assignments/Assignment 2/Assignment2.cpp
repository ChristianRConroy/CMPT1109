#include <iostream>

using namespace std;

class Rational
{

private:
    double a = 0, b = 0, c = 0, target = 0, num = 0;

public:
    // default constructor for class
    Rational()
    {

        a = 0, b = 0, c = 0, target = 0;
    }
    // rational number class is created
    Rational(double target)
    {
        this -> target = target;
        a = 0, b = 0, c = 0;
    }

    double add(double num)
    {

        return (target + num);
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

    Rational number(10);

    cout << number.add(5) << endl;
    cout << number.sub(5) << endl;
    cout << number.mult(5) << endl;
    cout << number.div(5) << endl;
    cout << number.less(10) << endl;

    return 0;
}