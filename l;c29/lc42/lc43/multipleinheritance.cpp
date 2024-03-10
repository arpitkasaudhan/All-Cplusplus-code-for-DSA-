#include<iostream>
using namespace std;
class A{
    public:
   void speak(){
    cout <<"speaking"<<endl;
   }
};
class B{
 public:
   void barking(){
    cout <<"barking"<<endl;
   }
};
// multilevel inheritance
class C:public A,public B{

};
int  main (){
    C dog;
    dog.barking();
    dog .speak();
    return 0;
}