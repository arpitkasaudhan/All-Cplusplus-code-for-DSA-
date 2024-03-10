#include<iostream>
using namespace std;
class node {
  public:
  int data ;
  node*next;
  node(int data ){
     this->data=data ;
     this-> next=NULL;
  }
  //distructer
  ~node(){
    int value =data;
    //memory free krane ke liye 
    if (next!=NULL){
        delete next;
        next=NULL;
    } cout <<"memory is free with data  "<<value <<endl;
  }
};
void insertatanynode(node*&tail,int element,int d){
     //empty list
     if(tail==NULL){
        node*newnode=new node(d);
        tail=newnode;
        newnode->next=newnode;
     }
     //non empty list element is present
     else{
        node*curr=tail;
        while(curr->data!=element){
            curr=curr->next;
        }
          node*temp=new node(d);
          temp->next=curr->next;
          curr->next=temp;
     }
}
void print (node*tail){
   node*temp=tail;
   if(tail==NULL){
    cout<<"list is emptyy";
    return;
   }
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
       } while(tail !=temp) ;  
       cout<<endl;
}
void deletion(node*&tail,int value){
     //empty list
     if(tail==NULL){
        cout<<"list is empty ,please check again"<<endl;
        return;
     }
     else{
        //non empty
        //assuming that the element is present in the list
        node*prev=tail;
        node*curr=prev->next;
        while(curr->data!=value){
              prev=curr;
              curr=curr->next;
        }
           prev->next=curr->next;
        // 1node 1  ll
        if (curr==prev){
            tail=NULL;
        }
       else if(tail==curr){
            tail=prev;
        }
     
        curr->next=NULL; 
        delete curr;

     }
}
int main(){
    node* tail=NULL;
    insertatanynode(tail,5,3);
    print(tail);
   insertatanynode(tail,3,5);
    print(tail);
 /*   insertatanynode(tail,5,7);
    print(tail);
    insertatanynode(tail,7,9);
    print(tail);
    insertatanynode(tail,5,6);
    print(tail);
    insertatanynode(tail,9,10);
    print(tail);
    insertatanynode(tail,3,4);
    print(tail);
    deletion(tail,3);
    print(tail); */
   // deletion(tail,10);
  //  print(tail);
  deletion(tail,3);
  print(tail);
 return 0;
}