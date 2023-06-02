// 1 + 3 + 5 + ...... n
#include <iostream>
using namespace std;

int main()
{
    int sum, num;

    cout << "Enter the last number : ";
    cin >> num;

    for(int i=1; i<=num; i+2)
    {
        sum = sum + i;
    }

    cout << "Summation of the odd series = " << sum;

    return 0;
}
