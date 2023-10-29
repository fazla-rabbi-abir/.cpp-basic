#include <iostream>
using namespace std;

class Student
{
    public:
        int id;
        double cgpa;

        void display()
        {
           cout << "ID and CGPA = " << id << "  " << cgpa << endl;

        }

        void setValue(int x, double y)
        {
            id = x;
            cgpa = y;
        }
};

int main()
{
    Student Abir, Nazmul;

    Abir.setValue(23500621, 3.85);
    Abir.display();

    Nazmul.setValue(23500501, 3.88);
    Nazmul.display();

}
