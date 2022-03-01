#include <iostream>
#include <string>
using namespace std;

class name
{
    string n;             // here its private variable because in class if u don't mention it will be private

    public:
        void read_name();
        void check_name();
        void display();    
};

void name :: read_name()
{
    cout<<"type name "<<endl;
    cin>>n;
}

void name :: check_name()
{
    for (int i=0; i < n.length(); i++)
    {
        if(n.at(i) == 'n')
        {
            cout<<"incorrect type of name"<<endl;
            exit(0);
        }
    }
    
}
void name :: display()
{
    cout<<n<<endl;
}

int main()
{
    name a;
    a.read_name();
    a.check_name();
    a.display();
    
    return 0;
}