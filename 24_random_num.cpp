#include <iostream>
#include <ctime>
using std::cin;
using std::cout;
using std::string;

int main()
{
    /*
    pseudo-random = Not truly random (but close)
    */
   srand(time(NULL));
   int num = (rand() % 6) + 1; // random number from 1 to 6
   cout << num;
    return 0;
}