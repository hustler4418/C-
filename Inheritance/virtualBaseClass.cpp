#include<iostream>
using namespace std;
class student { // grand parent (virtual base class)
protected :
 int roll;
  public :
   void get_roll(int x){
    roll=x;
   }
   void show_roll(){
    cout<<"roll :"<<roll<<endl;
   }
};

class test :virtual public student { // parent base class 1
protected :
 float p1,p2;
 public :
  void get_mark(int y,int z){
    p1=y;
    p2=z;
  }
  
};
class sports :virtual public student{ // parent base class 2
protected :
 float score;
  public :
   void get_score(int s){
    score=s;
   }
};
class result : public test,public sports{ // derived class (multiple inheritance)
float total;
public :
 void display(){
    total=p1+p2;
    show_roll();
    cout<<"total marks is :"<<total<<endl;
 }
};
int main(){               // only one copy of grandparent class has been inherited
result student1;
student1.get_roll(34);
student1.get_mark(73,56);
student1.display();
;}