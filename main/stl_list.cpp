#include <iostream>
#include <list>
 
using namespace std;

template <class T>
void display(list<T> &l)
{
    list<int> :: iterator it = l.begin();
    for (it = l.begin(); it != l.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    
}

int main()
{
    list<int> l1;
    l1.push_back(5);
    l1.push_back(7);
    l1.push_back(11);
    l1.push_back(9);
    l1.push_back(2);
    display(l1);

    list<int> l2(3); // empty list of length 
    list<int> :: iterator i = l2.begin();
    *i = 45;
    i++;
    *i = 6;
    i++;
    *i = 93;
    i++;
    display(l2);
    // l2.remove(6);
    // display(l2);
    // l2.pop_back();
    // l2.pop_front();
    // display(l2);
    // l1.sort();
    // l2.sort();
    l1.merge(l2);
    display(l1);
    return 0;
}