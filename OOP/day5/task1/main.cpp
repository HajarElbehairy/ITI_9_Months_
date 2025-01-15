#include <iostream>

using namespace std;
class duration {
    //our data;
int hours;
int minutes;
int seconds;
public:
    void setHours(int _hours){
        hours=_hours;
    }
     void setMinutes(int _minutes){
        minutes=_minutes;
    }
     void setSeconds(int _seconds){
        seconds=_seconds;
    }
    int getHours(){
 return hours;
    }
        int getMinutes(){
 return minutes;
    }
        int getSeconds(){
 return seconds;
    }
    duration(){
    hours=0;
    minutes=0;
    seconds=0;

    }
    duration(int _hours,int _minutes,int _seconds){
    hours=_hours;
    minutes=_minutes;
    seconds=_seconds;

    }
    duration(int _seconds){
    hours = _seconds / 3600;
    minutes = (_seconds% 3600) / 60;
    seconds = _seconds % 60;

    }
    void print (){
    cout<<"Hours: "<<hours<<"  Minutes: "<<minutes<<"  seconds: "<<seconds<<endl;
    }
    duration operator+(duration d){
    duration result;
    result.hours=hours+d.hours;
    result.minutes=minutes+d.minutes;
    result.seconds=seconds+d.seconds;
    return result;

    }

    duration operator+(int x){
    duration result;
    int totalSeconds = hours * 3600 + minutes * 60 + seconds + x;
    result.hours = totalSeconds / 3600;
    result.minutes = (totalSeconds % 3600) / 60;
    result.seconds = totalSeconds % 60;
    return result;
    }
    duration operator ++(){   //prefix
 minutes++;
 return *this;
}
duration operator-- (int x){

 duration temp = *this;
 minutes-1;
 return *this;
}

int  operator>(const duration& d){
   if (hours > d.hours) return true;
    if (hours == d.hours && minutes > d.minutes) return true;
    if (hours == d.hours && minutes == d.minutes && seconds > d.seconds) return true;
    return false;
}
int  operator>=(const duration& d){
    if (*this > d) return true;
    if (hours == d.hours && minutes == d.minutes && seconds == d.seconds) return true;
    return false;

}
friend duration operator+(int x,duration d);
};

duration operator+(int x,duration d){
      duration result;
    int totalSeconds = d.getHours() * 3600 + d.getMinutes() * 60 + d.getSeconds()+x ;
    result.hours = totalSeconds / 3600;
    result.minutes = (totalSeconds % 3600) / 60;
    result.seconds = totalSeconds % 60;
    return result;
  }




int main()
{
   duration d1(20,15,3);
   d1.print();
   cout<<"20:  15:   3"<<endl;
   duration d2(3600);
   d2.print();
   cout<<"1:    0:   0"<<endl;
  duration d3(7800);
   d3.print();
   cout<<"2:    10:    0"<<endl;
     duration d4(666);
   d4.print();
   cout<<"0:    11:     6:"<<endl;
   duration d5;
   d5=d3+d4;
   d5.print();
   cout<<"2:   21:    6:"<<endl;
   duration d6;
   d6=d5+7800;
   d6.print();
   cout<<"4:     31:    6:"<<endl;
   duration d7;
  d7=666+d6;
   d7.print();
   cout<<"4:   42:    12:"<<endl;
  duration d8;
   d8=++d3;
   d8.print();
   cout<<endl;
   duration d9;
   d9=d8--;
   cout<<endl;

    if (d1 > d2) {
        cout << "d1 is greater than d2" << endl;
    } else {
        cout << "d1 is not greater than d2" << endl;
    }


    if (d1 >= d3) {
        cout << "d1 is greater than or equal to d3" << endl;
    } else {
        cout << "d1 is not greater than or equal to d3" << endl;
    }

    return 0;
}
