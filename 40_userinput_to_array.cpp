#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    string foods[5];
    int size = sizeof(foods)/sizeof(foods[0]);

    for(int i = 0; i < size; i++){
        cout<<"Enter a food u like #" << i << ": ";
        std::getline(cin, foods[i]);
    }

    cout<< " You like the following food : \n";

    // for(string food : foods){
    //     cout<< food << "\n";
    // }

    // to print only non-empty elements of element 
    for(int i = 0; !foods[i].empty(); i++){
        cout<< foods[i] << '\n';
    }
    return 0;
}