#include<iostream>
using namespace std;
class Animal{
    public:
    int age;
    int weight;
    public:
    void speak(){
        cout<<"barking"<<endl;
    }
};
class dog : public Animal{
   
};
class germasheferd : public dog{
   
};
int main(){
   germasheferd g;
   g.speak();







    return 0;

}