#include<iostream>
#include<queue>
using namespace std;
class node {
    public:
        int data;
        node* left;
        node* right;

    node(int d) {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node* buildTree(node* root) {

    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);    

    if(data == -1) {
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;
}
void levelOrderTraversal(node* root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()) {
        node* temp = q.front();
        q.pop();
     // seperater  purana level complete  ho jayega
        if (temp == NULL){
           cout<< endl;
            if(!q.empty()){ // queue still has some child nodes 
                q.push(NULL);
            }
        }
        else{
        cout << temp -> data<< " ";
        if(temp->left) { 
            q.push(temp->left);
            }
            //purana level complete traverse ho chuka hai
            if(temp ->right) { 
                //queue still has some child ndoes
               q.push(temp->right);
            }  
        }

    }

}

void inordertravesal(node * root){
     // L N R
     // base case 
     if(root== NULL){
        return;
     }
     inordertravesal(root->left);
     cout<<root->data << " ";
     inordertravesal(root->right );
}
void preorder(node*root){
    // N L R 
    if (root== NULL){
        return;
    }
    cout<< root->data <<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node*root){
    // L R N 
    if (root== NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void buildbylevelorder(node* &root){
    queue<node*> q;
    cout<< "enter the data for root"<<endl;
    int data ;
    cin >>data;
    root= new node (data);
    q.push(root);
    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        cout << "Enter left node for: " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if(leftData != -1) {
            temp -> left = new node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right node for: " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if(rightData != -1) {
            temp -> right = new node(rightData);
            q.push(temp->right);
        }
    }
 }
    int main(){
    node*root=NULL;
    buildbylevelorder(root);
    cout<<"level order traversal"<< endl;
    levelOrderTraversal(root);
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    // creating a tree
    // root = buildTree(root);
    // //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    // //level order 
    // cout << "printong the level order traversal output"<< endl;
    // levelOrderTraversal(root);
    // cout << "printong the inorder traversal output"<< endl;
    // inordertravesal(root);
    // cout<< endl;
    // cout << "printong the preorder traversal output"<< endl;
    // preorder(root);
    // cout<< endl;
    // cout << "printong the postorder traversal output"<< endl;
    // postorder(root);
    return 0;
}


























































































// .............................................................
// baabar ka code 
// #include<iostream>
// #include<queue>
// using namespace std;

// class node {
//     public:
//         int data;
//         node* left;
//         node* right;

//     node(int d) {
//         this -> data = d;
//         this -> left = NULL;
//         this -> right = NULL;
//     }
// };

// node* buildTree(node* root) {

//     cout << "Enter the data: " << endl;
//     int data;
//     cin >> data;
//     root = new node(data);    

//     if(data == -1) {
//         return NULL;
//     }

//     cout << "Enter data for inserting in left of " << data << endl;
//     root->left = buildTree(root->left);
//     cout << "Enter data for inserting in right of " << data << endl;
//     root->right = buildTree(root->right);
//     return root;

// }

// void levelOrderTraversal(node* root) {
//     queue<node*> q;
//     q.push(root);

//     while(!q.empty()) {
//         node* temp = q.front();
//         cout << temp -> data<< " ";
//         q.pop();

//         if(temp->left) { 
//             q.push(temp->left);
//             }
//             //purana level complete traverse ho chuka hai
//             if(temp ->right) { 
//                 //queue still has some child ndoes
//                q.push(temp->right);
//             }  
        

//     }

// }

// void inorder(node* root) {
//     //base case
//     if(root == NULL) {
//         return ;
//     }

//     inorder(root->left);
//     cout << root-> data << " ";
//     inorder(root->right);

// }

// void preorder(node* root) {
//     //base case
//     if(root == NULL) {
//         return ;
//     }

//     cout << root-> data << " ";
//     preorder(root->left);
//     preorder(root->right);

// }

// void postorder(node* root) {
//     //base case
//     if(root == NULL) {
//         return ;
//     }

//     postorder(root->left);
//     postorder(root->right);
//     cout << root-> data << " ";

// }

// void buildFromLevelOrder(node* &root) {
//     queue<node*> q;

//     cout << "Enter data for root" << endl;
//     int data ;
//     cin >> data;
//     root = new node(data);
    
//     q.push(root);

//     while(!q.empty()) {
//         node* temp = q.front();
//         q.pop();

//         cout << "Enter left node for: " << temp->data << endl;
//         int leftData;
//         cin >> leftData;

//         if(leftData != -1) {
//             temp -> left = new node(leftData);
//             q.push(temp->left);
//         }

//         cout << "Enter right node for: " << temp->data << endl;
//         int rightData;
//         cin >> rightData;

//         if(rightData != -1) {
//             temp -> right = new node(rightData);
//             q.push(temp->right);
//         }
//     }
//  }


// int main() {

    // node* root = NULL;
    // root = buildTree(root);

    // buildFromLevelOrder(root);
    // levelOrderTraversal(root);
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1

    /*
    //creating a Tree
    root = buildTree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    //level order
    cout << "Printing the level order tracersal output " << endl;
    levelOrderTraversal(root);

    cout << "inorder traversal is:  ";
    inorder(root); 

    cout << endl << "preorder traversal is:  ";
    preorder(root); 

    cout << endl << "postorder traversal is:  ";
    postorder(root); 
    */


//     return 0;
// }