#include<iostream>
using namespace std;
/*
Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};

*/

class base1{
    int data1;
    public :
     base1(int a){
        cout<<"base class 1 constuctor is called"<<endl;
        data1=a;
     }
     void show1(){
        cout<<"data 1 :"<<data1<<endl;
     }
};

class base2{
    int data2;
    public :
     base2(int b){
        cout<<"base class 2 constuctor is called"<<endl;
        data2=b;
     }
     void show2(){
        cout<<"data 2 :"<<data2<<endl;
     }
};

class derived : public base1,base2{
    int d1,d2;
    public :
     derived(int a ,int b,int c,int d) :base1(a),base2(b){
      cout<<"derived class constructor is called"<<endl;
        d1=c;
        d2=d;
     }
     void display(){
        show1();
        show2();
        cout<<" derived 1 :"<<d1<<endl;
        cout<<"derived 2 :"<<d2;
     }
};

int main(){
derived d(10,22,36,94);
d.display();
return 0;
}