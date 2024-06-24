#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    int *pNum = NULL;
    int test;
    cout<<"Enter a number : ";
    cin>>test;

    pNum = new int;
    *pNum = test;
    cout<<*pNum;

    return 0;
}