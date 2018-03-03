#include <iostream>

using namespace std;

int y;
void g();


int main() {

    g();
    return 0;
}

void g()
{
    int gi = 12; //inaccessible within local class

    class local
    {

    public:
        void put(int n){ :: y = n;}
        int get(){return ::y;}

    }ab;

    ab.put(20);
    cout << ab.get();
}

A class definition can also be defined inside a function
definition, called a “local class”. Rules that apply to the
use of local classes:
 Global variables declared above the function can
be used with the scope resolution operator "::".
 Static variables declared inside the function can
also be used.
 Automatic local variables cannot be used.
 It cannot have static data members.
 Member functions must be defined inside the local
classes.
 Enclosing functions cannot access the private
members of a local class.
