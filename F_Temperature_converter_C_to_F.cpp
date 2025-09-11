#include <iostream>
using namespace std;

int main()
{
    double farn, cels;

    cout << "Enter celsius temperature : ";
    cin >> cels;

    farn = 1.8 * cels + 32;

    cout << "Fahrenheit scale temperature = " << farn;

    return 0;
}
