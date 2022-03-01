#include <iostream>
using namespace std;

class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number()
    {
        cout << "the roll number of the student is : " << roll_number << endl;
    }
};

void student ::set_roll_number(int r)
{
    roll_number = r;
}

class exam : public student
{
protected:
    float physics, maths;

public:
    void set_marks(float, float);
    void get_marks();
};

void exam ::set_marks(float p, float m)
{
    physics = p;
    maths = m;
}

void exam ::get_marks()
{
    cout << "physics marks : " << physics << endl;
    cout << "maths marks   : " << maths << endl;
}

class result : public exam
{
public:
    void percentage()
    {
        cout << "The result of the student is : " << float((maths + physics) / 2) << " %" << endl;
    }
};

int main()
{
    result nitish;
    nitish.set_roll_number(04);
    nitish.get_roll_number();
    nitish.set_marks(98.6, 96.3);
    nitish.get_marks();
    nitish.percentage();

    return 0;
}