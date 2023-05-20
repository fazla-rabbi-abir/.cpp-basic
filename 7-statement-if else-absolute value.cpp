#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter an integer number : ";
    cin >> num;

    if(num < 0)
    {
        cout << "This number absolute value is = " << (-num);
    }
    else
    {
        cout << "This number absolute value is = " << num;
    }

    return 0;
}

