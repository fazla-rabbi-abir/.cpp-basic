#include <iostream>
using namespace std;

int main()
{
//prefix increment
    int a = 3;
    int b = ++a;
    cout << "Prefix increment of a : " << a << endl;
    cout << "Prefix increment of b : " << b << endl;

//postfix increment
    int x = 3;
    int y = x++;
    cout << "Postfix increment of x = " << x << endl;
    cout << "Postfix increment of y = " << y;

    return 0;
}
