#include <iostream>
using namespace std;

class person
{
public:
    string name;
    int age;

    void display1()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }
};

class student : public person   //inheritance
{
public:
    int id;

    void display2()
    {
        display1();
        cout << "ID : " << id << endl;
    }
};

int main()
{
    student s1;

    s1.name = "Abir";
    s1.age = 22;
    s1.id = 50062;

    s1.display2();
}

