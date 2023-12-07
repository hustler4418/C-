#include<iostream>
using namespace std;

class complex{
    int a;
    int b;
    public :
     void setdata(int a1,int b1){
        a=a1;
        b=b1;
     }
     void sum(complex o1,complex o2){
        a=o1.a+o2.a;
        b=o1.b+o2.b;
     }
     void print(){
        cout<<"complex number is:"<<a<<"+"<<b<<"i"<<endl;
     }
};
int main(){
complex c,d;
c.setdata(4,5);
c.print();
d.setdata(2,4);
d.print();
complex add;
add.sum(c,d);
add.print();
}