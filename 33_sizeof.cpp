#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    /*
    sizeof() = determines the size in bytes of a:
               variable, data type, class, objects, etc. 
    */
   int hi = 1;
   double hi1 = 95.75;
   char hi2 = 'A';
   string hi3 = "I am always here";
   char new1[] = {'A','E','M','P','G'};

   cout<<sizeof(hi)<<" bytes\n";
   cout<<sizeof(hi1)<<" bytes\n";
   cout<<sizeof(hi2)<<" bytes\n";
   cout<<sizeof(hi3)<<" bytes\n";
   cout<<sizeof(string)<<" bytes\n";
   cout<<sizeof(new1)<<" bytes\n";

    return 0;
}