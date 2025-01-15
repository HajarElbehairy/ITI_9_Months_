#include <iostream>

using namespace std;
class Point{
    int x;
    int y;
public:

      int getX(){
      return x;
  }
  int getY(){
    return y;

  }
  void setX(int _x){
  x=_x;
  }
  void setY(int _y){
  y=_y;

  }

Point(){
  x=y=0;

}
Point(int _x){
  x=_x;
  y=0;
}
Point(int _x,int _y){
 x=_x;
 y=_y;

}
void print(){
cout<<"("<<x<<","<<y<<")"<<endl;

}
};

class Rec{
 Point UL;
 Point LR;

public:
Rec(){
cout<<"ctor Rec"<<endl;

}
Rec(int _x1,int _x2,int _y1,int _y2){
   UL.setX(_x1);
   UL.setY(_y1);
   LR.setX(_x2);
   LR.setY(_y2);



}
void setUl(int _x,int _y){
   UL.setX(_x);
   UL.setY(_y);
}
void setLr(int _x,int _y){
   LR.setX(_x);
   LR.setY(_y);
}

Point getUl(){
   return UL;


}
Point getLr(){
   return LR;
}


void print(){

cout<<"UL"<<endl;
UL.print();
cout<<"LR"<<endl;
LR.print();


}

};

class circle{
 int raduis;
 Point center;

 public:
     void setRaduis(int _raduis){
     raduis=_raduis;
     }
     int getRaduis(){
     return raduis;
     }

void setCenter(int _x,int _y){
   center.setX(_x);
   center.setY(_y);
}

Point getCenter(){
   return center;


}
void print(){
cout<<"center";
center.print();
cout<<raduis;

}
circle(){
cout<<"circle constructor"<<endl;

}
circle(int _x,int _y,int _raduis){
center.setX(_x);
center.setY(_y);
raduis=_raduis;

}


};








int main()
{
    Rec R1;
    R1.setUl(3,4);
    R1.setLr(5,7);
    R1.print();
    Rec R2(3,4,5,6);
    R2.print();
    circle c1(3,4,60);
    c1.print();
    return 0;
}

