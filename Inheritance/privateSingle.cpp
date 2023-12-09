#include<iostream>
using namespace std;

class base{ // base class
    int a;
     public:
      int b;
      void get_ab();
      int get_a();
      void show_al();
};
class derive :private base{
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
void base ::show_al(){
    cout<<"showing value from base class function"<<endl;
    cout<<"a :"<<a<<endl;
    cout<<"b :"<<b<<endl;
}
void derive ::mul(){
   get_ab();
    c=get_a()*b;
}
void derive :: display(){
    show_al();
    cout<<"a :"<<get_a()<<endl;
    cout<<"b :"<<b<<endl;
    cout<<"c :"<<c<<endl;
}

int main(){
derive d;
d.mul();
d.display();
return 0;
}