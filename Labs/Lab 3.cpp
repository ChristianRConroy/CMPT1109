#include <iostream>

using namespace std;

int menu() {

	//draw_triangle(get_size(), get_char());

	cout << "please enter which shape you would like drawn" << endl;
	cout << "1) for triangle" << endl;
	cout << "2) for diamond" << endl;
	cout << "3) for neither" << endl;

	int choice = 0;

	cin >> choice;

	return choice;

}

void draw_shape(int choice)
{




}

int get_size() {

	cout << "please enter your desired number of rows" << endl;
	int size;

	cin >> size;

	return size;


}

char get_char() {

	cout << "please enter your desired character, this character will be what the triangle consists of" << endl;

	char symbol;

	cin >> symbol;

	return symbol;


}

void draw_triangle(int rows, char x)

{
	//for the triangle
	for (int i = 1; i <= rows; i++) //only controls rows
	{
		for (int j = 1; j <= (rows - i); j++) //determines how many times blanks are printed
			cout << " ";

		for (int k = 1; k <= i; k++) //determines ls of triangle, how many times stars are printed
			cout << x;

		for (int v = 2; v <= i; v++) //determines rs of triangle, how many times stars are printed
			cout << x;

		cout << endl; //creates new rows


	}
}


void draw_bottomTri(int rows, char x)
{


	//for the diamond
	for (int i = 1; i <= rows; i++) //only controls rows
	{
		for (int v = 1; v <= i; v++) //determines how many times blanks are printed
			cout << " ";

		for (int j = 1; j <= (rows - i); j++) //determines left side, how many times stars are printed
			cout << x;

		for (int k = 1; k <= ((rows - 1) - i); k++) //determines right side, how many times stars are printed
			cout << x;


		cout << endl; //creates new rows

	}
}

void draw_diamond(int rows, char x)
{

	//for the triangle
	draw_triangle(rows, x);

	//for the bottom triangle
	draw_bottomTri(rows, x);


}

int main() {

	

draw_diamond(get_size(), get_char());


	return 0;

	}
	
	
	

