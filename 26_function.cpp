#include <iostream>
using std::cin;
using std::cout;
using std::string;

void happyBd(string name1, int age1);

int main()
{
    // function = a block of reusable code
    string name = "Dexter Morgan";
    int age = 21;

    happyBd(name, age);

    return 0;
}

void happyBd(string name1, int age1){
    cout<<"Happy Birthday dear "<< name1 << "\n";
    cout<<"Now you are "<< age1 << " years old\n";
}