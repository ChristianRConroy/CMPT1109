#include <iostream>
#include <vector>

using namespace std;


int main()
{


vector<int> arr;

arr.push_back(56); //adds an element to an array

arr[0] = 57; //later changes it (must be pushed before it can be reset!!!!!)
	
arr.pop_back();

cout << arr.size();

//cout << arr[0];



return 0;

}