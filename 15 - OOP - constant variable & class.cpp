#include <iostream>
using namespace std;

class constant
{
public:

//constant object
    void cons() const
    {
       cout << "The constant class is called" << endl;
    }

};

int main()
{
//constant class
    const int x = 10;
    cout << "The constant variable x = " << x << endl;

    constant ob;
    ob.cons();
}
