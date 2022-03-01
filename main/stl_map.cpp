#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string, int> m1; // we need to enter two members on the map.
    m1["rao"] = 77;
    m1["abhishek"] = 80;
    m1["pankaj"] = 89;
    m1["shreyansh"] = 78;

    map<string, int>::iterator i;
    // i = m1.begin();
    m1.insert({{"vipin", 99}, {"sahil", 98}});
    for (i = m1.begin(); i != m1.end(); i++)
    {
        cout << i->first << " " << i->second << endl;
        // here first and second refers to first and second members of the map;
    }

    return 0;
}