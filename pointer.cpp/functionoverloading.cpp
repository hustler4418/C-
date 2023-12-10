#include<iostream>
using namespace std;
double volume(int a);
double volume(int a,int b);
double volume(int a,int b,int c);
int main(){
cout<<"first :"<<volume(4)<<endl;
cout<<"2nd :"<<volume(4,5)<<endl;
cout<<"3rd :"<<volume(4,5,7);
}

double volume(int a){
    return a*a*a;
}

double volume(int a ,int b){
    return a*b;
}

double volume(int a,int b,int c){
    return a*b*c;
}