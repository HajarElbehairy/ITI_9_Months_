#include <iostream>

using namespace std;
 class emp {
   int id ;
   char name[20];
   int age;
public:
   int getId();{
       return id;
   }
   int getAge();{
       return age;
   }
   char* getName();{
       return name;
   }
   void setId(int _id);{
       id=_id;
   }
   void setAge(int _age);{
       age=_age;
   }
   void setAge(char* name);{
       name=_name;
   }
   ();{
       return id;
   }


 };

int main()
{
    class emp e1;
    e1.setId(87265)
    e1.setAge(50)
    e1.setName("hagora")
    cout<<e1.getAge()<<":"<<e1.getId()<<":"<<e1.getName()<<endl;

    return 0;
}
