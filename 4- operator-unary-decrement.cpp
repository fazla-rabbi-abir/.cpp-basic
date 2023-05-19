#include <iostream>
using namespace std;

int main()
{
//prefix decrement
    int a = 3, b = --a;
    cout << "Prefix decrement of a = " << a <<endl;
    cout << "Prefix decrement of b = " << b <<endl;

//postfix decrement
    int x = 3, y = x--;
    cout << "Postfix decrement of x = " << x <<endl;
    cout << "Postfix decrement of y = " << y;

    return 0;
}
