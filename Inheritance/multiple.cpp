#include<iostream>
using namespace std;

 class physics{
    public :
     int pmarks=24;
 };
 class math{
    public :
     int mmarks=26;
 };
 class total :public physics,public math{
    public :
      void show(){
        int marks=pmarks+mmarks;
        cout<<"marks is"<<marks;
      }
 };
int main(){
total T;
T.show();
}