#include<iostream>
#include<cstring>
//#include<string.h>
//#include"hero.cpp"
using namespace std ;
class Hero {
   private:
    int health;
  public:  
    char level;
    char *name ;
    static int  timetocomplete;
    // constructor
    // for default constructor called
    Hero(){
       cout <<"constuructor called"<<endl;
       name =new char[100]; 
    }
    // parameterised constructor
  Hero (int health){
  //  cout <<"the value of this is "<<this<<endl;
    this->health=health;
  }

    Hero (int health,char level ){
    this ->level=level;
    this->health=health;
  }
//copy constructer creation 
Hero(Hero &s){
  char* ch = new char [strlen(s.name )+1];
  strcpy(ch,s.name);
  this ->name =ch;
    cout<<"copy cunstructer"<<endl;
    this ->health= s.health;
    this -> level= s.level; 
}
    void print (){
    cout<<"Name "<<this->name <<endl;
    cout<<"health  "<<this->health<<endl;
      cout<< "level  "<<this-> level<<endl;
    }
    int gethealth(){ 
        return health;
    }
    char getlevel(){
        return level;
    }
    void sethealth(int h){
        health = h;
    } void setlevel(char ch){
        level= ch ; 
    }
   void setname (char name[] ){
   strcpy(this->name,name );}
   


   static int random(){
     return timetocomplete;
   }
   // distructer
   ~Hero(){
    cout<< "distructer bhai called"<<endl;
   }
   }; 
   int Hero ::timetocomplete=5;
 
int main (){ 

  // cout<<Hero ::timetocomplete<<endl;
   cout <<Hero::random();
  //  Hero a;
  //  cout << a.timetocomplete<<endl;
  //  Hero b;
  //  b.timetocomplete=10;
  //  cout<<a.timetocomplete<<endl;
  //    cout<<b.timetocomplete<<endl;










  // //statically 
  // Hero a;
  // //dynamicaly
  //    Hero *b= new Hero();
  //    delete b;
 return 0;
}








//   Hero hero1; 
//   hero1.sethealth(12);
//   hero1.setlevel('d');
//   char name [7]="babbar";
//   hero1.setname(name);
//  // hero1.print();
//  // dono tarah se create kr sakte hai 
//   Hero hero2(hero1);
//  // hero2.print();
//  //  Hero hero2 =hero1;
// hero1.name [0]= 'G';
//   hero1.print();
//   hero2.print();
//  hero1=hero2;
//  //copy assignment opreater 
//  hero1.print();
//   hero2.print();
  
//   Hero suresh(70,'c') ;
//   suresh.print();
//   //copy constructer
//   Hero r(suresh);
//    r.print();









//    // Hero h1; it shows error becuse default consturtor is died
//      Hero ramesh(70);
//      cout <<"Adress of ramesh "<<&ramesh<<endl;
//      //    ramesh.Hero(); is tarah nhi kr sakte hai kyuki class type ke naam same nhi hona chaiye 
//      // ye ramesh.Hero likha hai
//      ramesh.print ();
//      //dynamically
//      Hero *h=new Hero(11);
//      h->print();
//         Hero temp(22,'b');
//         temp.print ();









    /*
    //statically allocation
    Hero a;
    a.sethealth(100);
    a.level='G';
   cout<< "level is "<<a.level<<endl;
    cout<<"health is "<< a.gethealth()<<endl;   
   // dynamically allocation
    Hero *b =new Hero ; 
  //  b->setlevel('A');
     b->level='A';
     b->sethealth(70);
  // 34 ,35 pe jo likha hai us tarah bhi hm dynamically allocated memory ko allocate kr sakte hai ya phir access kr sakte hai 
   (*b).level='c';
   (*b).sethealth(1000);
   //37,38 line ki tarah bbhi dynamically alocated memor ko access kr sakte hai 
    cout<< "level is "<<(*b).level<<endl;
    cout<<"health is "<< (*b).gethealth()<<endl;
    cout<< "level is "<<b->level<<endl;
    cout<<"health is "<<b-> gethealth()<<endl;




     //    Hero avinash;
    // cout<<"by getter "<< avinash.gethealth()<<endl;
    // avinash.sethealth(70) ;
    //     cout<<"by getter "<< avinash.gethealth()<<endl;   
 // cout<<  avinash.health<<endl;
   //cout<< avinash.level<<endl;
 // avinash.health =70;
  // avinash.level='A';
 // cout<<  avinash.health<<endl;
//   cout<< avinash.level<<endl;
    // cout <<h1.gethealth()<<endl;
  //  cout << "size ;" <<sizeof(h1)<<endl; 
  //it gives the o/p is 8 because of pading 
 /// h1.gethealth()=70;
 // h1.level='A'
 */

  //  return 0;
//}  