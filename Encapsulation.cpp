#include<iostream>
using namespace std;

class abc{
    int x;

    public:
    void set(int n){
        x=n;

    }

    int get(){
        return x;
    }

};

int main(){
    abc r1;
    r1.set(3);
    cout<<r1.get();
}