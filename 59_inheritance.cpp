#include <iostream>
using std::cin;
using std::cout;
using std::string;

class Animal{
    public:
    bool alive = true;
    void eat(){
        cout<<"This animal is eating\n";
    }
};

class Dog : public Animal{
    public:
    void bark(){
        cout<<"The dog goes woof!!";
    }
};

int main()
{
    /*
    inheritance = A class can receive attributes and methods from another class,
    Children classes inherit from a Parent class
    Helps to reuse similar code found within multiple classes
    */
   Dog dog;
   dog.eat();
   dog.bark();

    return 0;
}