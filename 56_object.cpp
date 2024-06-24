#include <iostream>
using std::cin;
using std::cout;
using std::string;

class Human{
    public:
        string name;
        string occupation;
        int age;

        void eat(){
            cout<<"This person is eating\n";
        }

        void drink(){
            cout<<"This person is drinking\n";
        }
        void sleep(){
            cout<<"This person is sleeping\n";
        }
};

int main()
{
    /*
    object = A collection of attributes and methods They can have characteristics and could perform actions,
    Can be used to mimic real world items (ex. Phone, Book, Dog, etc...)
    Created from a class which acts as "blue-print" 
    */
   Human human1;

   human1.name = "Rick";
   human1.occupation = "Scientist";
   human1.age = 70;

    cout<<human1.name<<'\n';
    cout<<human1.age<<'\n';
    cout<<human1.occupation<<'\n';

    human1.eat();
    human1.drink();
    human1.sleep();
    return 0;
}