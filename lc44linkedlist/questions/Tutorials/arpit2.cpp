 
 // this program is related to the local and global variable {variable scope }
 #include <iostream>
using namespace std;
int glo=25;// this is called global variable 
void demo(){
    cout<<glo<<endl;
}
int main()
{ int loc = 230; //this is called local variable 
int glo = 98; // local variable 

demo();
cout<< loc<<endl;
cout<<glo<<endl;
cout<<::glo<<endl; // :: (scope resolution opreater ) if you also want the global variable in your output 
} // the presidence of the local variable is more than the local variable so if you are genrate
// the local and global variable with the same name the output is in the local variable side.