#include <iostream>

using namespace std;

class Stack{


int Size;
int tos;
int *arr;


public:
    Stack (){
    tos =-1;
    Size=5;
arr=new int[Size];

    }
    Stack( int _size){

    tos=-1;
    Size=_size;
    arr=new int[Size];


    }
    void push (int d){
    if (tos<Size-1){
        tos++;
        arr[tos]=d;

    }
    else{

        cout<<"\n stack is full"<<endl;

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
    void VieContent() {
        for (int i = 0; i <= tos; i++)
            cout << arr[i] << endl;

    }

Stack (const Stack &s){

tos=s.tos;
Size=s.Size;
arr=new int [Size];
for( int i=0;i<=tos;i++){
    arr[i]=s.arr[i];
}}

Stack operator =(Stack &s1){
    tos=s1.tos;
    Size=s1.Size;
    delete [] arr;
    arr =new int[Size];
    for (int i=0;i<tos;i++){
        arr[i]=s1.arr[i];

    }

   return *this;

}

Stack operator +(const Stack &s1){
        Stack result(Size + s1.Size);

        for (int i = 0; i <=s1.tos; i++) {
            result.push(s1.arr[i]);
        }

        for (int i = 0; i <=tos; i++) {
            result.push(arr[i]);
        }
        return result;


}

  ~ Stack(){
cout<<"\n destructor"<<endl;
delete[] arr;

}

};


int main()
{
    Stack s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    /*int x=0;
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
    }*/
        Stack s2(5);
    s2.push(40);
    s2.push(50);

  Stack s3 = s1;

   Stack s4=s1 + s2;
   s4.VieContent();
    return 0;
}
