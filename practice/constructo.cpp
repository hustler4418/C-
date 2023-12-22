#include<iostream>
using namespace std;

class base{
    int a;
    int b;
    public :

     base(int x,int y){
        a=x;
        b=y;
     }
};

class derive :public base{
    int z;
    public:
     derive(int x,int y,int p) :base(x,y){
    z=p;
     }
};


int main(){

}