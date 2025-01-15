#include <iostream>

using namespace std;

class Stack{

int arr[5];
int Size;
int tos;
//int *arr;


public:
    Stack (){
    tos =-1;
    Size=5;
//arr=new int[Size];

    }
    Stack( int _size){
    Size=_size;
    tos=-1;
    //arr=new int[Size];


    }
    void push (int d){
    if (tos<Size-1){
        tos++;
        arr[tos]=d;

    }
    else{

        cout<<"\n stack is empty"<<endl;

    }
    }
    int pop(int& d){
        if (tos!= -1){
             d =arr[tos];
              tos--;
              return 1;

        }
        else{
            cout<<" \n stack is empty"<<endl;
            return 0;

        }
    }


Stack (Stack &s){

tos=s.tos;
Size=s.Size;
//arr=new int [Size];
for( int i=0;i<=tos;i++){
    arr[i]=s.arr[i];
}}

Stack (Stack *s1){

tos=s1->tos;
Size=s1->Size;
//arr=new int [Size];
for( int i=0;i<=tos;i++){
    arr[i]=s1->arr[i];
}}



  ~ Stack(){
cout<<"\n destructor"<<endl;
//delete[] arr;

}




};

myfun(Stack s){
    s.push(90);
    s.push(80);
    s.push(70);

 int x;
 s.pop(x);
 cout<<endl<<x;




}

int main()
{
    Stack s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    int x=0;
    if (s1.pop(x)==1){
        cout<<endl<<x;
    }
    if (s1.pop(x)==1){
        cout<<endl<<x;
    }
    if (s1.pop(x)==1){
        cout<<endl<<x;
    }
    if (s1.pop(x)==1){
        cout<<endl<<x;
    }
  Stack s2(5);
 myfun(s2);
    return 0;
}
