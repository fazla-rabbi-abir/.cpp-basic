#include <iostream>
using namespace std;

int main()
{
    double farn, cels;

    cout << "Enter fahrenheit temperature : ";
    cin >> farn;

    cels = (farn - 32) / 1.8;

    cout << "Celsius scale temperature = " << cels;

    return 0;
}
