//1^2 + 2^2 + 3^2 + ..... +n^2
#include <iostream>
using namespace std;

int main()
{
    int num, sum;

    cout << "Enter your last number : ";
    cin >> num;

    for(int i=1; i<=num; i++)
    {
        sum = sum + i*i;
    }

    cout << "Summation of this series = " << sum;

    return 0;
}
