#include<iostream>
using std::cout;
using std::cin;
using std::string;

// cout << (insertion operator)
// cin >> (extraction operator)

int main(){
    string name;
    int age;
    // cout<<"What's ur name : ";
    // cin>>name;

    cout<<"What's ur age : ";
    cin>>age;

    // when we accept an input using cin then in our input buffer there is a new line character and if getline is followed by cin then it receives the new line character '\n' and moves forward without asking for response

    // to solve this we use : "getline(std::cin >> std::ws, name)" {here "ws" means white spaces}

    string full_name;
    cout<<"What's ur full name : ";
    std::getline(cin >> std::ws , full_name);

    cout << "hello "<< full_name << " you are " << age << " years old.";
 return 0;
}