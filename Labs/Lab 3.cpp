#include <iostream>

using namespace std;









//*******************************************************************************
//this function retrieves the size of the rows you'd like in your triangle/diamond

int get_size() { 

	cout << "please enter your desired number of rows" << endl;
	int size;

	cin >> size;

	return size;


}

//*******************************************************************************
//this function asks which character you'd like your shapes to be made of

char get_char() { 

	cout << "please enter your desired character, this character will be what the shape will consists of" << endl;

	char symbol;

	cin >> symbol;

	return symbol;


}


//*******************************************************************************
//for the triangle

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

//*******************************************************************************
//for the bottom of the triangle

void draw_bottomTri(int rows, char x) 
{


	//for the diamond (old comment)
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

//*******************************************************************************
//uses both top and botton of triangle to create diamond

void draw_diamond(int rows, char x) 
{

	//for the triangle
	draw_triangle(rows, x);

	//for the bottom triangle
	draw_bottomTri(rows, x);


}


//*******************************************************************************
//this function asks you which shape you'd like to draw

int menu() { 



	cout << "please enter which shape you would like drawn" << endl;
	cout << "1) for triangle" << endl;
	cout << "2) for diamond" << endl;
	cout << "3) for neither" << endl;

	int choice;

	cin >> choice;

	return choice;

}


//*******************************************************************************
//this function draws the shape based on which you picked

void draw_shape(int choice) 
{

    switch (choice) {

	case 1:
        draw_triangle(get_size(),get_char());
		break;
	case 2:
        draw_diamond(get_size(),get_char());
		break;
	
	default:
		cout <<"thank you, goodbye" << endl;

	}

    

}

//************************************************************************************************
//int main

int main() {

	draw_shape(menu());

	return 0;

	}
	
	
	

