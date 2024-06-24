#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    /*
    fill() = Fills a range of elements with a specified value 
    fill(begin, end, value)
    */

   string foods[10];

   fill(foods, foods + 5, "pizza");
   fill(foods + 5, foods + 10, "paneer");

   for(string food : foods){
    cout << food << '\n'; 
   }
    return 0;
}