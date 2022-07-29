#include <iostream>

using namespace std;

void f1(int arr[], int size_, int counter)
{

   if(counter != size_ && counter >= 0)
   {
    cout << arr[counter] << endl;
    f1(arr, size_, counter + 1);
    
   }
}

void f2(int arr[], int size_)
{

    for (int i = 0; i < size_; i++)

    {

        cout << arr[i] << endl;
    }

}

int main()
{


int arr[5] = {0, 1, 2, 3, 4};

f1(arr, 5, 0);
//f2(arr, 5);


}