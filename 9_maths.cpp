#include<iostream>
#include<cmath>
using std::cout;
using std::cin;
using std::string;

int main(){
    double x = 3.95;
    double y = 4;
    double z;

    // z = std::max(x, y);
    // z = std::min(x, y);

    // Rest of the fxnx need <cmath> library

    // z = pow(2, 3);
    // z = sqrt(49);
    // z = abs(-12); // output : 12
    // z = round(x); // in : 3.4 out : 3
    // z = ceil(x); // in : 3.4 out : 4
    z = floor(x); // in : 3.9 out : 3

    // for more visit : https://www.cplusplus.com/reference/cmath/
    
    cout<<z;
 return 0;
}