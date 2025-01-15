#include <iostream>
#include <cstring>

using namespace std;
 class emp {
   int id ;
   char name[20];
   int age;
public:
   int getId(){
       return id;
   }
   int getAge(){
       return age;
   }
   char* getName(){
       return name;
   }
   void setId(int _id){
       id=_id;
   }
   void setAge(int _age){
       age=_age;
   }
   void setName(char* _name){
       strcpy(name,_name);
   }
   void print(){
   cout<<id<<":"<<age<<":"<<name<<endl;
   }
emp(){
 age=0;
 id=0;
 strcpy(name,"no name");

}

emp(int _id,char _name[]){
 id=_id;

 strcpy(name,_name);



}
emp(int _id,int _age,char _name[]){
 id=_id;
 age=_age;
 strcpy(name,_name);



}


~emp(){
   cout<<"deconstructor"<<endl;

}

 };

int main()
{
    emp e1,e4;
    emp e2(20,"omar");
    emp e3(123,30,"aly");
    e1.print();
    e2.print();
    e3.print();

    return 0;
}
