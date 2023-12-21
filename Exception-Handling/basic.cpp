#include<iostream>
#include<exception>
using namespace std;

int main(){
int a,b;
cout<<"Enter a and b"<<endl;
cin>>a;
cin>>b;
try{
    if(b==0){
        throw "divide by 0 error :";
    }
int c=a/b;
cout<<"value of c is"<<c<<endl;
}
catch(const char *e){
    cout<<"Exception occured :"<<e<<endl;
}
}