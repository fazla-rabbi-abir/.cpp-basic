#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter an integer number : ";
    cin >> num;

//selection control statement[if, else if, else]
    if(num>0)
    {
        cout << "This number is Positive";
    }

    else if(num<0)
    {
        cout << "This number is Negative";
    }

    else
    {
        cout << "This number is Zero";
    }

    return 0;
}

