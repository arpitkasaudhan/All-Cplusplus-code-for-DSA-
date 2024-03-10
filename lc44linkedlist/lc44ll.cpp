#include <iostream>
using namespace std;
class Node {
    public:
    int data ;
    Node*next;
    //constructer
    Node (int newdata){
        data=newdata;
        this->next=NULL;}
};
void insertathead(Node*&head,int d ){
//new node create 
Node *temp =new Node(d);
temp->next=head;
head=temp;
}
void print(Node*&head){
  //taki koi change na ho+head me 
  Node*newtemp= head;
  //  while(head!=NULL){
  //head =head->next;
  //cout <<head->data<<" ";
   while(newtemp!=NULL){
   cout <<newtemp ->data<< " ";
    newtemp=newtemp->next;
  }
  cout<<endl;
}
int main (){
  //heap me memory allocate krane ke liye 
  Node* node1 =new Node(10) ;
// cout<<sizeof(node1)<<endl;
//  cout <<node1 -> data<<endl;
//   cout <<node1 -> next<<endl;
      Node*head =node1;
      print(head); 
      insertathead(head,12);
      print (head);
      insertathead(head,15);
      print (head); 
  return 0;
}