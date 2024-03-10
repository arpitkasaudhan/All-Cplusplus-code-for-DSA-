#include<iostream>
#include<queue>
using namespace std;
int main(){
queue<string>q;
    q.push("hm");
    q.push("honge");
    q.push("kamyab");
cout <<"size before pop "<<q.size()<<endl;
cout <<"first elemen"<<q.front()<<endl;
q.pop();
cout <<"last element "<<q.front()<<endl;
cout <<"size after pop "<<q.size()<<endl;


}