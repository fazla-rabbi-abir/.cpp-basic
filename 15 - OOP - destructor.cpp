#include <iostream>
using namespace std;

class destruct
{
public:
    destruct()
    {
        cout << "Constructor is called" << endl;
    }

//destructor
    ~destruct() //"~" tilde operator
    {
        cout << "Destructor is called" << endl;
    }
};

int main()
{
    destruct ob;
}
