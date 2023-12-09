#include<iostream>
using namespace std;
class A{
    int a;
    friend class B;
    public :
      void get_a(){
        cout<<" enter  a "<<endl;
        cin>>a;
      }
      void show_a(){
        cout<<"a :"<<a<<endl;
      }
};
class B :public A {
    int b;
     friend class C;
    public :
     void get_ab(){
        get_a();
        cout<<"enter b "<<endl;
        cin>>b;
     }
     void show_ab(){
        show_a();
        cout<<" b:"<<b;
     }
};
class C :public B{
    int c;
    public :
     void get_abc(){
        get_ab();
        cout<<"entet c"<<endl;
        cin>>c;
     }
     void show_abc(){
        show_ab();
        cout<<"c :"<<c<<endl;
     }
};

int main(){
C rit;
rit.get_abc();
rit.show_abc();
}