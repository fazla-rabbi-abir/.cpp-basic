#include <iostream>
using namespace std;

int main()
{
    int num, count=0;
    cout << "Enter any integer number : ";
    cin >> num;

    for (int i=2; i<num; i++)
    {
        if (num%i==0)
        {
            count++;
            break;
        }
    }

    if (count==0)
    {
        cout << num << " is prime number.";
    }
    else
    {
        cout << num << " is not prime number.";
    }

    return 0;
}
