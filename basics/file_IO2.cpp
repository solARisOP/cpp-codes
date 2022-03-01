#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string c = "rao bhai";
    ofstream out;
    out.open("file2.txt"); 
    out<<"he is the boss, "<<endl
       <<"he has the power of gods, "
       <<"his name is "
       <<c;
    out.close();

    string d;
    ifstream in;
    in.open("file2.txt");

    while(in.eof()==0)
    {
        getline(in, d);
        cout<<d<<endl;
    }
    in.close();
    return 0;
}