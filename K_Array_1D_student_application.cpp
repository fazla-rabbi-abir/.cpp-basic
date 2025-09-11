#include <iostream>
using namespace std;

int main()
{
    int num, sum;

    cout << "Enter the number of students : ";
    cin >> num;

    int students[num];

    for (int i=0; i<num; i++)
    {
        cout << "Enter the marks of students " << i+1 << " = ";
        cin >>  students[num];

        sum += students[i]; //sum = sum + students[i]
    }

    cout << "Total marks : " << sum << endl;

    float avg = (float) sum / num;

    cout << "Average : " << avg << endl;

    int max = students [0], min = students [0];
    for (int i=0; i<num; i++)
    {
        if (max < students[i])
        {
            max = students[i];
        }

        if (min > students [i])
        {
            min = students[i];
        }
    }
    cout << "Maximum number : " << max << endl;
    cout << "Minimum number : " << min << endl;

    return 0;

}
