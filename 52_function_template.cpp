#include <iostream>
using std::cin;
using std::cout;
using std::string;

template <typename T, typename U>

// T max(T x, T y){
//     return (x > y) ? x : y;
// }

auto max(T x, U y){
    return (x > y) ? x : y;
}

int main()
{
    /*
    funtion template = describes what a function looks like, Can be used to generate as many overloaded functions as needed, each using different data types
    */
   cout<<max('4','5');

    return 0;
}