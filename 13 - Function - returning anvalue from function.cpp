#include <iostream>
using namespace std;

int addition (int x, int y)
{
    int sum = x + y;
    return sum;  //returning value
}
int main()
{
    cout << "Sum = " << addition(5, 10);
}
