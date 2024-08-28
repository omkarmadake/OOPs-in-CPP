#include<iostream>
using namespace std;
/*
class parents{
public:
    int x;
protected:
    int y;
private:
    int z;
   
};

class children1:public parents {
    //x wiil be public
    //y will be protected
    //z will be not accessible
};

class children:protected parents{
    //x will be protected
    //y will be protected
    //z will be inaccessible
};

class children3:private parents{
    //x will be private
    //y will be private
    //z will be inaccessible
};

int main(){
    parents p;
    p.x;
}
*/


//single inheritance
/*
class parent{
public:
    parent(){
        cout<<"parent class"<<endl;
    }
};

class child:public parent{
public:
    child(){
        cout<<"child class"<<endl;
    }
};

int main(){
    child c;

}
*/

//multilevel inheritance
/*
class parent{
public:
    parent(){
        cout<<"parent class"<<endl;
    }
};

class child:public parent{
public:
    child(){
        cout<<"child class"<<endl;
    }
};

class grandchild:public child{
public:
    grandchild(){
        cout<<"grandchild class"<<endl;
    }
};

int main(){
    grandchild gc;

}
*/

//multiple inheritance
/*
class parent1{
public:
    parent1(){
        cout<<"parent1 class"<<endl;
    }
};

class parent2{
public:
    parent2(){
        cout<<"parent2 class"<<endl;
    }
};

class child:public parent1, public parent2{
public:
    child(){
        cout<<"child class"<<endl;
    }
};

int main(){
    child c;

}
*/

//hierarchical inheritance
/*
class parent{
public:
    parent(){
        cout<<"parent class"<<endl;
    }
};

class child1:public parent{
public:
    child1(){
        cout<<"child1 class"<<endl;
    }
};

class child2:public parent{
public:
    child2(){
        cout<<"child2 class"<<endl;
    }
};

int main(){
    child2 gc;

}
*/

//diamond problem - parent class print 2 time is a problem

class parent{
public:
    parent(){
        cout<<"parent class"<<endl;
    }
};

class child1: public parent{
public:
    child1(){
        cout<<"child1 class"<<endl;
    }
};

class child2: public parent{
public:
    child2(){
        cout<<"child2 class"<<endl;
    }
};
class grandchild:public child1,public child2{
public:
    grandchild(){
        cout<<"grandchild class"<<endl;
    }
};

int main(){
    grandchild gc;

}

