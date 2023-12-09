#include<iostream>
using namespace std;

class Destruct{
    static int count;
public :
 Destruct(){
    count++;
    cout<<"no. of object:"<<count<<endl;

 }
 ~Destruct(){
    cout<<"no. of object destroyed"<<count<<endl;
    count--;
 }
};
int Destruct ::count=0;
int main(){
cout<<"we are inside our main funciton"<<endl;
cout<<"we will create first object"<<endl;
Destruct d1;
{
    cout<<"we enter in first block"<<endl;
    cout<<"we will create more object"<<endl;
    Destruct d2,d3;
    cout<<"we are exit from block"<<endl;
}
cout<<"return to main function"<<endl;
return 0;
}