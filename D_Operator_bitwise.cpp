#include <iostream>
using namespace std;

int main()
{
    int a = 32, b = 12, c;

//AND
    c = a & b;
    cout<< "Bitwise and : " << c << endl;

//OR
    c = a | b;
    cout<< "Bitwise or : " << c << endl;

//EXOR
    c = a ^ b;
    cout << "Bitwise exor : " << c << endl;

//Right shift
    c = a >> 2;
    cout << "Bitwise right shift : " << c << endl;

//Left shift
    c = a << 2;
    cout << "Bitwise left shift : " << c;

    return 0;
}
