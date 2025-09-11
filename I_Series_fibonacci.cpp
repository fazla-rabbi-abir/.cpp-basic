#include <iostream>
using namespace std;

int main()
{
    int firstNum = 0, secondNum = 1, count = 0, fibo, num;

    cout << "Enter the number of terms you want to generate : ";
    cin >> num;

    while(count<num)
    {
        if(count<=1)
        {
            fibo = count;
        }
        else
        {
            fibo = fibo + secondNum;
            firstNum = secondNum;
            secondNum = fibo;
        }

        cout << fibo << " ";
        count++;
    }

    return 0;
}
