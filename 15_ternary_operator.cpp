#include<iostream>
using std::cout;
using std::cin;
using std::string;

int main(){

    /*
    ternary operator "?:" = replacement to an if/else statement 

    condition ? expression1 : expression2; 
    */

//    int grade = 75;
//    grade >= 60 ? cout<<"You pass!" : cout<<"You Fail!"; 

    // int num = 3;
    // (num%2) == 0 ? cout<<"It's an even number" : cout<<"It's an odd number"; 

    bool hungry = true;
    // hungry ? cout<<"U need food" : cout<<"U need rest";

    // other way of using it is :

    cout<<( hungry ? "u r hungry" : "u r full");
 return 0;
}