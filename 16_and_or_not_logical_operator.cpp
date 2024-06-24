#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{

  /*
  && - check if two conditions are true
  || - check if atleast one of two conditions is true
  ! - reverses the logical state of its operand
  */

  int temp;
  bool sunny = false;
  cout << "Enter the temp : ";
  cin >> temp;

  if (temp < 0 || temp > 30)
  {
    cout << "The temp is bad\n";
  }

  else
  {
    cout << "The temp is good\n";
  }

  if (!sunny)
  { 
    cout<<"It is cloudy outside";
  }
  else{
    cout<<"it is sunny outside";
  }

  return 0;
}