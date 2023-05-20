#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter any year : ";
    cin >> year;

    if(year%4==0 && year%100!=0) // && = logical AND operator
    {
            cout<< "Leap year";
    }
    else if(year%400==0)
    {
    cout << "This is Leap year";
    }
    else
    {
    cout << "This is not leap year";
    }

    return 0;
}
