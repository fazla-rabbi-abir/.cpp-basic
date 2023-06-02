// 1 + 2 + 3 + ..... + n
#include <iostream>
using namespace std;

int main()
{
    int sum=0, num;

    cout << "Enter the last number : ";
    cin >> num;

    for(int i=1; i<=num; i++)
    {
        sum = sum + i;
    }

    cout << "Summation of the series : " << sum;

    return 0;
}
