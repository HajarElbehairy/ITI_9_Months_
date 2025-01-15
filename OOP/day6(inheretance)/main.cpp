#include <iostream>

using namespace std;
class person{
    protected:
  int id;
  char* name;
  int age;
public:
 void setId(int _id){
    id=_id;
 }
  void setAge(int _age){
    age=_age;
 }
  void setName(char* _name){
    name=_name;
 }
 int getId(){
 return id;
 }
 int getAge(){
     return age;

 }
 char* getName(){
   return name;
 }
 person(){
     cout<<"Person Constructor"<<endl;
     id=0;
     age=0;
     name=" no name";

 }
 person(int _id,int _age,char* _name){
     id=_id;
     age=_age;
     name=_name;
 }
 void PersonPrint(){
 cout<<"data of Person class"<<endl;
 cout<<id<<":"<<name<<":"<<age<<endl;
 }
  void print(){
 cout<<"data of Person class"<<endl;
 cout<<id<<":"<<name<<":"<<age<<endl;
 }
 ~person(){
 cout<<"Person Destructor"<<endl;
 }
};
class emp:public person{
 int salary;
 public:
    void setSalary(int _salary){
       salary=_salary;
     }
   int getSalary(){
     return salary;
   }
   emp(){
   cout<<"emp constructor"<<endl;
   }
   emp(int _id,int _age,char* _name,int _salary){//:person(_id,_age,_name){
       salary=_salary;
   }
   void EmpPrint(){
   cout<<"data of emp class"<<endl;
   cout<<id<<":"<<name<<":"<<age<<":"<<salary<<endl;
   PersonPrint();
   }

     void print(){
   cout<<"data of emp class"<<endl;
   cout<<id<<":"<<name<<":"<<age<<":"<<salary<<endl;
     }

};
class student :public person{
int grade;
public:
 void setgrade(int _grade){
  grade=_grade;
 }
 int getGrade(){
   return grade;
 }
 student(){
 cout<<"student constructor"<<endl;
 }
 student (int _id,int _age,char* _name,int _grade){//:person(_id,_age,_name){
     grade=_grade;
 }
 void StudentPrint(){
 cout<<"data of student class"<<endl;
 cout<<id<<":"<<name<<":"<<age<<":"<<grade<<endl;

 }
  void print(){
 cout<<"data of student class"<<endl;
 cout<<id<<":"<<name<<":"<<age<<":"<<grade<<endl;

 }

};
void myfun(person &s1){
    s1.PersonPrint();

}
int main()
{
  //person p1;
  //person p2;
 // p1.setAge(22);
  //p1.setId(3);
  //p1.setName("Hajar");
 // p1.PersonPrint();
  //
  //p2.print();
  emp e1;
  //e1.PersonPrint();
  //e1.EmpPrint();
 e1.print();



    return 0;
}
