#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    string student[] = {"Bob", "Ryan", "Mike", "Stellar"};
    for(int i = 0; i < sizeof(student)/sizeof(string); i++){
        cout<<student[i]<<'\n';
    }
    return 0;
}