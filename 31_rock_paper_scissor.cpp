#include <iostream>
#include <ctime>
using std::cin;
using std::cout;
using std::string;

int main()
{
    int choose;
    int won = 0;
    int lose = 0;
    int count = 1;
    do
    {
        srand(time(NULL));
        int num = (rand() % 3) + 1;
        /*
        1 - stone
        2 - paper
        3 - scissor
        stone > scissor ; 
        paper > stone ;
        scissor > paper ;
        */
        cout<<"Enter : ";
        cin>>choose;
        cout<<"Machine : "<<num << std::endl;
        switch(choose){
            case 1:
            if (num == 2){
                cout<<"You Lose!\n";
                count+=1;
                lose++;
            }
            else if(num == 3){
                cout<<"You Won!\n";
                count+=1;
                won++;
            }
            else if(num == 1){
                cout<<"Draw!\n";
                count+=1;
            }
            else{
                cout<<"Invalid!\n";
            }
            break;

            case 2:
            if (num == 2){
                cout<<"Draw!\n"; 
                count+=1;
            }
            else if(num == 3){
                cout<<"You Lose!\n"; 
                count+=1;
                lose++;
            }
            else if(num == 1){
                cout<<"You Won!\n"; 
                count+=1;
                won++;
            }
            else{
                cout<<"Invalid!\n";
            }
            break;

            case 3:
            if (num == 2){
                cout<<"You Won!\n"; 
                count+=1;
                won++;
            }
            else if(num == 3){
                cout<<"Draw!\n"; 
                count+=1;
            }
            else if(num == 1){
                cout<<"You Lose!\n"; 
                count+=1;
                lose++;
            }
            else{
                cout<<"Invalid!\n";
            }
            break;
        }
    } while (count<=10);
        cout<<"Number of time u won : "<<won<< std::endl;
        cout<<"Number of times u lose : "<<lose;
        return 0;
}