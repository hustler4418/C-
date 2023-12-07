#include<iostream>
using namespace std;

class Employee {
    int id;
    static int count;
    public :
     void setdata(){
        cout<<"enter the id";
        cin>>id;
        count++;
     }
     void getdata(){
        cout<<"id :"<<id<<"employee no."<<count;
     }
};
int Employee ::count;
int main(){
Employee R,S,T;
R.setdata();
R.getdata();

S.setdata();
S.getdata();

T.setdata();
T.getdata();
}