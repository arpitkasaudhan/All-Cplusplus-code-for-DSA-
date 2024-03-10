#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node*prev;
    //constructer
    node(int d){
        data=d;
        this->next=NULL;
        this->prev=NULL; }
    //distructer
    ~node(){
        int v=this->data;
        if(next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory is free for node with data  "<<v<<endl;
    }



};
void insertathead(node*&head,int value){
       node*temp=new node(value);  
       temp->next=head;
       head->prev=temp;
       head=temp; 
     
} 
  void insertattail(node*tail,int number){
      node*temp=new node(number);
      tail->next=temp;
      temp->prev=tail;
      tail=temp;
  }
  int getlength(node*head){
    int len=0;
    node*newone=head;
    while(newone!=NULL){
       len++;
    newone=newone->next;
    }
  return len;
    }
void print (node*&head){
    node*newone=head;
    while(newone!=NULL){
        cout<<newone->data<<" ";
        newone=newone->next;
    }
    cout<<endl;
}
void insertatpostion(node*&tail,node*&head,int postion,int d){
     if(postion==1){
     insertathead(head,d);
    return ;}
       node*temp=head;
    int cnt =1;
    //kyuki starting me node 1pe tha
    while(cnt<postion-1){
       temp= temp->next;
       cnt++;
    } 
    //for last node or inserting at last node
    if (temp->next==NULL){
        insertattail(tail,d);
        return;
    }
    //  for mid 
    node*nodetoinser =new node(d);
    nodetoinser->next=temp->next;
    temp->next->prev=nodetoinser;
    temp->next=nodetoinser;
    nodetoinser->prev=temp;
}
void deletebypostion(int postion,node* &head){
    if (postion==1){
        node*temp= head;
       temp->next->prev=NULL;
       head=temp->next;
       temp->next=NULL;
        delete temp;
    }
    else{
        node*curr=head;
        node*prev=NULL;
        int cnt =1;
        while (cnt<postion){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
int main(){
     node*node1=new node(10);
    node*head=node1;
    node*tail=node1;
    print (head);
   cout<<getlength(head)<<endl;

    insertathead(head,12);
    print(head);
    insertathead(head,15);
    print(head);
    insertathead(head,21);
    print(head);
    insertattail(tail,52);
    print(head);
    insertatpostion(tail,head,2,100);
    print(head);
    insertatpostion(tail,head,1,6);
    print(head);
    deletebypostion(7,head);
     print(head);
        
    
    
      return 0;

}