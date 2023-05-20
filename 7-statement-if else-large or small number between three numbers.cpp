#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, large, small;
    cout << "Enter three numbers : ";
    cin >> num1 >> num2 >> num3;

    if(num1 > num2 && num1 > num3)
    {
        large = num1;
    }
    else if(num2 > num1 && num2 > num3)
    {
        large = num2;
    }
    else
    {
        large = num3;
    }

    if(num1 < num2 && num1 < num3)
    {
        small = num1;
    }
    else if(num2 < num1 && num2 < num3)
    {
        small = num2;
    }
    else
    {
        small = num3;
    }

    cout << "Large number is = " << large << endl;
    cout << "small number is = " << small;

    return 0;
}
