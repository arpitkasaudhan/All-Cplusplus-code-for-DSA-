#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"tell me your age "<<endl;
    cin>>age;
    // if((age<18)&& (age>0)){
    // cout<<"you are not come to the party";}
    // else if (age==18){
    //     cout<<"you are kid but come to the party ";
    // }
    // else if (age<=0 ){
    //     cout<<"you are not born ";
    // }
    // else {
    //     cout<< "you come to the party";    }
    
    switch (age)
    {
    case 18:
        cout<<"you are 18"<<endl;
        break;
    case 22:
    cout<<"you are 22"<<endl;
    break;
    case 32 :
    cout<<"you are 32"<<endl;
    break;
    
    default:
    cout<<"no special case "<<endl;
        break;
    } 
    cout<<"Done with switch cases ";

    return 0;
}