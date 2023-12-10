#include<iostream>
using namespace std;

int main(){
int a=34;
int *ptr=&a;
cout<<"a :"<<a<<endl;
cout<<"*pte"<<*ptr;

int *p=new int(53);
cout<<" *p :"<<*p;

int *arr=new int [4];
arr[0]=10;
*(arr+1)=20; // arr[1]=20
arr[2]=30;
arr[3]=40;
for(int i=0;i<4;i++){
    cout<<"value of arr["<<i<<"] :"<<arr[i]<<endl;
}
delete[] arr;
*(arr+2)=13;
cout<<"new value agter delete"<<*(arr+2);
}