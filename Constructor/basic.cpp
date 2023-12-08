#include<iostream>
using namespace std;
class complex{
    int a,b;
     public :
      complex(); // constructor declaration
      void print(){
       cout<<a<<"+"<<b<<"i";
      }
};
complex ::complex(){ // defaultl constructor
    a=0;
    b=0;
}
int main(){
complex c;
c.print();
}