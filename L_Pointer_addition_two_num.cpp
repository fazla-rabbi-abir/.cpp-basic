#include <iostream>
using namespace std;

int main()
{
    int num1 = 10, num2 = 15, sum;
    int *x, *y;

    x = &num1;
    y = &num2;

    sum = *x + *y;

    cout << "Addition of number = " << sum;
}
