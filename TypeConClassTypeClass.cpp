// Conversion from one class to another class type Using type conversion function
#include <iostream>
using namespace std;
class invent2;
class invent1  {
    int code;
    float value;
    public:
    invent1(int a, float b) {
        code=a;
        value=b;
    }
    void display()     {
   cout<<"Code : "<<code<<"Value :"<<value;
    }
    int getcode()  {
        return code;
    }
    int getvalue()  {
        return value;
    }
    operator float()     {
        return value*code;
    } };
class invent2 {
    float value;
    int code;
    public:
        invent2()         {
            value=code=0;
        }
        invent2(float a,int b)         {
            value=a;
            code=b;
        }
        void display()         {
    cout<<"Code : "<<code<<"Value: "<<value;
        }
        invent2(invent1 p) {
            code=p.getcode();
            value=p.getvalue();
        } };
int main() {
   invent1 S1(100,5.5);
   invent2 S2;
   float res;
   res=S1;  // invent1 TO float
   S2=S1;   // invent1 to invent2
   S1.display();
   S2.display();
    return 0;
}
