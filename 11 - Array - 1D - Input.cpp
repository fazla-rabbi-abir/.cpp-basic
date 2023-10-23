#include <iostream>
using namespace std;

int main()
{
    int marks[5];

//input
    for(int i=0; i<=4; i++)
    {
        cout << "Marks for student " << i+1 << " = ";
        cin >> marks[i];
    }

//print
    cout << "Marks are = " << marks[5];

    for(int i=0; i<=4; i++)
    {
        cout << marks[i] << " ";
    }

    return 0;
}

