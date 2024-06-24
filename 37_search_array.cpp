#include <iostream>
using std::cin;
using std::cout;
using std::string;

int indexposition(int num[],int Mynum, int size);

int main()
{
    int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(num)/sizeof(num[0]);
    int index;
    int Mynum;
    cout<<"Enter the number you want to search : ";
    cin>>Mynum;

    index = indexposition(num, Mynum, size);
    if (index != -1){
        cout<<"Index of ur number is : "<<index;
    }
    else{
        cout<<"Your number does not exist";
    }
    return 0;
}

int indexposition(int num[], int Mynum, int size){
    for(int i = 0; i < size; i++){
        if (num[i] == Mynum){
            return i;
        }
    }
    return -1;
}