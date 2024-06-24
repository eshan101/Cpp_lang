#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    /*
    pointers = variable that stores a memory address of another variable, sometimes it's easier to work with an address
    */

    /*
    & (address-of operator)
    * (dereference operator)
    */

    string name = "Jarvis";
    string *pName = &name;

    //   cout<<pName; // shows address of variable name
    //   cout<<*pName<<'\n'; // shows value of variable name

    int age = 21;
    int *pAge = &age;

    //   cout<<*pAge;

    string freePizzas[5] = {"pizza1","pizza2","pizza3","pizza4","pizza5"};

    string *pfreePizzas = freePizzas; // Array is already an address, so we don't need address-of operator
    cout<<*pfreePizzas;
    return 0;
}