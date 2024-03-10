#include<iostream>
#include<vector>
using namespace std;
// ek tarah se array ka modified version hai chuki hm array ka size bdha ghata nhi sakte isi liye hm vector use karte hai 
// it is dynamic 
//agar vectors me values puri tarah bhar jati hai toh toh ye yeh ar values ko insert krane ke liye apne size ko double kar leta hai 
int main(){
     vector<int >v;//kisi bhi vector ko declare karte hain isis trarahjaha pe v uska naam hai 
     vector<int>a(10,1);
     for(int i:a){
          cout<<i<<" ";
     } cout<<endl;
     vector<int >last(a);
      for(int last:a){
          cout<<last<<" ";
     } cout<<endl;
//capacity aur size me antar hota hai size mtlab ki uske andar kitne element pade hue hai aur usme kitni jagah hai 
// aur agar usme capacity jitne element bhare hue hai toh vo apni size double kr lega aur element dalone pr 
     cout<<"capacity-"<<v.capacity()<<endl;// capcity check karn ke liye 
     v.push_back(1); // agar kisi bhi element ko insert krana ho to hm aise hi insert karate hai  
     cout<<"capacity-"<<v.capacity()<<endl;
     v.push_back(2);
     cout<<"capacity-"<<v.capacity()<<endl;
     v.push_back(3);
     cout<<"capacity-"<<v.capacity()<<endl;
     cout<<"size-"<<v.size()<<endl;
     cout<<"element at 2nd index- "<<v.at(2)<<endl;// kisi bhi index pr element nikalane ke liye 
     cout<<"first element "<<v.front()<<endl;//first element print karane ke liye 
     cout<<"last element "<<v.back()<<endl;// last element print karane ke liye

cout<<"before pop back"<<endl;
for(int i:v){
     cout<<i<<" ";
     }cout<<endl;
     v.pop_back();// agar kisi element ko udana ho toh pop_back ka use karte hai vo bhi upar se 
cout<<"after pop back"<<endl;
for(int i:v){
     cout<<i<<" ";}
     

cout<< "before clear size "<<v.size ()<<endl;
v.clear();
cout<<"after clear size "<<v.size()<<endl;
v.pop_back();

}