#include <iostream>
using namespace std;

int main()
{
    double radius, area, circumference;

    cout << "Enter radius : ";
    cin >> radius;

    area = 3.1416 * radius * radius; //logic : area of circle
    circumference = 2 * 3.1416 * radius; //formula : circle's circumference

    cout << "Area of radius = " << area << endl;
    cout << "Circle's circumference = " << circumference;

    return 0;
}
