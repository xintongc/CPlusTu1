#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void showState(const fstream& stream){

    cout << "Stream status: " << endl;
    cout << " eof(): " << stream.eof() << endl;
    cout << " fail(): " << stream.fail() << endl;
    cout << " bad(): " << stream.bad() << endl;
    cout << " good(): " << stream.good() << endl;


}

int main() {

    char ch;
    ifstream input("/Users/zncu/CLionProjects/set3/file.txt");
    ch = input.get();   //read a single character from a file in input text mode

    string first, second, third;
    input >> first >> second >> third;
    cout << first << second << third;

    string str;
    getline(input,str); // read a string from a file in input text mode from the current position to a delimiter character
    input.close();



    ofstream outputfilestream;
    outputfilestream.open("/Users/zncu/CLionProjects/set3/file.txt");
    outputfilestream.close();

    cout << str;


    ofstream output("/Users/zncu/CLionProjects/set3/file.txt");
    output.put('A');    //write a single character from a file in output text mode
    output << "\n Jone T smith 90" << endl;
    output.close();


    fstream filestream;
    filestream.open("/Users/zncu/CLionProjects/set3/file.txt",ios::in); //read from file

    char ch1;
    ch1 = filestream.get();
    cout << "ch1: " << ch1 << endl;


    filestream.open("/Users/zncu/CLionProjects/set3/file.txt",ios::app);  //write into file
    filestream.put('b');
    filestream.close();


    fstream inout;
    inout.open("/Users/zncu/CLionProjects/set3/file.txt", ios::out);
    inout << "Dallas";
    cout << "Normal operation (no errors)" << endl;
    showState(inout);
    inout.close();

    inout.open("/Users/zncu/CLionProjects/set3/file.txt", ios::in);
    string city;
    inout >> city;
    cout << "End of file (no errors)" << endl;
    showState(inout);
    inout.close();

    inout >> city;
    cout << "Bad operation (errors)" << endl;
    showState(inout);
    return 0;
    

}
