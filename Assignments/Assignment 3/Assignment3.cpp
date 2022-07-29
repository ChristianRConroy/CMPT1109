#include <iostream>

using namespace std;

class Polynomial
{

private:
    const int SIZE = 5;

    double c1, c2, c3;

    // dynamic array linked to pointer
    double *work = new double[SIZE];
    double *arr = new double[SIZE];

public:
    // default constructor
    Polynomial()
    {
        c1 = 0, c2 = 0, c3 = 0;
        const int SIZE = 5;
        // cleans the array
        for (int i = 0; i < SIZE; i++)
        {
            arr[i] = 0;
        }
    }
    // non-default constructor
    Polynomial(double c1, double c2, double c3)
    {
        arr[0] = c1;
        arr[1] = c2;
        arr[2] = c3;
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

    void operator=(Polynomial x)
    {

        // deep copy
        for (int i = 0; i < SIZE; i++)
        {
            this->arr[i] = x.arr[i];
        }
    }

    void add(Polynomial x[])
    {

        for (int i = 0; i < SIZE; i++)
        {
        }
    }
    void printer()
    {

        cout << arr[0] << arr[1] << arr[2] << endl;
        cout << c1 << c2 << c3 << endl;
    }

    ~Polynomial()
    {
        // gets rid of the array
        delete[] arr;
        delete[] work;
    }
};

int main()
{
    Polynomial quadratic(1, 2, 0);
    Polynomial cubic(2, 3, 4);

    cubic.printer();
    quadratic.printer();

    return 0;
}