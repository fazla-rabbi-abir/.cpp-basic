#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter two numbers : ";
    cin >> num1 >> num2;
    cout << endl;

    int large = (num1 > num2) ? num1 : num2;
    cout << "Large number is = " << large << endl;

    int small = (num1  <num2) ? num1 : num2;
    cout << "Small number is = " << small;

    return 0;
}
