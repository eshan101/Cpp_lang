#include<iostream>
using std::cout;
using std::cin;
using std::string;

int main(){

    char grade;
    cout<<"Enter ur grade : ";
    cin>>grade;
    switch(grade){
        case 'A':
            cout<<"U did really well";
            break;
        
        case 'B':
            cout<<"U did good";
            break;

        case 'C':
            cout<<"U can still improve";
            break;

        case 'D':
            cout<<"Better luck next time";
            break;

        default:
            cout<<"Invalid response";
    }
 return 0;
}