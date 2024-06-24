#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    string name;
    while(name.empty()){
        cout<<"Enter your name : ";
        std::getline(cin, name);
    }

    cout<< "Hello " << name;
    return 0;
}