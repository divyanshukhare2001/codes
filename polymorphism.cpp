#include<iostream>
#include<cstring>
using namespace std;
//compile time polymorphism (static polymorphism)
//function overloading

//this can be achieved by- change in no.of arguments,type of arguments

class A{
    public:
    int height;
    int weight;

    void function(){
        cout<<"inside a"<<endl;
    }

    void function(string name){ //change in type of argument
        cout<<"inside a"<<endl;
    }

    void function(string name,char sur_name){ //change in number of arguments
        cout<<"inside b"<<endl;
    }

    //operator overloading

void operator+(A &x){ //changing the working of an operator
    height-=x.height;
    weight-=x.weight;
   
}

void operator[](string s){
    cout<<height<<endl;
}


};


//run time polymorphism(dynamic polymorphism)
//funtion overriding

class Animal{
    public:

    void speak(){
        cout<<"speaking"<<endl;
    }
};

class Dog:public Animal{
    public:
    void speak(){
        cout<<"barking"<<endl;
    }
};

int main(){
  /*   Dog d;
    d.speak(); */ //overriding the speak function



    A obj1,obj2;

   obj1.height=5;
   obj2.height=2;

   obj1+obj2;

   cout<<obj1.height<<endl;
   obj1["m"];
  
   



return 0;
    
}