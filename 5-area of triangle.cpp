#include <iostream>
using namespace std;

int main()
{
    double base, height, area;

    cout << "Enter base : ";
    cin >> base;

    cout << "Enter height : ";
    cin >> height;

    area = 0.5 * base * height; //logic : area of triangle

    cout << "Area of triangle = " << area;

    return 0;
}
