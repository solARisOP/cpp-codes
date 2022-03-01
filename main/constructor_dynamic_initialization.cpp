#include <iostream>
using namespace std;

class bank
{
    int principle, years;
    float interest, returnvalue;

public:
    bank(){}
    bank(int p, int y, float r)
    {
        principle = p;
        years = y;
        interest = r;
        returnvalue = principle;
        for (int i = 0; i < y; i++)
        {
            returnvalue = returnvalue * (1 + interest);
        }
    }
    bank(int p, int y, int r)
    {
        principle = p;
        years = y;
        interest = float(r) / 100;
        returnvalue = principle;
        for (int i = 0; i < y; i++)
        {
            returnvalue = returnvalue * (1 + interest);
        }
    }
    void show(){
    cout<<endl<<"Principal amount was "<<principle
        << ". Return value after "<<years
        << " years is "<<returnvalue<<endl;
}
};

int main()
{
    bank b1, b3;
    int p, y, R;
    float r;

    cout << "Enter the principle amount, year and interest " << endl;
    cin >> p >> y >> r;
    b1 = bank(p, y, r);
    b1.show();

    cout << "Enter the principle amount, year and interest " << endl;
    cin >> p >> y >> R;
    bank b2 (p, y, R); 
    b2.show();

    return 0;
}