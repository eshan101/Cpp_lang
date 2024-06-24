#include<iostream>
using std::cout;
using std::cin;
using std::string;

int main(){
/*
if statement = do something if a condition is true. if not then don't do it.
*/

    int age;

    cout<<"enter age : ";
    cin>>age;

    if(age >= 100){
        cout<<"U r too old to enter";
    }
    else if(age >= 18){
        cout<<"Welcome to the site";
    }
    else if(age < 0){
        cout<<"u r still not born";
    }
    else{
        cout<<"You are not old enough";
    }
 return 0;
}