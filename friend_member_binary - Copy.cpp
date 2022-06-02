/* Program to Overloading Binary addition using friend Function */
#include <iostream>
using namespace std;
class complex
{
    float x,y;
    public:
    complex()
    {
       x=y=0;
    }
     complex(float a,float b)
    {
       x=a;
       y=b;
    }
    void show()
    {
        cout << x << " ";
        cout << y << "\n";
    }
    complex operator+(complex c1){
     complex temp;
    temp.x = c1.x + x;
    temp.y = c1.y + y;
    return temp;
    }
    friend complex operator*(complex ,complex);
};
// Now a friend; use a reference parameter.
complex operator*(complex c1,complex c2)
{
    complex temp;
    temp.x = c1.x * c2.x;
    temp.y = c1.y * c2.y;
    return temp;
}
int main()
{
   complex c1(2,5),c2(3,5),c3,c4;
    cout<<"Object 3 after add \n";
    c3=c1+c2;
    c3.show();
    cout<<"Object 4 after product \n";
    c4=c1*c2;
    c4.show(); // displays 11 21
    return 0;
}
