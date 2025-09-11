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

    int arr1[row1][col1],arr2[row2][col2];

//value input

    //1st matrix
    cout << "Enter the elements for the first matrix : " <<endl;
    for(int i=0; i<row1; i++)
    {
        for(int j=0; j<col1; j++)
        {
            cout << "arr1[" <<i <<"][" <<j <<"] = ";

            cin >> arr1[i][j];
        }
    }

    //2nd matrix
    cout << "Enter the elements for the second matrix : " <<endl;
    for(int i=0; i<row2; i++)
    {
        for(int j=0; j<col2; j++)
        {
            cout << "arr2[" <<i <<"][" <<j <<"] = ";

            cin >> arr2[i][j];
        }
    }
    cout << endl;

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

//Addition
    int Sum[row1][col1];
    cout << "Addition Matrix : " << endl;

    for(int i=0; i<row1; i++)
    {
        for(int j=0; j<col1; j++)
        {
           Sum[i][j] = arr1[i][j] + arr2[i][j];
           cout << Sum[i][j] << " ";
        }
        cout << endl;
    }

//Subtraction
    int sub[row1][col1];
    cout << "Subtraction Matrix : " << endl;

    for(int i=0; i<row1; i++)
    {
        for(int j=0; j<col1; j++)
        {
           sub[i][j] = arr1[i][j] - arr2[i][j];
           cout << sub[i][j] << " ";
        }
        cout << endl;
    }

  return 0;
}
