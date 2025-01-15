#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    int empID;

public:
    Employee() {
        name="";
    empID=0;
    }
    Employee(string empName, int id) {
        name=empName;
         empID=id;
          }

    void setName(string empName) { name = empName; }
    void setEmpID(int id) { empID = id; }

    string getName()  { return name; }
    int getEmpID()  { return empID; }

    void showDetails()  {
        cout << "Name: " << name << ", ID: " << empID << endl;
    }
};


class Employee2 : public Employee {
private:
    double compensation;
    char payPeriod;

public:
    Employee2() {
    compensation=0.0;
    payPeriod='M';
     }
    void setCompensation(double comp) { compensation = comp; }
    void setPayPeriod(const char period) { payPeriod = period ;}
    double getCompensation()  { return compensation; }
    char getPayPeriod()  { return payPeriod; }

    void showCompensation()  {
        cout << "Compensation: $" << compensation << ", Period: " << payPeriod << endl;
    }
};

class Manager : public Employee2 {};
class Scientist : public Employee2 {};
class Laborer : public Employee2 {};

int main() {
    Manager mgr;
    mgr.setName("Alice");
    mgr.setEmpID(101);
    mgr.setCompensation(5000.0);
   // mgr.setPayPeriod("M");

    Scientist sci;
    sci.setName("Bob");
    sci.setEmpID(102);
    sci.setCompensation(45.0);
//    sci.setPayPeriod("H");

    Laborer lab;
    lab.setName("Charlie");
    lab.setEmpID(103);
    lab.setCompensation(600.0);
//    lab.setPayPeriod("W");

    cout << "Manager Details: ";
    mgr.showDetails();
    mgr.showCompensation();

    cout << "Scientist Details: ";
    sci.showDetails();
    sci.showCompensation();

    cout << "Laborer Details: ";
    lab.showDetails();
    lab.showCompensation();

    return 0;
}
