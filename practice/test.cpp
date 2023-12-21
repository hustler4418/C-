#include<iostream>
using namespace std;
class student{
int a;
public :
 void setdata(int arr){
    a=arr;
 }
 friend void divide(student s);
};

void divide(student s){
int c=s.a/2;
cout<<c;
}
int main(){

student s;
s.setdata(50);
divide(s);
}