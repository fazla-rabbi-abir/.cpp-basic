#include <iostream>
using namespace std;

int main()
{
//special operator - sizeof
    int x;
    float y;
    double z;
    char ch;
    char name[10];

    //int, float = 4
    //double = 8
    //char = 1

    int a = sizeof(x);
    cout << "Size of x : " << a << endl;

    int b = sizeof(y);
    cout << "Size of y : " << b << endl;

    int c = sizeof(z);
    cout << "Size of z : " << c << endl;

    int d = sizeof(ch);
    cout << "Size of ch : " << d << endl;

    int e = sizeof(name);
    cout << "Size of name : " << e << endl;

 //special operator - comma
    int m, n, sum;

    sum = (m = 5, n = 10, sum = m + n);

    cout << "Summation = " << sum;

    return 0;
}
