#include<iostream>
using namespace std;

class Ritam{
    int m,n;
     public :
      Ritam(int x,int y=4418){
        m=x;
        n=y;
      }
      void print(){
        cout<<"m :"<<m<<endl;
        cout<<"n :"<<n;
      }
};
int main(){
Ritam monu(12);
monu.print();
}