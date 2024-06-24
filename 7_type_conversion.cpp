#include <iostream>
using std::cout;
using std::string;

int main()
{
    /*
    type conversion = converting a value of one data type to another
                       Implicit = automatic
                       Explicit = Precede value with a new data type (int)
    */
    //    int x = 3.14; // Implicit
    double x = (int)3.14; // Explicit

    //    cout<<x;

    char y = 100; // implicit

       cout<<y;

    //    cout<<(char) 77; // explicit

    // calculate percent of questions correct
    int correct = 8;
    int questions = 10;
    double score = (double)correct / questions * 100;

    /*
    Here's a quick summary:

    Double / Integer -> Double
    Integer / Double -> Double
    Integer / Integer -> Integer
    */

    // cout << score << '%';
    return 0;
}
