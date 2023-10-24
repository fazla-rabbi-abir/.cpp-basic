#include <iostream>
using namespace std;

int main()
{
//row col input
    int row1, col1, row2, col2;
    cout << "Enter the number of Row for first matrix : ";
    cin >> row1;
    cout << "Enter the number of Column for first matrix : ";
    cin >> col1;
    cout << endl;

    cout << "Enter the number of Row for second matrix : ";
    cin >> row2;
    cout << "Enter the number of Column for second matrix : ";
    cin >> col2;
    cout << endl;

    while(col1 != row2)
    {
        cout << "ERROR !!" << endl << "[Column of first matrix not equal to row of second matrix]" << endl << "[Please try again]" << endl;

    cout << "Enter the number of Row for first matrix : ";
    cin >> row1;
    cout << "Enter the number of Column for first matrix : ";
    cin >> col1;
    cout << endl;

    cout << "Enter the number of Row for second matrix : ";
    cin >> row2;
    cout << "Enter the number of Column for second matrix : ";
    cin >> col2;
    cout << endl;
    }

    int arr1[row1][col1],arr2[row2][col2],mul[row1][col2];

//value input
    //1st matrix
    cout << "Enter the elements for first matrix : " <<endl;
    for(int i=0; i<row1; i++)
    {
        for(int j=0; j<col1; j++)
        {
            cout << "arr1[" <<i <<"][" <<j <<"] = ";

            cin >> arr1[i][j];
        }
    }

    //2nd matrix
    cout << "Enter the elements for second matrix : " << endl;
    for(int i=0; i<row2; i++)
    {
        for(int j=0; j<col2; j++)
        {
            cout << "arr2[" <<i <<"][" <<j <<"] = ";

            cin >> arr2[i][j];
        }
    }
    cout << endl;

//multiplying matrix
     int sum=0;
     for(int i=0; i<row1; i++)
     {
         for(int j=0; j<col2; j++)
         {
             for(int k=0; k<col1; k++)
             {
                 sum = sum + arr1[i][k] * arr2 [k][j];
             }
             mul[i][j] = sum;
             sum = 0;
         }
     }

//value printing
    //1st matrix
    for(int row=0; row<row1; row++)
    {
        for(int col=0; col<col1; col++)
        {
         cout << arr1[row][col] << " ";
        }
        cout << endl;
    }
    cout<<"----------------------------------------------------"<<endl;

    //2nd matrix
    for(int row=0; row<row2; row++)
    {
        for(int col=0; col<col2; col++)
        {
         cout << arr2[row][col] << " ";
        }
        cout << endl;
    }

    //matrix multiplication
    cout << "Multiplication of matrix : " <<endl;
     for(int row=0; row<row1; row++)
    {
        for(int col=0; col<col2; col++)
        {
         cout << mul[row][col] << " ";
        }
        cout << endl;
    }
}

