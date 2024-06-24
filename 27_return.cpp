#include <iostream>
using std::cin;
using std::cout;
using std::string;

double square(double len);

int main()
{
    /*
    return = return a value back to the spot 
        where you called the encompassing function
    */
   double length = 5.0;
   double area = square(length);
   cout << "Area : " << area; 
    return 0;
}
// we change void to match the datatype of return function
double square(double len){
    return len * len;
}