#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int num1, num2, num3, num4, num5;

    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    cout << "Minimum between two numbers : " << min(num1, num2) << endl;
    cout << "Maximum between two numbers : " << max(num1, num2) << endl;

    swap(num1, num2);
    cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

    cout << "Minimum between some numbers : " << min({num1, num2, num3, num4, num5}) << endl;
    cout << "Maximum between some numbers : " << max({num1, num2, num3, num4, num5}) << endl;
    
    return 0;
}
