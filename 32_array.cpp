#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    /*
    array = a data structure that can hold multiple values 
            values are accessed by index number 
            kind of a variable that holds multiple values
    */

    string car[] = {"mercedes", "ferrari", "mustang", "camry"};
    // Array should all be of the same datatype
    cout<<car[0]<<'\n';
    cout<<car[1]<<'\n';
    cout<<car[2]<<'\n';
    cout<<car[3]<<'\n';

    string games[3]; // u can declare an array and assign the values later, but array is a static datatype so u have to give the number of elements u want to store.

    games[0] = "GTA";
    games[1] = "GTA1";
    games[2] = "GTA2";
    cout<<games;
    return 0;
}