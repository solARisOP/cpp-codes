#include <iostream>
using namespace std;

template<class t1 = int, class t2= float, class t3= char> // if we have not specified the data types of the values we have just entered,
// the default data types, int, float and char would be considered. 

class nitish
{
    t1 a;
    t2 b;
    t3 c;
    public:
        nitish(t1 x, t2 y, t3 z)
        {
            a=x;
            b=y;
            c=z;
        }
        void display()
        {
            cout<<"the value of a "<<a<<endl
            <<"the value of b "<<b<<endl
            <<"the value of c "<<c<<endl;
        }

};

int main()
{
    nitish <>n(9, 4.9, '6'); //if we have not specified the data types of the values we have just entered, we should just put '<>' these. 
    n.display();
    cout<<endl;
    nitish <int, char, char>r(7,'r', 'k');
    r.display();
    
    return 0;
}