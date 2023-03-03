#include <iostream>

using namespace std;

int main()
{

    //Accepts 10 integers from the user using an array and a loop
    int myArr[10];
    cout << "Please enter 10 numbers \n";
    for (int x = 0; x < 10; x++)
    {
        cin >> myArr[x];
    }
     cout << "\n"; //add a new line

    //Prints the numbers entered by the user in reverse order
    for (int x = 9; x >= 0; --x)
    {
        cout << myArr[x] <<endl;
    }
    cout << "\n"; //add a new line

    //Sorts the content of the array from lowest to highest and displays
    int i, j, temp;
    for (int i = 0; i < 10; i++)
    {
        for(j = (i+1); j<10; j++){
            if (myArr[i]> myArr[j]) //ascending order
            {
            temp = myArr[i];
            myArr[i] = myArr[j];
            myArr[j] = temp;
            }
        }
        cout << myArr[i] <<endl;
    }
    return 0;
}