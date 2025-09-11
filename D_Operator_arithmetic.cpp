#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter two integer number : ";
    cin >> num1 >> num2;

    int sum = num1 + num2;
    cout << "Summation = " << sum <<endl;

    int sub = num1 - num2;
    cout << "Subtraction = " << sub <<endl;

    int mul = num1 * num2;
    cout << "Multiplication = " << mul <<endl;

    double div = (float)num1 / num2; //type casting
    cout << "Division = " << div <<endl;

    int rem = num1 % num2;
    cout << "Remainder = " << rem <<endl;


    return 0;
}
