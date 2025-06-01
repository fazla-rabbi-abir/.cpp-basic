#include <bits/stdc++.h>
using namespace std;

void num(int i)
{
    if (i == 10)
    {
        return;
    }
    cout << i << endl;
    num(i + 1); // Correct recursive call
}

int main()
{
    int i = 0; // Initialize 'i' to start from 0
    num(i);

    return 0;
}
