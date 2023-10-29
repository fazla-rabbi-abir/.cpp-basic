#include <iostream>
using namespace std;

class Student
{
    public:
        int id;
        double cgpa;

//constructor
        Student(int x, double y)
        {
            id = x;
            cgpa = y;
        }

//method
        void display()
        {
           cout << "ID and CGPA = " << id << "  " << cgpa << endl;

        }
};

int main()
{

//initialize value in object
    Student Abir(50062, 3.85);
    Abir.display();


    Student Nazmul(50050, 3.88);
    Nazmul.display();

}


