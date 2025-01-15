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


};
void FuncComp(Complex_num exp);
int main()
{
    Complex_num ex;
    int real;
    int img;
    cin>>real;
    cin>>img;
    ex.setImgnum(img);
    ex.setRealnum(real);
    FuncComp(ex);

    return 0;
}

void FuncComp(Complex_num ex){
  if (ex.getImgnum() == 0){
            cout<<ex.getRealnum()<<endl;
    }
    else if(ex.getImgnum() < 0){
        cout<<ex.getRealnum()<<"-"<<ex.getImgnum()<<"i";
    }
    else{

        cout<<ex.getRealnum()<<"+"<<ex.getImgnum()<<"i";

    }




}
