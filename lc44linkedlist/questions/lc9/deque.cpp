#include<iostream>
#include<deque>
using namespace std;
int main (){
deque<int>d;
d.push_back(1);
d.push_front(2); 

// for(int i:d){
//     cout<<i<<" ";
// }cout<<endl;
// d.pop_back();
// for(int i:d){
//     cout<<i<<" ";
// }cout<<endl;
// d.pop_front();
// for(int i:d){
//     cout<<i<<" ";
// }
    cout <<"element at 1st index -> "<<d.at(1)<<endl;
 cout <<"empty or not-> " <<d.empty()<<endl;
  cout <<"first element -> "<<d.front()<<endl;
   cout <<"last element  -> "<<d.back()<<endl;
   cout<< "before clear size "<<d.size ()<<endl;
d.erase(d.begin(),d.begin()+2);
cout<<"after clear size "<<d.size()<<endl;
// for(int i:d){
//     cout<<i<< endl;
// }
}