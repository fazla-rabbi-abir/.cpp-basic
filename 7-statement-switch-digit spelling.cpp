#include <iostream>
using namespace std;

int main()
{
    int digit;
    cout << "Enter a digit : ";
    cin >> digit;

//switch statement = case, break, default
    switch(digit)
    {
    case 0: //alternative if
        cout << "Zero";
        break; //alternative endl

    case 1:
        cout << "One";
        break;

    case 2:
        cout << "Two";
        break;

    case 3:
        cout << "Three";
        break;

    case 4:
        cout << "Four";
        break;

    case 5:
        cout << "Five";
        break;

    case 6:
        cout << "Six";
        break;

    case 7:
        cout << "Seven";
        break;

    case 8:
        cout << "Eight";
        break;

    case 9:
        cout << "Nine";
        break;

    default : //alternative else
        cout << "Not a digit";
    }

    return 0;
}
