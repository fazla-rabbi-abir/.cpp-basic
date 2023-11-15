#include <iostream>
using namespace std;

class encap
{
private:
    string name;

public:
    void setName(string n)
    {
        name = n;
    }
    string getName()
    {
        return name;
    }
};

int main()
{
    encap e;
    e.setName("Fazla Rabbi Abir");
    cout << e.getName() << endl;
}
