#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    /*
    foreach loop = loop that eases the traversal over an iterable data set
    */

   string students[] = {"Bob", "Mike", "Jennie", "David", "Mark"};

   for(string x : students){
    cout<<x<<'\n';
   }

    return 0;
}