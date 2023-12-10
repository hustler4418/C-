#include<iostream>
using namespace std;

 class space{
    int a,b;
    public :
     void setdata(int a,int b){
        this->a=a;
        this->b=b;
     }
     void show(){
        cout<<"a :"<<a<<endl;
        cout<<"b :"<<b<<endl;
     }
     void operator -(); // declaration
 };

 void space :: operator -(){
    a=-a;
    b=-b;
 }
int main(){
space s;
s.setdata(10,-23);
cout<<"value before operator overlaoding";
s.show();
-s;
cout<<"value after operator overlaoding";
s.show();
}