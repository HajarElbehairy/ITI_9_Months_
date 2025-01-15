#include <iostream>
#include<string.h>

using namespace std;
class String{

int Size;
char *arr;
public:
String(){
Size=10;
arr=new char[Size];

}
String(int _Size){
Size=_Size;
arr=new char[Size];
}

String (char *str){
Size=strlen(str)+10;
arr=new char[Size];
strcpy(arr,str);

}



String (String &s){
Size=s.Size;
arr=new char [Size];
strcpy(arr,s.arr);
}

  ~ String(){
cout<<"\n destructor"<<endl;
delete[] arr;

}
char* getArr(){
return arr;
}
void setArr(char* str){
        int len = strlen(str);
            Size = len ;
            arr = new char[Size];
            strcpy(arr, str);
}
  String operator+(const String S1){
      String result;
      strcpy(result.arr, arr);
      strcat(result.arr, S1.arr);
      return result;


  }

    String& operator=(const String& S1) {
            Size = S1.Size;
            arr = new char[Size];
            strcpy(arr, S1.arr);

        return *this;
    }
    void print(){
        cout<<Size<<endl;
        cout << arr << endl;
    }


};

int main()
{
    String s1;
    s1.print();
    String s2(30);
    s2.print();
    String s3("ahmed");
    s3.print();
    String s4=s3;
    s4.print();
    String s5;
    s5=s4+s3;
    s5.print();


    return 0;
}
