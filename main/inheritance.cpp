#include <iostream>
using namespace std;

// Base Class
class Employee
{
public:
    int id;    
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee(){} // if we dont make this default constructor then then the compiler will give error
};
/* Derived Class syntax
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}*/

// default visiblity mode is private.  
// private visibility mode --> make the public members of base class becomes private members of the derived class.
// public visibility mode --> make the public members of base class becomes public members of the derived class.
// private members of the base class cannot be inherited.
// Creating a Programmer class derived from Employee Base class
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {                           /* If the base class doesn't have a default constructor this function wont work,
                                // because the calss have been inherited from employee class, so it will try to call employee class construtor.
                                hence the compiler will give error*/
        id = inpId;
        languageCode = 9;
    }
    void getData(){
        cout<<id<<endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode<<endl;
    cout << skillF.id<<endl;
    skillF.getData();
    return 0;
}
