#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter the number of row : ";
    cin >> row;

    cout << "Enter the number of column : ";
    cin >> col;

    int A[row][col];
    cout << "Enter the element of matrix : " << endl;

//input
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout << "A[" << i << "][" << j << "] = ";

            cin >> A[i][j];
        }
    }

    cout << "The matrix is : " << endl;

//print
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout << A[i][j];
        }
        cout << endl;
    }

    return 0;
}
