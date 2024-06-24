#include <iostream>
using std::cin;
using std::cout;
using std::string;

void showBalance(double balance);
double depositMoney();
double withdrawMoney();

int main()
{
    double balance = 0;
    int input1;
    do
    {
        cout << "\n\n*********************\n";
        cout << "Welcome to our Bank!!\n";
        cout << "*********************\n";
        cout << "1. Show ur balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter the number : ";
        cin >> input1;

        cin.clear(); // this will prevent the program from crashing if we entered characters
        fflush(stdin);

        switch (input1)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance = balance + depositMoney();
            showBalance(balance);
            break;
        case 3:
            balance = balance - withdrawMoney();
            showBalance(balance);
            break;
        case 4:
            cout << "Thanks for visiting!\n";
            break;
        default:
            cout<<"Try something else!\n";
        }
    } while (input1 != 4);
    return 0;
}

void showBalance(double balance1)
{
    cout << "Your Balance is : " << balance1 << "\n";
};
double depositMoney(){
    double amount = 0;
    cout<<"Enter amount to be deposited : ";
    cin>>amount;
    return amount;
};
double withdrawMoney(){
    double amount1 = 0;
    cout<<"Enter amount to be withdrawn : ";
    cin>>amount1;
    return amount1;
};