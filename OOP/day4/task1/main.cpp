#include <iostream>

using namespace std;
class Complex_num{
   int realnum;
   int imgnum;
public:
  int getRealnum(){
      return realnum;
  }
  int getImgnum(){
    return imgnum;

  }
  void setRealnum(int _realnum){
  realnum=_realnum;
  }
  void setImgnum(int _imgnum){
  imgnum=_imgnum;

  }

  void print(){
   if (imgnum== 0){
            cout<<realnum<<endl;
    }
    else if(imgnum< 0){
        cout<<realnum<<imgnum<<"i"<<endl;
    }
    else{

        cout<<realnum<<"+"<<imgnum<<"i"<<endl;

    }

  }
  void setcomplex(int _real,int _img){
       realnum=_real;
       imgnum=_img;

  }

  Complex_num(){
  realnum=imgnum=0;


  }
  Complex_num(int _real){
      realnum=_real;
      imgnum=0;
  }
  Complex_num(int _real,int _img ){
      realnum=_real;
      imgnum=_img;

  }//c4=c2+c3
  Complex_num operator+(Complex_num c1){
      Complex_num result;
      result.setRealnum(c1.getRealnum()+realnum);
      result.setImgnum(c1.getImgnum()+imgnum);
      return result;


  }
   //c4=c3+3
  Complex_num operator+(int x){
   Complex_num res;
   res.realnum=realnum + x;
   res.imgnum=imgnum;
   return res;
  }

int  operator==(Complex_num c1){
   return realnum==c1.realnum && c1.imgnum;
}
int operator !=(Complex_num c1){
return !(*this ==c1);
}

Complex_num operator ++(){   //prefix ++c1
 realnum=realnum+1;
 return *this;
}
//sufix   C1++
Complex_num operator++ (int x){

 Complex_num temp = *this;
 realnum+=1;
 return *this;
}

operator int (){
return realnum;
}





friend Complex_num operator+(int x,Complex_num c1);

};

    Complex_num operator+(int x,Complex_num c1){
      Complex_num result;
      result.setRealnum(x+c1.getRealnum());
      result.setImgnum(c1.getImgnum());
      return result;


  }



int main()
{
   // Complex_num c1,c2,c3,c4,c5;
  Complex_num  c1(2,3);
    Complex_num c2(3,6);
    Complex_num c3=c1+c2;
    c3.print();
    Complex_num c4 =c3+5;
    c4.print();
    Complex_num c5=3+c4;
    c5.print();


    return 0;
}

