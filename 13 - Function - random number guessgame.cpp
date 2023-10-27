#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
   while (1)
   {
    int GuessNum, RandomNum;
    cout << "Enter your guess number between 1 to 5 : ";
    cin >> GuessNum;

    RandomNum = 1 + rand()%5;

    if (GuessNum == RandomNum)
    {
        cout << "You have won" <<endl <<endl;
    }
    else
    {
        cout << "You have lost. Try again." <<endl;
        cout << "Random number was = " << RandomNum <<endl <<endl;
    }
   }
}
