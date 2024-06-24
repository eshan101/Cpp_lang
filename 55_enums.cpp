#include <iostream>
using std::cin;
using std::cout;
using std::string;

enum Day {sunday = 0, monday = 1, tuesday = 2, wednesday = 3, thursday = 4, friday = 5, saturday = 6};

enum colours {lavandor, mango, ninja, dance};
// by default if u don't give integer value then they are linked with 0, 1, 2, 3, 4...

enum planets {mercury = 4880, venus = 12104, earth = 12756};
// planets with diameter in km


int main()
{
    /*
    enums = a user-defined data type that consists
            of paired named-integer constants.
            GREAT if you have a set of potential options
    */
   /*
   U cannot use string with switch cases but u can do that with enums
   */
  colours fruit = mango;
  (fruit == 1) ? cout<<"I am mango"<<'\n' : cout<<"I am nobody"<<'\n';

  Day today = friday;
// u can use even numbers or respective strings of enum for the switch cases
  switch(today){
    case 0:
        cout<<"It is Sunday";
        break;
    case 1:
        cout<<"It is Monday";
        break;
    case 2:
        cout<<"It is Tuesday";
        break;
    case wednesday:
        cout<<"It is Wednesday";
        break;
    case thursday:
        cout<<"It is Thursday";
        break;
    case 5:
        cout<<"It is Friday";
        break;
    case saturday:
        cout<<"It is Saturday";
        break;
  }

    return 0;
}