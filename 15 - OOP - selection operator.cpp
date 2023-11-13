#include <iostream>
using namespace std;

class select
{
public:
    void display()
    {
        cout << "Hey, here i am" << endl;
    }
};

int main()
{
  select ob;
  select *p = &ob;

  p -> display(); // "->" selection operator
}
