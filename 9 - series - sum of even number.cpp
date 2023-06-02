// 2 + 4 + 6 + ..... n
#include <iostream>
using namespace std;

int main()
{
    int sum=0, num;

    cout << "Enter the last number : ";
    cin >> num;

    for(int i=2; i<=num; i+2)
    {
        sum = sum + i;
    }

    cout << "Summation of the even series = " << sum;

    return 0;
}
