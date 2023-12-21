#include<iostream>
using namespace std;
class complex;

class calculator{
    public :
     void add(complex,complex);
     void multi(complex,complex);
};

class complex{
    int a=5,b=6;      
    friend class calculator;                        // this is mean calluator's class function acces complext class private memb;er
    public :
    

};

 void calculator ::add(complex s,complex c){
    int sum=s.a+c.b;
    cout<<sum;
 }
int main(){
complex s,c;
calculator cal;
cal.add(s,c);
}