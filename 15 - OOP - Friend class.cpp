#include <iostream>
using namespace std;

class frndClass;  // Forward declaration

class frnd
{
private:
    string name = "Abir";
    int id = 50062;

public:
    friend class frndClass;  // Declare frndClass as a friend class
};

class frndClass
{
public:
    void display(frnd f)
    {
        cout << f.name << endl;
        cout << f.id << endl;
    }
};

int main()
{
    frnd f;
    frndClass n;

    n.display(f);

    return 0;  // Add a return statement
}

