#include<iostream>
using namespace std;
class human {
    public:
    int age ;
    int hieght;
    int weight;
 //   public:
int getage (){
         return this->age;
    }
    void setweight(int h){
        this->weight=h;
}};
class male: public human{
    public:
     char  colour ;
     void sleep(){
        cout << "so gya bhai apna "<<endl;
     }
};


int main (){
    male a;
cout<<  a.age<<endl;
 cout<<  a.weight<<endl;
  cout<<  a.hieght<<endl;
  cout<<a.colour<<endl;
 a.setweight(70);
cout<<  a.weight<<endl;
 a.sleep();
 cout<<a.getage()<<endl;
   return 0; 
}