#include<iostream>
using namespace std;

class dis{
    static int count;
    public :
     dis(){
        count++;
        cout<<"constructor called"<<count;
     }
     ~dis(){
          cout<<"distructor called"<<count;
          count--;
     }
};

int dis :: count=0;
int main(){
    cout<<"object craeted";
    dis d;
    {
        cout<<"inside block";
        cout<<"more object crated";
        dis d1,d2;
    }
    cout<<"outside blocl";

}