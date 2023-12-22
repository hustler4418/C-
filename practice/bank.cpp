#include<iostream>
using namespace std;
class BankAccount{
    static int count;
    string name;
    int balance;
    string templateacn="IOB56";
    public :
     BankAccount(string nam,int bal){
        name=nam;
        balance=bal;
        count=count+2;
     }

     string getname(){
        return name;
     }
     int getBalance(){
        return balance;
     }
     void accountnum(){
        cout<<"account num :"<<templateacn<<count;
     }

     void deposit(double amount){
        if(amount>0){
            balance+=amount;
        }
        else{
            cout<<"invalid amount";
        }
     }

};
int BankAccount ::count=1;

int main(){

BankAccount b("ritam",232);
b.accountnum();

BankAccount b2("rita",232);
b.accountnum();


}