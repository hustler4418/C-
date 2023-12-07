#include<iostream>
using namespace std;
class Employee{
    char name[30];
    int age;
    public :
     void setdata();
     void getdata();
};
void Employee ::setdata(){
    cout<<"enter name:"<<endl;
    cin>>name;
    cout<<"enter age"<<endl;
    cin>>age;
}
void Employee :: getdata(){
    cout<<"name is:"<<name<<"age is"<<age<<endl;
};
const int size=3;
int main(){
Employee manager[size];
for(int i=0;i<size;i++){
    manager[i].setdata();
}
for(int i=0;i<size;i++){
    manager[i].getdata();
}
}