#include <iostream>
using namespace std;

//class
class Student
{
    public:
        int id;
        double cgpa;

};

int main()
{
    Student Abir; //object declare
    Abir.id = 23500621; //object
    Abir.cgpa = 3.85;

    cout << "Abir's ID and CGPA = " << Abir.id << "  " << Abir.cgpa << endl;

    Student Nazmul;
    Nazmul.id = 23500501;
    Nazmul.cgpa = 3.88;

    cout << "Nazmul's ID and CGPA = " << Nazmul.id << "  " << Nazmul.cgpa << endl;
}
