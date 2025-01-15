#include <iostream>

using namespace std;
 struct emp {
   int id ;
   char name[20];
   int age;

 };

int main()
{
    struct emp e1;
    cin>>e1.age;
    cin>>e1.id;
    cin>>e1.name;
    cout<<e1.age<<":"<<e1.id<<":"<<e1.name<<endl;

    return 0;
}
