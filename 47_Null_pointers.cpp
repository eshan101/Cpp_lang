#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    /*
    Null value = a special value that means something has no value.
    When a pointer is holding a null value, 
    that pointer is not pointing at anything (null pointer)

    nullptr = keyword represents a null pointer literal

    nullptrs are helpful when determining if an address was successfully assigned to a pointer
    */

   int *pointer = nullptr;
   int x = 123;

//    pointer = &x;

   if(pointer == nullptr){
    cout<<"Address was not assigned";
   }
   else{
    cout<<"Address was assigned";
    // cout<<*pointer;
   }

    return 0;
}