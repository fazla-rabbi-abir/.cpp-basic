#include <iostream>
using namespace std;

//user defined function create
void addition (int x, int y)
{
    int sum = x + y;
    cout << "Summation = " << sum << endl;
}

void subtraction (int x, int y)
{
    int sub = x - y;
    cout << "Subtraction = " << sub << endl;
}

void multiplication (int x, int y)
{
    int mul = x * y;
    cout << "Multiplication = " << mul << endl;
}

void division (int x, int y)
{
    float div = (float) x / y;  //type casting
    cout << "Division = " << div << endl;
}


int main()
{
    addition (10,10);
    subtraction (10,5);
    multiplication (10,4);
    division (10,3);

    cout << "All function have called";
}
