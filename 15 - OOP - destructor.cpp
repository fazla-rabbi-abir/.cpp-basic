#include <iostream>
using namespace std;

class destruct
{
public:
    destruct()
    {
        cout << "Constructor is called" << endl;
    }

    ~destruct()
    {
        cout << "Destructor is called" << endl;
    }
};

int main()
{
    destruct ob;
}
