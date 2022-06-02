// Class to Basic type conversion
#include <iostream>
using namespace std;
class Time
{
    int hrs,min;
public:
Time(int a,int b)  // constructor
{
    cout<<"Constructor called with two parameters...\n";
    hrs=a;
    min=b;
}
// casting operator function
operator int()
{
    cout<<"\nClass Type to Basic Type Conversion...";
    return(hrs*60+min);
}
};
int main()
{
    int h,m,duration;
    cout<<"\nEnter Hours ";
    cin>>h;
    cout<<"\nEnter Minutes ";
    cin>>m;
    Time t(h,m);       // construct object
    duration = t;      // casting conversion OR duration = (int)t
    cout<<"\nTotal Minutes are "<<duration;
    cout<<"\n2nd method operator overloading ";
    duration = t.operator int();
    cout<<"\nTotal Minutes are "<<duration;

}
