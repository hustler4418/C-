#include<iostream>
using namespace std;

class shop {
    int price[100];
    int counter;
    public :
     void initCounter(){
        counter=0;
     }
     void setprice();
     void getprice();
};

void shop ::setprice(){
    cout<<"enter price"<<endl;
    cin>>price[counter];
    counter++;
}
void shop :: getprice(){
    for(int i=0;i<counter;i++){
        cout<<"price is"<<price[i];
    }
}
int main(){

shop dukaan;
dukaan.initCounter();
for(int i=0;i<3;i++){
    dukaan.setprice();
}
dukaan.getprice();
}