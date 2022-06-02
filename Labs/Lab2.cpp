#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int x;
	
	do {


//*****************
//lab one logic

		double a = 0;
		double b = 0;
		double c = 0;

		double inside = 0;
		double x1 = 0;
		double x2 = 0;

		cout << "welcome to the quadratic formula calculator\n";
		cout << "please enter your values for a, b and c respectively\n\n";

		cin >> a;
		cin >> b;
		cin >> c;

		cout << "\n";

		if (a == 0)
		{
			cout << "this isnt a quadratic function, but thats okay" << endl;

			if (b == 0)
			{
				cout << "x =" << endl;
				cout << c << endl;
			}


			else
			{
				x1 = (c / b) * (-1);
				cout << "solution is" << endl;
				cout << x1 << endl;
			}
		}

		else
		{

			inside = ((b * b) - (4 * a * c));

			if (inside >= 0)
			{
			
				x1 = (((-1) * b) + sqrt(inside)) / (2 * a);
				x2 = (((-1) * b) - sqrt(inside)) / (2 * a);

				cout << "solution x1 is" << endl;
				cout << x1 << endl;
				cout << "solution x2 is" << endl;
				cout << x2 << endl;
				
			}

			else
			{
				cout << "there is no real solutions for these values" << endl;
				
			}
		}

//**********


		cout << "\n";
		cout << "please enter your choice" << endl;
		cout << "0 to solve a quadratic equation" << endl;
		cout << "anything else will exit the program" << endl;
		cin >> x;

	} while (x == 0);

	cout << "Bye!" << endl;
	return 0;

}

