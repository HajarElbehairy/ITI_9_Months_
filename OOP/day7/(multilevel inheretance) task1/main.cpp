#include <iostream>

using namespace std;
class shape {
    protected:
int dim1;
int dim2;
public:
void setDim1(int _dim1){
   dim1=_dim1;
}
void setDim2(int _dim2){
dim2=_dim2;
}
int getDim1(){
return dim1;
}
int getDim2(){
return dim2;
}
shape(){
cout<<"shape constructor"<<endl;
}
shape(int _dim1,int _dim2){
dim1=_dim1;
dim2=_dim2;
}
shape(int _dim1){
dim1=_dim1;
dim2=_dim1;
}
 virtual void setdim1(int _dim1){

      dim1=dim2=_dim1;
      }
   virtual   void setdim2(int _dim2){
      dim1=dim2=_dim2;
      }
virtual float calcarea()=0;
};
class Rect:public shape{

public:
    Rect(int _dim1,int _dim2):shape(_dim1,_dim2){}

   float calcarea(){
    return dim1*dim2;
    }



};
class Traingle:public shape{
 public :
     Traingle(int _dim1,int _dim2):shape(_dim1,_dim2){}
     float calcarea(){
     return 0.5*dim1*dim2;
     }

 };
class circle :public shape{
  public :
      circle(int _dim1):shape(_dim1){}
      float calcarea(){
      return  3.14 * dim1 * dim1;
      }

      void setdim1(int _dim1){
      dim1=dim2=_dim1;
      }
      void setdim2(int _dim2){
      dim1=dim2=_dim2;
      }


};
class squar:public Rect{
public :
    squar(int _dim1,int _dim2):Rect(_dim1,_dim2){}
    float calcarea(){
      return dim1*4;

    }

      void setdim1(int _dim1){
      dim1=dim2=_dim1;
      }
      void setdim2(int _dim2){
      dim1=dim2=_dim2;
      }




};
void myfun(shape *s1){

cout<<s1->calcarea()<<endl;
}
int sum(shape* arr[],int s){
int sum=0;
for(int i=0;i<s;i++){
    sum+=arr[i]->calcarea();
}
return sum;


}


int main()

{

   Rect r1(10,20);
   Traingle t1(10,20);
   circle c1(4);
   shape* arr[3]={&r1,&t1,&c1};
   int s=sum(arr,3);
   cout<<s;
    return 0;
}
