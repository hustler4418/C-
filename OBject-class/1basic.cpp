#include<iostream>
using namespace std;

class Employee{
    private :
      int a,b;
    public :
      int d;
      void setdata(int a1,int b1);
      void getdata(){
        cout<<"value of a is"<<a<<endl;
        cout<<"value of b is"<<b<<endl;
      }
};

void Employee ::setdata(int a1,int b1){
    a=a1;
    b=b1;
}

int main(){
Employee e;
e.setdata(5,6);
e.getdata();
}