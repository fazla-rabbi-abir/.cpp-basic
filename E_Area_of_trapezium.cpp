#include <iostream>
using namespace std;

int main()
{
    double base, width, height, area;

    cout << "Enter base : ";
    cin >> base;

    cout << "Enter width: ";
    cin >> width;

    cout << "Enter height : ";
    cin >> height;

    area = 0.5 * (base + width) * height; //logic : area of trapezium

    cout << "Area of trapezium = " << area;

    return 0;
}
