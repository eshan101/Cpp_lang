#include <iostream>
using std::cout;
using std::string;

int main()
{
    // arithmetic operator - return the result of a specific
    //                       arithmetic operations(+,-,*,/)
    int students = 20;
    // students = students + 1;
    // students++; // increment operator increases the value by 1
    // students--; // decrement operator decreases the value by 1
    // students += 1;

    // students = students * 2;
    // students*=2;

    // students = students / 2;
    // students/=3;

    int remainder = students % 3;

    // cout << students;
    cout << remainder << '\n';

    /*
    paranthesis
    multiplication and div
    add and sub
    */
   int y = 6 - 5 + 4 * 3 / 2;
   cout<<y;
    return 0;
}