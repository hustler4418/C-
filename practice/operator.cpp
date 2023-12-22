#include<iostream>
using namespace std;

class base{
    int a;
    int b;
    public :
    void geta(int x,int y){
        a=x;
        b=y;
    }
    void show(){
        cout<<a<<"kdsfj"<<b;
    }
    void operator -(); // operator overloading
};

void base ::operator -(){
    a=-a;
    b=-b;
}
int main(){
base b;
b.geta(-4,5);
b.show();
-b;
b.geta(4,6);
b.show();
}