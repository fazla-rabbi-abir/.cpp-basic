#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number of line : ";
    cin >> num;
    cout << endl;

    for(int row=1; row<=num; row++)
    {
//space
        for(int col=1; col<=num-row; col++)
        {
            cout << "  ";
        }
//stars
        for(int col=1; col<=2*row-1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
