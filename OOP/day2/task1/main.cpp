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

  }
  Complex_num add(Complex_num c1,Complex_num c2){
      Complex_num result;
      result.setRealnum(c1.getRealnum()+c2.getRealnum());
      result.setImgnum(c1.getImgnum()+c2.getImgnum());
      return result;


  }

  Complex_num add(Complex_num c1){
   Complex_num res;
   res.realnum=c1.realnum +realnum;
   res.imgnum=c1.imgnum+imgnum;
   return res;



  }
};

Complex_num add(Complex_num c1,Complex_num c2);

int main()
{
    Complex_num c1;
    Complex_num c2(5);
    Complex_num c3(5,7);
    c1.print();
    c2.print();
    c3.print();
    Complex_num c4=add(c2,c3);
    c4.print();
    Complex_num c5=c3.add(c4);
    c5.print();
    Complex_num c6,c7;
    c6.setcomplex(3,9);
    c7.setcomplex(5,2);
    Complex_num c8=add(c6,c7);
    c8.print();



    return 0;
}
  Complex_num add(Complex_num c1,Complex_num c2){
      Complex_num result;
      result.setRealnum(c1.getRealnum()+c2.getRealnum());
      result.setImgnum(c1.getImgnum()+c2.getImgnum());
      return result;


  }
