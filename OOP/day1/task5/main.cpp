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

int main()
{
    Complex_num ex;
    int real;
    int img;
    cin>>real;
    cin>>img;
    ex.setImgnum(img);
    ex.setRealnum(real);

    if (img==0){
            cout<<ex.getRealnum()<<endl;
    }
    else if(img<0){
        cout<<ex.getRealnum()<<"-"<<ex.getImgnum()<<"i";
    }
    else{

        cout<<ex.getRealnum()<<"+"<<ex.getImgnum()<<"i";

    }

    return 0;
}
