#include<iostream>
using namespace std;

class Base{
    protected:  // it's a type of private but it can be inherited.
        int a; 
    private:
        int b;

};
// below we are talking about the visibility mode.

/*                        Public Derivation       	Private Derivation    	Protected Derivation
Private members           	Not Inherited              Not Inherited            Not Inherited              
Protected members             Protected                   Private                 Protected                    
Public members                 Public                     Private                 Protected
*/

class Derived: protected Base{
   
};

int main(){
    Base b;
    Derived d;
    // cout<<d.a; // Will not work since a is protected in both base as well as derived class.
    return 0;
}

