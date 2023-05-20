#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter any letter : ";
    cin >> ch;
    ch = tolower(ch); //tolower() = function

    if(ch == 'a' || ch=='i' || ch=='o' || ch=='u' || ch=='e') // || = logical OR operator
    {
        cout << "Vowel";
    }
    else
    {
        cout << "Consonant";
    }

    return 0;
}
