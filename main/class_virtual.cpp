#include <iostream>
using namespace std;

class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int a)
    {
        roll_number = a;
    }
    void get_roll_number()
    {
        cout << "the roll number of the student is " << roll_number << endl;
    }
};

class exam : virtual public student // this is declared as virtual because we are first inheriting two classes(exam, sports)
// from a base class(student) and then inheriting a single class (result) from these two classes, so by putting virtual
// it will resolve the ambiguity, of not inherting the same variable from student class to the result class two times.
{
protected:
    float maths, physics;

public:
    void set_marks(float a, float b)
    {
        maths = a;
        physics = b;
    }
    void get_marks()
    {
        cout << "the marks of the student are " << endl
             << "maths : " << maths << endl
             << "physics : " << physics << endl;
    }
};

class sports : virtual public student
{
protected:
    int score;

public:
    void set_score(int a)
    {
        score = a;
    }
    void get_score()
    {
        cout << "the sports score of the student is " << score << endl;
    }
};

class result : public exam, public sports
{
private:
    float total;

public:
    void display()
    {
        total = maths + physics + score;
        get_roll_number();
        get_marks();
        get_score();
        cout << "the total score of the student is " << total << endl;
    }
};

int main()
{
    result nitish;
    nitish.set_roll_number(04);
    nitish.set_marks(88.76, 94.32);
    nitish.set_score(7);
    nitish.display();
    return 0;
}