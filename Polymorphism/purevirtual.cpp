#include<iostream>
#include<cstring>
using namespace std;

class phone{
    protected :
      string model;
      float rating;
    public :
    phone(string m,float r){
        model=m;
        rating=r;
    }
     virtual void display()=0; // do nothing function // pure virtual function    
};

class Apple :public phone{
    public :
     int camera;
     Apple(string m,float r,int c) : phone(m,r){
       camera=c;
     }

     void display(){
        cout<<"Model of phone :"<<model<<endl;
        cout<<"Rating is :"<<rating<<endl;
        cout<<"camera rating :"<<camera<<endl;
     }
};

class samsung:public phone{
    public :
     int sound;
    samsung (string m,float r,int s) : phone(m,r){
       sound=s;
     }

     void display(){
        cout<<"Model of phone :"<<model<<endl;
        cout<<"Rating is :"<<rating<<endl;
        cout<<"sound rating :"<<sound<<endl;
     }
};


int main(){
string model;
float rating;
int quality;

model="iphone15";
rating=4.5;
quality=82;
Apple app(model,rating,quality);

model="M11";
rating=4.1;
quality=87;
samsung sam(model,rating,quality);

phone* ph[2];
ph[0]=&app;
ph[1]=&sam;

ph[0]->display();
ph[1]->display();

}