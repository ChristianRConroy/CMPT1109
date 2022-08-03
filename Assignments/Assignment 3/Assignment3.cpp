#include <iostream>

using namespace std;

class Polynomial
{

private:
    const int SIZE = 5;

    double c1, c2, c3;

    // dynamic array linked to pointer
    double *arr;

public:
    // default constructor
    Polynomial()
    {
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

    // operator overloading function
    void operator=(Polynomial x)
    {

        // deep copy
        for (int i = 0; i < SIZE; i++)
        {
            this->arr[i] = x.arr[i];
        }
    }

    // addition function
    void add_Poly(Polynomial x)
    {
        for (int i = 0; i < SIZE; i++)
        {
            arr[i] = arr[i] + x.arr[i];
        }
    }

    // subtracts polynomials
    void sub_Poly(Polynomial x)
    {
        for (int i = 0; i < SIZE; i++)
        {
            arr[i] = arr[i] - x.arr[i];
        }
    }

    // multiplies coefficients, needs work
    void mult_Poly(Polynomial x)
    {
        for (int i = 0; i < SIZE; i++)
        {
            arr[i] = arr[i] * x.arr[i];
        }
    }
    
    //adds a constant to it
    void add_const(int x)
    {
        arr[0] = arr[0] + x;

    }
    
    //subtracts a constant
    void sub_const(int x)
    {
        arr[0] = arr[0] - x;

    }

    //multiply via a constant
    void mult_const(int x)
    {
        for(int i = 0; i < SIZE; i++)
        {
            arr[i] = arr[i] * x;
        }

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
        // delete[] work;
    }
};

int main()
{
    Polynomial quadratic(1, 2, 0);
    Polynomial cubic(2, 3, 4);

    // quadratic.add_Poly(cubic);
    // quadratic.sub_Poly(cubic);
    // quadratic.mult_Poly(cubic);
    quadratic.mult_const(3);

    quadratic.print();
    return 0;
}