#include<iostream>
#include<cmath>
using std::cout;
using std::cin;
using std::string;

int main(){
    int base;
    int perp;
    cout<<"base : ";
    cin>>base;
    cout<<"perpendicular : ";
    cin>>perp;
    double hypo = sqrt(pow(base, 2) + pow(perp, 2));
    cout<<"hypotenuse : " << hypo;
 return 0;
}