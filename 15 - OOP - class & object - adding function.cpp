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
};

int main()
{
    Student Abir;
    Abir.id = 23500621;
    Abir.cgpa = 3.85;
    Abir.display();


    Student Nazmul;
    Nazmul.id = 23500501;
    Nazmul.cgpa = 3.88;
    Nazmul.display();

}

