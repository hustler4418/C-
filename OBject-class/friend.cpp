#include<iostream>
using namespace std;
class sample{
    int a;
    int b;
     public :
      void setvalue(){
        a=20;b=34;
      }
      friend float mean(sample s);
};

float mean(sample s){
    return (s.a+s.b)/2.0;
}
int main(){
sample s;
s.setvalue();
cout<<"mean value is"<<mean(s);
}