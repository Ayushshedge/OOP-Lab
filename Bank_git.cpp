#include<iostream>
#include<string.h>
using namespace std;
class bank_account{

public:

string name;
string actype;
int ac_no;
double balance;



void accept();

    void display();

    void deposite();

    void withdraw();



 bank_account(string n,string accty ,int acnum,double bal){

 name=n;
 actype=accty;
 ac_no=acnum;
 balance=bal;

 }
  bank_account(){
    
  }

};



void bank_account::accept(){

cout <<"please enter your name\n";

cin >> name;



cout<<"Enter account type\n";

cin>> actype;

cout<<"Enter your account number\n";

cin>>ac_no;
cout<<"Enter the balance;";
cin>>balance;

}

void bank_account::display(){

cout<<"Name "<<name<<endl;

cout<<"account_typ:"<<actype<<endl;

cout<<"account_no:"<<ac_no<<endl;

cout<<"balance:"<<balance<<endl;

}


void bank_account::withdraw(){

double amount;

cout<<"Enter the withdraw amount:"<<endl;

cin>>amount;

balance=balance-amount;

cout<<"Your total balance is "<<balance<<endl;

}

void bank_account::deposite(){

    double dep;

    cout<<"Enter the deposite amount:"<<endl;

    cin>>dep;

    balance=balance+dep;

    cout<<"Your total balance is "<<balance<<endl;

}



int main (){

    string n, accty;
    double balance;
    int acnum,choice;
    cout<<"Enter the name:";
    cin>>n;
    cout<<"Enter account number: ";
    cin>>acnum;
    cout<<"Enter account type:";
	cin>>accty;
    cout<<"Enter balance:";
    cin>>balance;
     
  
    bank_account obj1( n, accty ,acnum, balance);
    

    do {
        cout << "\n Menu\n";
        cout << "1. Display Account Details\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                obj1.display();
                break;
            case 2:
                obj1.deposite();
                break;
            case 3:
                obj1.withdraw();
                break;
            case 4:
                cout << "Thanks.\n";
                break;
            default:
                cout << "Invalid choice.\n";
                break;
       }
    } while (choice != 4);

    return 0;
}