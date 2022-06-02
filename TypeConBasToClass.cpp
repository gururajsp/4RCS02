// Type conversion using constructor and  Operator Overloading
#include <iostream>
using namespace std;
class time1 {
    int hr,min;
    public:
    time1()
    {
        hr= min=0;
    }
    time1(int t)
    {
        cout<<"\nBasic Type to Class Using constructor ...\n";
        hr=t/60;
        min=t%60;
    }
    void display()
    {
        cout<<"Hr : "<<hr<<"  min: "<<min<<"\n";
   }
   // overloading function
    void operator =(int t)
{
    cout<<"\nBasic Type to Class Type Conversion...\n";
    hr=t/60;
    min=t%60;
}
   };
int main()
{
   time1 T1(310),T2;
   T1.display();
   int dur=100;
   T2.operator=(200);
   T2.display();
   return 0;
}
