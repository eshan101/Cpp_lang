#include <iostream>

int main() {

   int x; //declaration
   x = 5; //assignment
   int y = 6;
   int sum = x + y;

   std::cout<< x << '\n';
   std::cout<< y << '\n';   
   std::cout<< "Sum :"<< sum << '\n';   

// Datatypes
// int (Whole number)
    int age = 21;
    int days = 7.5;

    std::cout<<days<<'\n'; // if u will use decimal num in int then, decimal part will be truncated.

// double (decimal number)
    double price = 10.99;
    double gpa = 3.6;

    std::cout<<price<<'\n';

// char (single character)
    char grade = 'A';
    char initial = 'M';

    std::cout<<initial<<'\n';

// bool (it represens a boolean - true[returns 1] or false[returns 0])
    bool student = true;
    bool light = false;

    std::cout<<light<<'\n';
    std::cout<<student<<'\n';

// string (objects that represents a sequence of text)
    std::string name = "Bro Code";
    std::cout << name << '\n';
    return 0;
}