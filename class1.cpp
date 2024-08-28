#include<iostream>
using namespace std;
float area(float,float);
float area(float);

int main(){
    float r,b,h;
    cout<<"enter base and height of rectangle :";
    cin>>b>>h;
    cout<<"\nenter radius of circle :";
    cin>>r;
    cout<<"\nArea of tringle is :"<<area(b,h);
    cout<<"\nArea of circle is :"<<area(r);

}

float area(float b,float h)
{
    return((b*h)/2);
}
float area(float r)
{
    return(3.14*r*r);
}