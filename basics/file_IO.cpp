#include <iostream>
#include <fstream>

/*
These are some useful classes for working with files in C++
the three classes in below are included in fstream header file.

// fstreambase
// ifstream --> derived from fstreambase
// ofstream --> derived from fstreambase
*/
using namespace std;

int main()
{
    /******************************FILE "WRITE" OPERATION*******************************/

    string c = "rao bhai";
    string d;
    ofstream ja("file.txt"); // ofstream is used to write in the file. And the name of the object is your choice.
    ja<<c; // its just like cout, except you can name it in your wish.
    ja.close(); // Disconnect the file with the program since we are done writing to it, using ja.close().


    /******************************FILE "READ" OPERATION*******************************/

    ifstream aja("file.txt"); // instream is used to read in the file. And the name of the object is your choice.
    // aja>>d;// its just like cin, except you can name it in your wish. 
    //************** if you use the above command, this will only read one word in the line in the file.
    

    getline(aja, d); // it is used to read multiple words in one line of the file.
    // getline(aja, d); // the many getline() commands you put that many lines it will read in that file.
    aja.close(); // Disconnect the file with the program since we are done reading from it, using ja.close().
    
    cout<<d<<endl;
    
    return 0;
}