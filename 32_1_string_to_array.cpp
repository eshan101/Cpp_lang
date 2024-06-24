#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    string free;
    cout<<"Enter your string : ";
    getline(cin >> std::ws, free);
    int size_free = free.length();
    char array1[size_free];
    for(int i = 0; i <= size_free - 1; i++){
        array1[i] = (char)free[i];
    }
    for(char x : array1){
        cout<<x<<' ';
    }
    return 0;
}