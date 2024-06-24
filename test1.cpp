/*
---------------------
Luhn Algorithm
---------------------
1. Double every second digit from right to left
    If doubled number is 2 digits, split them
2. Add all single digits from step 1
3. Add all odd numbered digits from right to left
4. Sum results from steps 2 & 3
5. If step 4 is divisible by 10, # is valid

6011000990139424

6011 0009 9013 9424
6 1  0 0  9 1  9 2 
 1 2  2       1 8  2   1 8 4
29
 0 1  0 9  0 3  4 4
21
sum : 50
50 % 10 == 0 -> Valid

*/

#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    string a = "111";
    int size = a.length();
    int res = 0;
    for(int i = size-1; i >=0; i-=1){
    int sum = ((int) a[i] - '0') * 2;
    cout<<sum<<'\n';
    // cout<<a[i];
    res = res + sum;
    }
    cout<<res;
    return 0;
}