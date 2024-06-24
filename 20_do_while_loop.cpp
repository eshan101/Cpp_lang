#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    /*
    do while loop = do some block of code then repeat ahain if condition is true
    */
    int num;

    do
    {
        cout << "Enter a negative number : ";
        cin >> num;
    } while (num > 0);

    cout << "The # is : " << num;

    return 0;
}