#include <iostream>

using namespace std;
void menu();
int main()
{
    menu();
    int option;
    float deposit;
    float balance = 0;
    float withdraw;
    cout<<"Enter your option: ";
    cin>>option;
    switch(option){
case 1:
    cout<<"Enter amount to deposit: ";
    cin>>deposit;
    cout<<"Successfully deposited "<<deposit<<endl;
    balance += deposit;
    cout<<"New account balance is: "<<balance<<endl;
    break;
case 2:
    cout<<"Enter amount to withdraw: ";
    cin>>withdraw;
    if(withdraw<=deposit){
        cout<<"Successfully withdrawn "<<withdraw<<endl;
        balance -= withdraw;
        cout<<"New account balance is: "<<balance<<endl;
    }
    else{
        cout<<"You can only withdraw a maximum of: "<<balance<<endl;
        break;
    }
case 3:
    cout<<"Your balance is "<<balance<<endl;
    break;
case 4:
    cout<<"See you next time:)"<<endl;
    break;
default:
    cout<<"Please choose either 1, 2, 3, or 4"<<endl;
    }
    return 0;
}
void menu(){
cout<<"**********MENU**********"<<endl;
cout<<"Option 1: DEPOSIT"<<endl;
cout<<"Option 2: WITHDRAW"<<endl;
cout<<"Option 3: CHECK BALANCE"<<endl;
cout<<"Option 4: Exit"<<endl;
cout<<"************************"<<endl;
}
