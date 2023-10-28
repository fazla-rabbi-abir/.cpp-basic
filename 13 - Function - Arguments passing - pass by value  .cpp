#include <iostream>
using namespace std;

void value(int num)
{
    num = 5;
}

int main()
{
    int x = 10;
    cout << "Before calling the function : " << x << endl;

    value(x);
    cout << "After calling the function : " << x << endl;
}
