#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    string name;
    cout<<"Enter your name : ";
    std::getline(cin, name);

    name.length() > 12 ? cout<<"over 12\n" : cout<<"under 12\n";

    cout<<name.empty()<<std::endl; // checks if string is empty, returns boolean

    cout<<name.length()<<std::endl; // checks the length of string

    name.clear(); // clears everything in string
    cout<<name.empty()<<std::endl;

    string name1;

    cout<<"Enter user name : ";

    std::getline(cin >> std::ws, name1);
    
    cout<<name1.append("@gmail.com\n");

    cout<<name1.at(0) << '\n'; // displays character at index 0 of string

    cout << name1.insert(2, "s") << '\n'; // inserts a character at index 2

    cout << name.find(' '); // finds the first index of character in the string

    name.erase(0, 3); // erase a portion of the string, first is close bracket and second is open bracket : [0, 3) - just an mathematical analogy to remember

    cout << name;

    return 0;
}