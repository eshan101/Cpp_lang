#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    /*
    dynamic memory = Memory that is allocated after the program is already compiled and running.
    Use the 'new' operator to allocate 
    memory in the heap rather than the stack

    Useful when we don't know how much memory
    we will need. Makes our programs more flexible, especially when accepting user input.
    */
//    int *pNum = NULL;

//    pNum = new int;

//    *pNum = 21;

//    cout<<"adress : "<<pNum<<'\n';
//    cout<<"value : "<<*pNum<<'\n';

//    delete pNum;

    char *pGrades = NULL;
    int size;
    cout<<"Enter number of grades : ";
    cin>>size;

    pGrades = new char[size];

    for(int i = 0; i < size; i++){
        cout<<"Enter grades #"<<i+1<<" : ";
        cin>> pGrades[i];
    }

    for(int i = 0; i<size; i++){
        cout<<pGrades[i]<<" ";
    }

    delete[] pGrades;
    return 0;
}