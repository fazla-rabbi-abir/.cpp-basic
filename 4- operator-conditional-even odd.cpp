#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter an integer number : ";
    cin >> num;

//conditional/ternary operator = ? :
    (num % 2 == 0) ? cout << num << " is even" : cout << num << " is odd";

    return 0;
}
