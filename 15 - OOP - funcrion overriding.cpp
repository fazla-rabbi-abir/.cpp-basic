#include <iostream>
using namespace std;

class person
{
public:
    void display()
    {
        cout << "The person is called" << endl;
    }
};

class teacher : public person
{
public:
    void display()      //function overriding
    {
        cout << "The teacher is called" << endl;
    }
};

class student : public person
{
public:
    void display()      //function overriding
    {
        cout << "The student is called" << endl;
    }
};

int main()
{
    person p;
    p.display();

    teacher t;
    t.display();

    student s;
    s.display();
}

