#include <iostream>
#include <cmath>

using namespace std;

class Polynomial
{

private:
    bool flag;
    int SIZE;
    double c1, c2, c3, c4;
    int arithmetic;
    int num;
    int y;

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

        arithmetic = 0, num = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0, SIZE = 10;

        cout << "please input the degree of the polynomial" << endl;
        cin >> num;
        SIZE = num + 1;
        arr = new double[SIZE];
        for (int i = 0; i < SIZE; i++)
        {
            arr[i] = 0;
        }
        cout << "please input the polynomials coefficients" << endl;
        for (int i = 0; i < SIZE; i++)
        {
            cin >> arithmetic;
            arr[i] = arithmetic;
        }
    }

    // non-default constructor
    Polynomial(double c1, double c2, double c3, double c4)
    {
        flag = false;
        SIZE = 4;
        arithmetic = 0;
        arr = new double[20];
        for (int i = 0; i < 20; i++)
        {
            arr[i] = 0;
        }
        arr[0] = c1;
        arr[1] = c2;
        arr[2] = c3;
        arr[3] = c4;
    }

    // copy constructor
    Polynomial(Polynomial &y)
    {
        arr = new double[10];
        for (int i = 0; i < 10; i++)
        {
            this->arr[i] = y.arr[i];
        }
    }

    //
    void print()
    {
        if (flag == true)
        {
            for (int i = 0; i < 10; i++)
            {
                // makes the constant looks clean
                if (arr[i] != 0)
                {
                    if (i == 0)
                    {
                        cout << arr[i];
                    }
                    else
                        cout << arr[i] << "x^" << i;

                    // makes sure theres no extra plus hanging around
                    if (i != 7 - 1)
                    {
                        cout << " + ";
                    }
                }
            }
            cout << endl;
        }
        else
        {
            for (int i = 0; i < SIZE; i++)
            {
                // makes the constant looks clean
                if (arr[i] != 0)
                {
                    if (i == 0)
                    {
                        cout << arr[i];
                    }
                    else
                        cout << arr[i] << "x^" << i;

                    // makes sure theres no extra plus hanging around
                    if (i != SIZE - 1)
                    {
                        cout << " + ";
                    }
                }
            }
        }
        cout << endl;
        flag = false;
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
        flag = true;

        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j < SIZE; j++)
            {
                arr[i + j] += arr[i] * x.arr[j];
            }
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

    // extracts a coefficient based on a specific index
    double get_Coffee(int index)
    {

        return arr[index];
    }

    // sets a coefficient when given a specific index and value
    void set_Coffee(int index, double coffee)
    {

        arr[index] = coffee;
    }

    // prints numbers

    // evaluates polynomials
    double eval()
    {

        cout << "please chose which number you'd like to pluggin" << endl;

        cin >> num;

        for (int i = 0; i < SIZE; i++)
        {
            arithmetic += arr[i] * pow(num, i);
        }
        return arithmetic;
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
    return x.arr[0];
}

// const - poly
double operator-(int y, Polynomial x)
{

    x.arr[0] = y - x.arr[0];

    for (int i = 1; i < 5; i++)
    {

        x.arr[i] = -1 * x.arr[i];
    }
    return x.arr[0];
}

// const * poly
double operator*(int y, Polynomial x)
{

    x.arr[0] = y * x.arr[0];
    return x.arr[0];
}

int main()
{

    Polynomial p1(1, 1, 1, 1);
    Polynomial p2(1, 1, 1, 1);
    // Polynomial p3;

    // testers for rational operations
    p1 + p2;
    p1.print();
    p1 - p2;
    p1.print();
    p1 *p2;
    p1.print();
    cout << endl;

    // testers for const () rational operations
    cout << 5 * p1 << endl;
    cout << 5 + p1 << endl;
    cout << 5 - p1 << endl;

     cout << endl;

    // testers for rational () const   operations
    p2 + 5;
    p2.print();
    p2 - 5;
    p2.print();
    p2 * 5;
    p2.print();
    cout << endl;

    // other function testers
    cout << p1.get_Coffee(1) << endl;
    p1.set_Coffee(1, 2);
    cout << p1.get_Coffee(1) << endl;

    cout << p1.eval() << endl;

    return 0;
}