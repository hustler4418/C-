#include<iostream>
using namespace std;
class student{
    int marks;
    static int count;
    public :
      void setdata(){
        cout<<"enter marks"<<endl;
        cin>>marks;
        count++;
      }
      void getdata(){
        cout<<"marks is"<<marks;

      }
     static void getcount(){
        cout<<"student number"<<count<<endl;
      }
};

int student ::count=25;
int main(){
student R,S,T;
R.setdata();
student ::getcount();
R.getdata();

S.setdata();
student ::getcount();
S.getdata();

T.setdata();
student ::getcount();
T.getdata();
}