#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
    double balance =100, deposite, withdraw;
    int option;
    do{
    cout << "\n\t****************Menu**************";
    cout << "\n\t*                                *";
    cout << "\n\t*      1. Check Balance          *";
    cout << "\n\t*      2. Deposit                *";
    cout << "\n\t*      3. Withdraw               *";
    cout << "\n\t*      4. Transfer               *";
    cout << "\n\t*      5. Exit                   *";
    cout << "\n\t*                                *";
    cout << "\n\t**********************************";
    cout << "\n\t Please choose an Option:";
    cin>> option;

    switch(option){
        case 1:
            cout<<"\n\t Your Balance is:$"<<balance<<endl;
            break;
        case 2:
            cout<<"\n\t Amount you want to deposit: $"<<endl;
            cin>> deposite;
            balance +=deposite;
            cout<< "\n\t Your Current Balance: $"<<balance<<endl;
            break;
        case 3:
            cout<<"\n\t How much do you want to withdraw? $"<<endl;
            cin>> withdraw;
            if(balance<withdraw)

                cout<< "\n\t You do not enough money in your account to withdraw"<<endl;
            else
                 cout<<"\n\t Amount you want to deposit: $"<<endl;
            cin>> deposite;
            balance -=withdraw;
            cout<< "\n\t Your Current Balance: $"<<balance<<endl;
            break;

        case 4:
            cout<<"\n\t This Service is currently not available !!"<<endl;
            break;
        default:
            if(option !=5)
                cout<<"\n\t Invalid Option Please Try again"<<endl;
                break;
    }
     }while(option != 5);
    system("pause");


    return 0;
    getch();
}
