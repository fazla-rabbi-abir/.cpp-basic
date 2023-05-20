#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int mark;
    cout << "Enter mark : ";
    cin >> mark;

    if(mark > 100 || mark < 0)
    {
        cout << "Invalid mark";
    }
    else if (mark >= 90)
    {
        cout << "Grade = A+";
    }
    else if (mark >= 85)
    {
        cout << "Grade = A";
    }
    else if (mark >= 80)
    {
        cout << "Grade = B+";
    }
    else if (mark >= 75)
    {
        cout << "Grade = B";
    }
    else if (mark >= 70)
    {
        cout << "Grade = C+";
    }
    else if (mark >= 65)
    {
        cout << "Grade = C";
    }
    else if (mark >= 60)
    {
        cout << "Grade = D+";
    }
    else if (mark >= 50)
    {
        cout << "Grade = D";
    }
    else
    {
        cout << "Fail" << endl << "Best of luck for next time";
    }

    getch();
    return 0;
}
