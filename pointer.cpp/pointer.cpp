#include<iostream>
using namespace std;
class complex{
    int a=2,b=9;
    public :
     void display(){
        cout<<a<<"+"<<b<<"i"<<endl;
     }
};
int main(){
complex c1;
complex *ptr=&c1;
(*ptr).display();

complex *ptr1=new complex;
ptr->display();
}