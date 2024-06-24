#include <iostream>
using std::cin;
using std::cout;
using std::string;

class student{
    public:
    string name;
    int age;
    double gpa;

    student(string x, int y, double z){
        // it's used when arguments name is same to variable 
        // this->name = name;
        // this->age = age;
        // this->gpa = gpa;
        name = x;
        age = y;
        gpa = z;
    }
};

int main()
{
    /*
    constructor = special method that is automatically called when an object is instantiated useful for assigning values  to  attributes as arguments
    */
   student student1("Mike", 21, 3.5);

   cout<<student1.name<<'\n';
   cout<<student1.age<<'\n';
   cout<<student1.gpa<<'\n';

    return 0;
}