#include <iostream>
using namespace std;

class mobileUser
{
public:
    //abstract  class
    virtual void sendMessage() = 0;

    void call()
    {
        cout << "Hello!" << endl;
    }
};

class Nazim : public mobileUser
{
public:
    void sendMessage()
    {
        cout << "Hi! This is Nazim." << endl;
    }
};

class Tazim : public mobileUser
{
public:
    void sendMessage()
    {
        cout << "Hey! This is Tazim" << endl;
    }
};

int main()
{
    mobileUser *m;
    Nazim n;
    Tazim t;

    m = &n;
    m -> sendMessage();

    m = &t;
    m -> sendMessage();
}

