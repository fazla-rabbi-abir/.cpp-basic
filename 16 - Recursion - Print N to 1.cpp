#include <bits/stdc++.h>
using namespace std;

void num(int i)
{
    if (i == 0)
    {
        return;
    }
    cout << i << endl;
    num(i - 1);
}

int main()
{
    int i = 10;
    num(i);

    return 0;
}
