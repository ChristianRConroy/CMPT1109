#include <iostream>

using namespace std;

class C1
{

public:

int *p1;
    C1()
    {
        p1 = new int;
        *p1 = 5;
        cout << "this is a constructor of c1";
    }

    ~C1() //this is a destructor, it removes the object after its purpose is completed
    {
        delete p1; //it is usually used to eliminate dynamic arrays and variables
        cout << "this is a destructor of c1";
    }

 C1(C1 & x){
        p1 = new int;
        *p1 = *(x.p1);
    }

    void operator=(C1 x){

        *p1 = (*x.p1); //deep copy

    }
   
};

class C2 : public C1
{

public:
    C2()
    {

        cout << "this is a constructor of c2";
    }

    ~C2()
    {

        cout << "this is a destructor of c2";
    }
};

int main()
{
    C1 obj1;
   
    C1 obj2;

    obj2 = obj1; //sets the number obj1 points to to object 2

    obj2.p1 = new int;

    *(obj2.p1) = 10; //sets object 2 pointer to 10

    cout << (*obj1.p1); //object 1 will be 10 because of a previous assignmetn
    //this is known as a shallow copy

    return 0;
}