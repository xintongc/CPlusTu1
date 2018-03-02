#include <iostream>
using namespace std;

int* foo(){
    int localInt = 10;
}

class Bar{

};

int main() {

    int* aNullPointer = NULL;
    int* aWildPointer;
    int* aDanglingPointer = foo(); //cause runtime error

    int* pleaseDoNotDereference = reinterpret_cast<int*>(0x66);
    Bar b;
    int* iHaveNoIdeaWhatIamDoing = (int*)&b;



    //引用int&  reference variable
    int a = 1;
    int c = 2;

    int& b = a; //what happens in b is also happens in a, have same address. not storing in same address, but reference to same address
    cout << b << endl;
    cout << "Address of b: " << &b << endl;
    cout << "Address of a: " << &a << endl;

    b = 3;
    cout << a << endl;
    cout << b << endl;

    b = c;
    cout << b << endl;
    cout << c << endl;

    b = 6;
    cout << c << endl;
    cout << a << endl;



    double dou = 3.14;
    const int& r =dou;
    cout << r;



    //if pass an object, only pass the value of the object, it makes a copy of the object. If we want to maniputlate the object, we need to pass the pointer
    //read book

    int a = 100;
    int& aRef = a; //another way to refer to the variable a //reference variable
    int* aPtr = &a; // take the address of a an assign it to the pointer
    //* value of
    //& address of

    cout << a << endl;
    cout << &a << endl;
    cout << aRef << endl;
    cout << aPtr << endl;
    cout << *aPtr << endl;
    cout << &aPtr << endl; //address of the pointer variable
    cout << &*aPtr << endl;
    cout << *&aPtr << endl;
    cout << &aRef << endl;
    cout << *&aRef << endl;


//int* const p;//can points to non const variable


    return 0;
}
