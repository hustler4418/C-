#include<iostream>
using namespace std;
 
 class shop {
    int id,price;
    public :
     void setdata(int a,int b){
         id=a;
         price=b;
     }

     void getdata(){
        cout<<"item id is :"<<id<<endl;
        cout<<"pirce is :"<<price<<endl;
     }
 };

int main(){
int item=4;
shop *ptr=new shop[item];
int p,q;
for(int i=0;i<item;i++){
    cout<<"Enter id and price for item no. :"<<i+1<<endl;
    cin>>p>>q;
    ptr->setdata(p,q);
    ptr++;
}
ptr=ptr-item;
for(int i=0;i<item;i++){
    cout<<"id and price for item no. :"<<i+1<<endl;
    
    ptr->getdata();
    ptr++;
}
}