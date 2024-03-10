#include<iostream>
using namespace std;
// #include<stack>
class stack{
    public:
    //proerties
    int top ;
    int *arr;
    int size ;
// behaviour 
stack(int size  ){
    this->size=size;
    top=-1;
    //dynamically memory allocate kr diye 
    arr=new int[size];
} 
void push(int element){
    if(size>0){
        top++;
        arr[top]=element;
    }else {
        cout <<"bsdk jagah nhi hai "<<endl;
    }}
    void pop(){
        if (top>=0){
            top--;
        }else {
            cout <<"bsdk hon abhi toh chaiye kch"<<endl;
        }
    }
    int peak(){
        if (top>=0){
                    return arr[top];
        }else{cout<<"stack is empty"<<endl;
                return -1;
         }
        
    }
    bool isempty(){
        if(top==-1){
            return true;
        }else{
            return false ;
        }
    }
    
};
using namespace std ;
int main (){
    // stack<int>s;
    // s.push(2);
    // s.push(3);
    // s.push(5);
    // s.push(9);
    // cout<<s.top()<<endl;
    //  s.pop();
    //  cout<<s.top()<<endl; 
    // cout<<s.size()<<endl; 
    // if (s.empty()){
    //     cout<<"khanli hai "<<endl;
    // }
    // else { cout<<"kahli nhi hai "<<endl;
    // }
    // s.emplace();
     stack st(5);
     st.push(5);
     st.push(10);
     st.push(9);
     st.push(85);
     st.push(92);
     cout<<st.peak()<<endl;
     if(st.isempty()){
        cout<<"bsdk khali hai "<<endl;
     }else{
        cout<<"bsdk khali nhi hai "<<endl;
     }st.pop();
     cout<<st.peak()<<endl;
     st.pop();
     st.pop();
     st.pop();
     st.pop();
     cout<<st.peak()<<endl;
    return 0;
}