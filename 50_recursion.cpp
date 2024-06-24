#include <iostream>
using std::cin;
using std::cout;
using std::string;

void walk(int steps);

int main()
{
    /*
    recursion = a programming technique where a function invokes itselfs from within 
    break a complex concept into a repeatable single step
    */

   // (iterative vs recursive)

   /*
   advantages = less code and is cleaner 
                useful for sorting and searching algorithms

   disadvantages = uses more memory slower 
   */
  walk(15);
    return 0;
}
void walk(int steps){
    // for(int i = 0; i <= steps; i ++){
    //     cout<<"Your step number : "<<i<<'\n';
    // }
    if(steps > 0){
        cout<<"Number of steps left: "<<steps<<'\n';
        walk(steps - 1);
    }
}