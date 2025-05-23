#include <iostream>
using namespace std;
class Parent
{
public:
    string name;

    Parent(string name)
    {
        cout << "Constructor called" << endl;
        this->name = name;
    }
    void display()
    {
        cout << "Name of parent: " << name << endl;
    }
    ~Parent()
    {
        cout << "Destructor is called" << endl;
    }
};

int main()
{
    Parent p1("pavan");
    p1.display();
    return 0;
}
        
