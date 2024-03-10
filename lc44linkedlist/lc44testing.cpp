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
void insertathead(node*&head,int a){
     node*newtemmp=new node(a);
     newtemmp->next=head;
       head=newtemmp;
}
void insertattail(node*&tail,int b){
       node*newtemp=new node(b);
     tail->next= newtemp;
   tail=tail->next;
}
void insertatpostion(node* &tail,node* &head,int postion,int d){
 //at starting node or 1st node
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
    node*nodetoinser =new node(d);
    nodetoinser->next=temp->next;
    temp->next=nodetoinser;
}
void deletebypostion(int postion,node* &head){
    if (postion==1){
        node*temp= head;
        head=head->next;
        // memory  free kra do 
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
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
void print (node*&head){
    node*newone=head;
    while(newone!=NULL){
        cout<<newone->data<<" ";
        newone=newone->next;
    }
    cout<<endl;
}
int main (){
    node*node1=new node(10);
    // cout<<node1->data<<endl;
    //  cout<<node1->next<<endl;
  node*head = node1;
  node*tail= node1;
  print(head);
insertattail(tail,20);
   print(head);
 insertattail(tail,40);
  print (head);
  insertathead(head,50);
    print (head);
 insertatpostion(tail,head,5,23);
 print (head);
 //agar hm akhiri postion pe dal rhe hai toh hme tail bvhi toh update krna hoga 
 cout<<"head "<<head->data<<endl;
 cout<<"tail "<<tail-> data<<endl;
 deletebypostion(5,head);
 print (head);
   return 0;
}
