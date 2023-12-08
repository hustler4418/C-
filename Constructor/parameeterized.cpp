// distance between two point
#include<iostream>
#include<cmath>
using namespace std;

class Point{
    int a,b;
    public :
     Point(int x,int y); //constructor declare
     Point(void);
     void distance(Point p1,Point p2){
        float sum=pow((p2.a-p1.a),2)+pow((p2.b-p1.b),2);
        cout<<"distance is"<<sqrt(sum);

     }
};
Point :: Point(int x,int y){  // parameterized constructor
a=x;
b=y;
}
Point ::Point(void){
}
int main(){
Point p1(6,3); // implicitly
Point p2=Point(14,9); // Explicitly
Point d;
p2.distance(p1,p2);

}