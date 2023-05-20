#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter an integer number : ";
    cin >> num;

    if(num % 2 == 0)
    {
        cout << "This is even number";
    }
    else
    {
        cout << "This is odd number";
    }

    return 0;
}
