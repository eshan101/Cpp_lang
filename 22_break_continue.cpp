#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    /*
    break - break out of loop
    continue - skip current iteration
    */
   for(int i = 1; i <= 20; i++){
    if(i == 13){
        continue; // it prints till 20 only skips 13 :(
        // break; // it stops the loop at 12
    }
    cout << i << "\n";
   }

    return 0;
}