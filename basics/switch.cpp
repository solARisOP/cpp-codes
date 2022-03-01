#include <iostream>
using namespace std;

int main()
{
    float a, b;
    cin >> a >> b;

    char op;
    cin >> op;
    float div = a/b;

    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << div << endl;
        break;
    default:
        cout <<"i am still learning"<< endl;
        break;
    }
    return 0;
}