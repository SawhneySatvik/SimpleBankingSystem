#include<iostream>

using namespace std;

void ShowBalance(double balance);
double Deposit();
double Withdraw(double balance);

int man(){
    double balance=0;
    int choice=0;

    cout<<"***** Simple Banking Model *****"<<endl;
    
    do
    {
        cout<<"Enter your choice:"<<endl;
        cout<<"1.Show Balance"<<endl;
        cout<<"2.Deposit Money"<<endl;
        cout<<"3.Withdraw Money"<<endl;
        cout<<"4.Exit"<<endl;

        cin>>choice;

        cin.clear();
        fflush(stdin);

        switch(choice)
        {
            case 1:
                ShowBalance(balance);
                break;
            case 2:
                balance+=Deposit();
                ShowBalance(balance);
                break;
            case 3:
                balance+=Withdraw(balance); 
                ShowBalance(balance);
                break;;
            case 4:
                cout<<"Thanks for visiting!"<<endl;
                break;
            default:
                cout<<"Invalid choice!!!"<<endl;
                break;
        }
    } while (choice!=4);    
    
    return 0;
}

void ShowBalance(double balance){
    cout<<"Your balance is: ₹"<<balance<<endl;
}

double Deposit(){
    double amount=0;

    cout<<"Enter amount to be added: ₹";
    cin>>amount;

    if(amount>0){
        return amount;
    }
    else{
        cout<<"Not valid!"<<endl;
        return 0;
    }
}

double Withdraw(double balance){
    double amount=0;

    cout<<"Enter amount to be withdrawn: ₹";
    cin>>amount;

    if(amount>balance){
        cout<<"Insufficient Funds!!"<<endl;
    }
    else if(amount<0){
        cout<<"Thats not a valid amount!!"<<endl;
        return 0;
    }
    else{
        return amount;
    }
}