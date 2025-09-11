//1^3 + 2^3 + 3^3 + ..... +n^3
#include <iostream>
using namespace std;

int main()
{
    int num, sum;

    cout << "Enter your last number : ";
    cin >> num;

    for(int i=1; i<=num; i++)
    {
        sum = sum + i*i*i; //i*i*i = pow(i,3)
    }

    cout << "Summation of this series = " << sum;

    return 0;
}
