#include <iostream>
using std::cin;
using std::cout;
using std::string;

int factorial(int num);

int main()
{
    cout<<factorial(5);
    return 0;
}
int factorial(int num){
    // int res = 1;
    // for(int i = 1; i <= num; i++){
    //     res = res * i;
    // }
    // cout<<"factorial is : "<<res;
    if(num > 1){
        return num * factorial(num-1);
    }
    else{
        return 1;
    }
}