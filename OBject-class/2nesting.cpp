#include<iostream>
using namespace std;

class Set{
    private :
      int m,n;
    public :
      void setdata();
      void display();
      int largest();
};

void Set :: setdata(){
    cout<<"enter values of m ,n";
    cin>>m>>n;
}
int Set :: largest(){
    if(m>=n){
        return m;
    }
    else{
        return n;
    }
}
void Set ::display(){
    cout<<"largest value is:"<<largest();
}


int main(){
Set A;
A.setdata();
A.display();
}