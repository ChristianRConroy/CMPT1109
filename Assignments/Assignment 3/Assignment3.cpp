#include <iostream>

using namespace std;

class Polynomial
{

private:
    const int SIZE = 5;

    double c1, c2, c3;

    // dynamic array linked to pointer
    double *arr;
    double *work;

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
    void add(Polynomial arr[])
    {


            for(int i = 0; i < SIZE; i++)
            {

                work = this -> arr[i] + arr[i];

            }
       
        
    }

    // tester for now
    void printer()
    {

        cout << arr[0] << arr[1] << arr[2] << endl;
    }

    // destructor
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

    cubic.add(quadratic);
    // quadratic.printer();

    return 0;
}