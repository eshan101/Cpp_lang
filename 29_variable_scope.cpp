#include <iostream>
using std::cin;
using std::cout;
using std::string;

int myNum = 5; // this is a global variable

void printnum();

int main()
{
    /*
    Local variables = declares inside a function or block {}
    Global variables = declares outside of all functions

    priority of local variable is more than global variable.

    to force use global variable we can use : "::myNum"
    */

    int myNum = 3; // local variable to the main function, other functions can't see it

    printnum();

    // cout << ::myNum; 

    return 0;
}
void printnum(){
    cout<<myNum;
}