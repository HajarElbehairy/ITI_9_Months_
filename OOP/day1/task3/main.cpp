#include <iostream>
#include<string.h>

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


 };

int main()
{

     emp* ptr=new emp;
    ptr->setId(8);
    ptr->setAge(50);
    ptr->setName("hagora");
    cout<<ptr->getAge()<<":"<<ptr->getId()<<":"<<ptr->getName()<<endl;

    return 0;
}
