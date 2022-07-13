#include <iostream>
#include <string>

using namespace std;



class User{

public:
string name;
string DoB;

};

class Student: public User{

public:
int GPA;

};

class Employee: public User{

public:
string SIN;

};

int main()
{

Employee x;

x.name = "joe";

x.SIN = "1234567890";

Student y;

y.name = "biden";

y.GPA = 86;


return 0;

}