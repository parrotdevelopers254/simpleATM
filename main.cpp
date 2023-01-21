#include <iostream>

using namespace std;
void menu();
int main()
{
    menu();
    int option;
    float deposit;
    float balance = 0;
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
