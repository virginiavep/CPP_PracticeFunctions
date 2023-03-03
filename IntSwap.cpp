#include <iostream>

using namespace std;

void swapInts(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int num1, num2;
    cout << "Please enter 2 integer values" << endl;
    cin >> num1 >> num2;
    swapInts(&num1, &num2);
    cout << "\n" << num1 << "\n" << num2;

    return 0;
}