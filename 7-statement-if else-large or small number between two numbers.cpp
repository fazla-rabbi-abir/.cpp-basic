#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter two integer number : ";
    cin >> num1 >> num2;

    if(num1 > num2)
    {
     cout << "Large number is = " << num1;
    }
    else
    {
        cout << "Large number is = " << num2 << endl;
    }

    if (num1<num2)
    {
        cout << "Small number is = " << num1;
    }
    else
    {
        cout << "Small number is = " << num2;
    }

    return 0;
}
