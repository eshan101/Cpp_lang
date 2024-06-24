#include <iostream>
using std::cin;
using std::cout;
using std::string;

double getTotal(double prices[], int size);

int main()
{
    double prices[] = {49.99, 15.05, 75, 9.99};
    int size = sizeof(prices)/sizeof(prices[0]);
    // cout<<size;
    double total = getTotal(prices, size);
    cout<<total;
    return 0;
}

double getTotal(double prices[], int size){
    double total = 0;
    for(int i = 0; i < size; i++){
        // cout<<total;
        total += prices[i];
    }
    return total;
}