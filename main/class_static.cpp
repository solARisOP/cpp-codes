#include <iostream>
using namespace std;

class student
{
    int stid;
    static int count; // its default value is 0.

    public:
        void setdata(void)
        {
            cout<<"Enter the id of student "<<endl;
            cin>>stid;
            count++;
        }

        void getdata(void)
        {
            cout<<"The id of student "<<count<<" is "<<stid<<endl;
        }

        static void getcount(void) // static function only can access static variables 
        {
            // cout<<stid; // throws an error.
            cout<<"the count of the student is "<<count<<endl;
        }        
};
// Count is the static data member of class student
int student :: count; // here we can assign our required value to make it as default.

int main()
{
    student abhishek, nitish, pankaj;

    abhishek.setdata();
    abhishek.getdata();
    student :: getcount(); // here we are calling static function.

    nitish.setdata();
    nitish.getdata();
    student :: getcount();
    
    pankaj.setdata();
    pankaj.getdata();
    student :: getcount();

    return 0;
}