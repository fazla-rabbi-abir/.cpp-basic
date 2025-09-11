#include <iostream>
using namespace std;

int main()
{
    double cels, kel;

    cout << "Enter celsius temperature : ";
    cin >> cels;

    kel = cels + 273;

    cout << "Kelvin scale temperature = " << kel;

    return 0;
}
