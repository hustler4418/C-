#include<iostream>
#include<stdexcept>

using namespace std;

int main(){
int a=3,b=0,c;

try{
    if(b==0)
    throw runtime_error("runtime error");
    c=a/b;
    cout<<c;
}
catch(runtime_error &error){
    cout<<"error occured :"<<endl;
    cout<<error.what();
}
}