#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string>s;
    s.push("hm");
    s.push("honge");
    s.push("kamyab");
    cout<< "top element "<<s.top()<<endl;
    s.pop();
        cout<< "top element "<<s.top()<<endl;
        cout<<"size of stack "<<s.size(); 
cout <<"empty or not "<<s.empty()<<endl;
    
    
    
    
    
    
    
    }