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

6011 0009 9013 9424
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
    string getnumber;
    cout<<"Enter your number : ";
    cin>>getnumber;
    // cout<<(int) getnumber[0] - '0';
    // cout<<getnumber[0];
    int size = getnumber.length();
    cout<<size<<'\n';
    int sum1 = 0;
    for(int i = size; i >= 0; i-=2){
        char a;
        cout<<getnumber[i]<<" ";
        int step1 = ((int) getnumber[i] - '0') * 2;
        // cin>>a;
    }
    // cout<<"\nSum after step 1 : "<< sum1;
    return 0;
}