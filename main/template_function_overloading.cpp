#include <iostream>
using namespace std;

template <class T>
class nitish
{
public:
    T data;
    nitish(T a)
    {
        data = a;
    }
    void display();
};
 
template <class T> // we can declare a member function outside the class also, by template.
void nitish<T> :: display(){
    cout<<data;
}

void func(int a){
    cout<<"I am first func() "<<a<<endl;
}
 
template<class T>
void func(T a){
    cout<<"I am templatised func() "<<a<<endl;
}

int main()
{
    nitish<float> h(5.7);
    cout << h.data << endl;
    h.display();
    
    func(3.0); //Exact match takes the highest priority
    return 0;
}
