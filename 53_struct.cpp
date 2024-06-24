#include <iostream>
using std::cin;
using std::cout;
using std::string;

struct student{
    string name;
    double gpa;
    bool enrolled;
    bool smart = true;
};

int main()
{
    /*
    struct = A structure that group related variables under one name structs can contain many different data types (string, variables in a struct are known as "members" members can be access with . "Class Member Access Operator")
    */

   student student1;
   student1.name = "Dexter";
   student1.gpa = 3.3;
   student1.enrolled = true;

   cout<<student1.name<<'\n';
   cout<<student1.gpa<<'\n';
   cout<<student1.enrolled<<'\n';
   cout<<student1.smart<<'\n';


    return 0;
}