#include <iostream>

using namespace std;

class Polynomial
{

private:
    const int SIZE = 5;
    double c1, c2, c3;
    int arithmetic = 0;
    int y = 0;

    // allows const () poly operations
    friend double operator+(int y, Polynomial x);
    friend double operator-(int y, Polynomial x);
    friend double operator*(int y, Polynomial x);

    // dynamic array linked to pointer
    double *arr;

public:
    //*************************************************
    // constructors

    // default constructor
    Polynomial()
    {
        int arithmetic = 0;
        c1 = 0, c2 = 0, c3 = 0;
        const int SIZE = 5;
        arr = new double[SIZE];
        for (int i = 0; i < SIZE; i++)
        {
            arr[i] = 0;
        }
    }

    // non-default constructor
    Polynomial(double c1, double c2, double c3)
    {
        int arithmetic = 0;
        arr = new double[SIZE];
        arr[0] = 1;
        arr[1] = c1;
        arr[2] = c2;
        arr[3] = c3;
    }

    // copy constructor
    Polynomial(Polynomial &y)
    {
        arr = new double[SIZE];
        for (int i = 0; i < SIZE; i++)
        {
            this->arr[i] = y.arr[i];
        }
    }

    // oo assignment operation
    void operator=(Polynomial x)
    {

        // deep copy
        for (int i = 0; i < SIZE; i++)
        {
            this->arr[i] = x.arr[i];
        }
    }

    //*************************************************
    // addition overloading

    // oo adding polynomials
    void operator+(Polynomial x)
    {
        for (int i = 0; i < SIZE; i++)
        {
            arr[i] = arr[i] + x.arr[i];
        }
    }

    // oo adding constants
    void operator+(int x)
    {
        arr[0] = arr[0] + x;
    }

    //*************************************************
    // subtraction overloading

    // oo subtracting polynomials
    void operator-(Polynomial x)
    {

        for (int i = 0; i < SIZE; i++)
        {
            arr[i] = arr[i] - x.arr[i];
        }
    }

    // 00 subtracting constants
    void operator-(int x)
    {
        arr[0] = arr[0] - x;
    }

    //*************************************************
    // multiplication overloading

    // oo mult polynomials
    void operator*(Polynomial x)
    {
        for (int i = 0; i < SIZE; i++)
        {
            arr[i] = arr[i] * x.arr[i];
        }
    }

    // multiply via a constant
    void operator*(int x)
    {
        for (int i = 0; i < SIZE; i++)
        {
            arr[i] = arr[i] * x;
        }
    }

    //*************************************************
    // other functions

    double getcoefficient(int index)
    {

        return arr[index];
    }

    // tester for now
    void print()
    {

        cout << arr[0] << endl;
        cout << arr[1] << endl;
        cout << arr[2] << endl;
        cout << arr[3] << endl;
    }

    // destructor
    ~Polynomial()
    {
        // gets rid of the array
        delete[] arr;
    }
};

// const + poly
double operator+(int y, Polynomial x)
{

    x.arr[0] = y + x.arr[0];
    return *x.arr;
}

// const - poly
double operator-(int y, Polynomial x)
{
    x.arr[0] = y - x.arr[0];

    for (int i = 1; i < 5; i++)
    {

        x.arr[i] = -1 * x.arr[i];
    }

    return *x.arr;
}

// const * poly
double operator*(int y, Polynomial x)
{

    x.arr[0] = y * x.arr[0];
    return *x.arr;
}

int main()
{
    int num = 5;
    Polynomial quadratic(1, 2, 0);
    Polynomial cubic(2, 3, 4);

    // quadratic.add_Poly(cubic);
    // quadratic.sub_Poly(cubic);
    // quadratic.mult_Poly(cubic);
    // quadratic.mult_const(3);

    //cout << num + quadratic << endl;
    //cout << num - quadratic << endl;
    //cout << num * quadratic << endl;
    // cout << num - quadratic << endl;
    // cout << num * quadratic << endl;


    return 0;
}