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