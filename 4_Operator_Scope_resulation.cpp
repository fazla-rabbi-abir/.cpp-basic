#include <iostream>
using namespace std;

int x = 5; //global variable

int mai()
{
    int x = 10; //local variable

    cout << ::x << endl; //scope resulation
}
