#include <iostream>
using namespace std;

typedef class student // class doesn't compromise with data, and we can add functions in class
{
private:
    int marks, p_id, no_sticker;
    // here private variables can only be accesed by functions in the class

public: // public can be accesed and changed outside class
    char fav_char;
    int mistakes;
    void setdata(int a, int b, int c); // its just a declaration of function we can make it here or anywhere alse.
    void getdata()
    {
        cout << "marks is " << marks << endl;
        cout << "personal id is " << p_id << endl;
        cout << "number of stickers is " << no_sticker << endl;
        cout << "favorite character is " << fav_char << endl;
        cout << "mistakes is " << mistakes << endl;
    }
}st;

void student :: setdata(int a, int b, int c) // here scope resolution because we are telling student that,
//  this is same setdata function that we have declared inside the class.
{
    marks = a;
    p_id = b;
    no_sticker = c;
}

int main()
{
    st nitish; // 'st' because we have used typedef for the class name.

    nitish.fav_char = 'x';
    nitish.mistakes = 1;
    nitish.setdata(100, 6788, 6);// we are accesed through function because they are private.
    nitish.getdata();

    return 0;
}