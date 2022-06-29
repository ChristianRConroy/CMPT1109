#include <iostream>
#include <fstream>
using namespace std;


int main()
{

	int x;
	//cin >> x;
	//cout << "sadasd" << x;




	ifstream inStream;

	inStream.open("input.txt");

	if (inStream.fail()) {  //fail is boolean function that returns true or false depending if the 
							//file was opened or not
		cout << "something went wrong" << endl;
		return -1;
	
	}

	inStream >> x;

	inStream.close(); //will close the open file because because

	//cout << x;


	ofstream outStream;

	outStream.open("output.txt");

	outStream << x;


	return -1;



}