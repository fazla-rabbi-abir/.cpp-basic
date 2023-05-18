#include <iostream>
using namespace std;

int main()
{
    double width, height, area;

    cout << "Enter width : ";
    cin >> width;

    cout << "Enter height : ";
    cin >> height;

    area = width * height; //logic : area of rectangle

    cout << "Area of rectangle = " << area;

    return 0;
}
