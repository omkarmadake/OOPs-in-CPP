#include<iostream>
#include<cmath>
using namespace std;
//b & h are parameter
float area(int b, int h){
    return (float)1/2*b*h;
}
float area(int r){
    return M_PI*pow(r,2);
}

int main(){
    int b,h,r;
    cout<<"Enter a bredth and height of triangle:"<<endl;
    cin>>b>>h;
    cout<<"Enter a radius of circle:"<<endl;
    cin>>r;
    //b & h are argument
    cout<<"area of triangle is:"<<area(b,h)<<endl;
    cout<<"area of crcle is:"<<area(r);
}