#include <iostream>
using namespace std;

int x = 10;

int main()
{
    int x = 5; //local variable
    cout << "Local variable : " << x << endl;

    cout << "Global variable : " << ::x;

}
