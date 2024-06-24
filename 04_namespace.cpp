#include <iostream>

namespace first
{
    int x = 1;
}
namespace second
{
    int x = 2;
}
int main()
{
    /*
    Namespace = provides a solution for preventing name conflicts in large projects. Each entity needs a unique name. A namespace allows for identically named entities as long as the namespaces are different.
    */
    /*
     int x = 0;
     std::cout<<first::x; // here first::x refers to the scope resolution operator
     std::cout<<second::x;
     std::cout<<x;
     */

    /*
    using namespace first; // this makes the default output of "x" as namespace first without using "first::x"

    std::cout << x;
    */

    using namespace std; // BAD PRACTICE
    cout << "Hello\n";
    /*
    Using `using namespace std` is generally considered bad practice in C++ because it brings all names from the `std` namespace into the global namespace. This can lead to naming conflicts and make your code less readable, especially in larger projects where it's not immediately clear where a particular function or object is coming from.

    Instead, it's better to use specific using declarations for only the symbols you need, like `using std::cout;` or `using std::vector;`, or to qualify each symbol with `std::` when you use it, like `std::cout` or `std::vector<int>`. This approach makes it clear where each symbol is coming from and helps avoid naming conflicts.
    */
    using std::cout;
    cout << "Here to test std::cout";
    return 0;
}