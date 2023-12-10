#include<iostream>
using namespace std;


 class base1{
    public :
     void show(){
        cout<<" how are you"<<endl;
     }
 };
 class base2{
    public :
     void show(){
        cout<<"Cómo estás"<<endl;
     }
 };

 class derived :public base1,public base2{
   public :
    void show(){
      base1::show(); //ambiguity resolution by telling complier
                     // only base class 1's show() funciton will execute
    }
 };

int main(){
derived d;
d.show(); 
}