#include<iostream>
using namespace std;

class Copy{
    int x,y;
    public :
      Copy(){
        x=0;
        y=0;
      }
      Copy(int a,int b){
        x=a;
        y=b;
      }
      Copy(Copy &obj){
        cout<<"copy constructor is called"<<endl;
        x=obj.x;
        y=obj.y;
      }
      void print(){
        cout<<x<<endl;
        cout<<y;
      }
};

int main(){
Copy c(4,5);
Copy c1(c);
c1.print();

}