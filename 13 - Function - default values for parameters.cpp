#include <iostream>
using namespace std;

void display(int x=5, int y=10) //initialize parameter
{
    cout << x << endl;
    cout << y << endl;
}

int main()
{
    display();

    display(20);

    display(30,50);
}
