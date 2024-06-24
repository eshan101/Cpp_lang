#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    /*
    memory address = a location in memory where data is stored a memory address can accessed with & (address-of operator)
    */
    string name = "Bro";
    int age = 21;
    bool student = true;

    cout<<&name<<'\n';
    cout<<&age<<'\n';
    cout<<&student<<'\n';

    return 0;
}