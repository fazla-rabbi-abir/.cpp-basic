#include <iostream>
using namespace std;

int main()
{
    int num, temp, rem, sum=0;
    cout << "Enter any number : ";
    cin >> num;

    temp = num;

    while(temp!=0)
    {
        rem = temp % 10;
        sum = sum + rem;
        temp = temp / 10;
    }

    cout << "Summation of digit = " << sum;

    return 0;
}
