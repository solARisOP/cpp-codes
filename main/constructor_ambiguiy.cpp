#include <iostream>
using namespace std;

/*
Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};
*/


class Base1{
    int data1;
    public:
        Base1(int i){
            data1 = i;
            cout<<"Base1 class constructor called"<<endl;
        }
        void printDataBase1(void){
            cout<<"The value of data1 is "<<data1<<endl;
        }
};

class Base2{
    int data2;

    public:
        Base2(int i){
            data2 = i;
            cout << "Base2 class constructor called" << endl;
        }
        void printDataBase2(void){
            cout << "The value of data2 is " << data2 << endl;
        }
};

class Derived : public Base1, public Base2{ // here which base class we write down first that class contructor
                                            // will be executed first after that the derived class contructor will be called.
    int der1, der2;
        public:
            Derived(int a, int b, int c, int d): Base1(a), Base2(b) // it is the syntax for values passing to the base constructor.
            {
                der1 = c;
                der2 = d;
                cout << "Derived class constructor called" << endl;
            }
            void printDerived()
            {    
                cout << "The value of der1 is " << der1 << endl;
                cout << "The value of der2 is " << der2 << endl;
            }
};

int main() {

    Derived nitish(3, 4, 5, 6);
    nitish.printDataBase1();
    nitish.printDataBase2();
    nitish.printDerived();
    return 0;
}