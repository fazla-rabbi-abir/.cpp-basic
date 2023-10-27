#include <iostream>
using namespace std;

void sum(int a, int b)
{
    int sum = a + b;
    cout << "Sum = " <<sum <<endl;
}

void sum(int a, int b, int c)
{
    int sum = a + b + c;
    cout << "Sum = " << sum << endl;
}

int main()
{
   sum(10,20);
   sum(10,20,10);
}

