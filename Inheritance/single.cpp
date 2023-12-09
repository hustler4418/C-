#include<iostream>
using namespace std;

class base{ // base class
    int a;
     public:
      int b;
      void get_ab();
      int get_a();
      void show_a();
};
class derive :public base{
    int c;
    public :
     void mul();
     void display();
};
void base ::get_ab(){
    cout<<"enter a an b"<<endl;
    cin>>a>>b;

}
int base :: get_a(){
    return a;
}
void base ::show_a(){
    cout<<"a :"<<a<<endl;
    cout<<"b :"<<b<<endl;
}
void derive ::mul(){
    c=get_a()*b;
}
void derive :: display(){
    cout<<"a :"<<get_a()<<endl;
    cout<<"b :"<<b<<endl;
    cout<<"c :"<<c<<endl;
}

int main(){
derive d;
d.get_ab();
d.get_a();
d.show_a();
d.b=2;
d.mul();
d.display();
return 0;
}