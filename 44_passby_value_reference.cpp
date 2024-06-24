#include <iostream>
using std::cin;
using std::cout;
using std::string;

void swap(string &x, string &y);

int main()
{
    string x = "water";
    string y = "ice";
    
    swap(x, y);
    
    cout << "X : " << x << '\n';
    cout << "Y : " << y;
    return 0;
}

// this is pass by reference, if we pass by value then the function makes a copy of the variable they both aren't same 
void swap(string &x, string &y){
    string temp = x;
    x = y;
    y = temp;
    }