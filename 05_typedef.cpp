#include <iostream>
#include <vector>
using std::cout;
using std::string;

typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t; // convention is to while naming the reserved keyword we add "_t" at last
// typedef int num_t;
using num_t = int;

int main()
{
    /*
    typedef = reserved keyword used to create an additional name (alias)
    for another datatype.
    New identifier for an existing type
    Helps with readability and reduces typos
    */
    /*
    Use when there is a clear benefit
    Replaced with 'using' (work better w/ templates)
    */

    //    pairlist_t pairlist; // we cannot understand it yet
    text_t Name1 = "Bro";
    cout << Name1 << '\n';

    num_t a = 13;
    cout << a;

    return 0;
}