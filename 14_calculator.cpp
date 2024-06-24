#include<iostream>
using std::cout;
using std::cin;
using std::string;

int main(){

    double a;
    double b;
    char op;
    cout<<"Enter no. 1 : ";
    cin>>a;
    cout<<"Enter operator (+,-,*,/) : ";
    cin>>op;
    cout<<"Enter no. 2 : ";
    cin>>b;
    switch(op){
        case '+':
            cout<< a << "+" << b << " : " << a+b;
            break;
        
        case '-':
            cout<< a << "-" << b << " : " << a-b;
            break;
        
        case '*':
            cout<< a << "*" << b << " : " << a*b;
            break;

        case '/':
            cout<< a << "/" << b << " : " <<a/b;
            break;

        default:
            cout<<"Invalid input!";

    }
 return 0;
}