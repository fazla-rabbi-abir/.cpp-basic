#include <iostream>
using namespace std;

void square(int n)
{
    int num = n*n;
    cout << "Square of " << n << " = " << num << endl;
}

int main()
{
    square(5);
    square(10);

}
