/* Program to Overloading Binary Arithmetic  operators Member Function */
#include <iostream>
using namespace std;
class loc
{
    int longitude, latitude;
    public:
    loc()
    {
        longitude=latitude=0;
    }
    loc(int lg, int lt)
    {
        longitude = lg;
        latitude = lt;
    }
    void show()
    {
        cout << longitude << " ";
        cout << latitude << "\n";
    }

   friend loc operator+(loc op1,loc op2);
    loc operator-(loc op2);
    loc operator*(loc op2);
    loc operator/(loc op2);
};
// Overload + for loc.
loc operator+(loc op1,loc op2)
{
    loc temp;
    temp.longitude = op1.longitude + op2.longitude;
    temp.latitude = op1.latitude + op2.latitude;
    return temp;
}
// Overload - for loc.
loc loc::operator-(loc op2)
{
    loc temp;
    // notice order of operands
    temp.longitude = longitude - op2.longitude;
    temp.latitude = latitude - op2.latitude;
    return temp;
}
loc loc::operator*(loc op2)
{
    loc temp;
    temp.longitude = op2.longitude * longitude;
    temp.latitude = op2.latitude * latitude;
    return temp;
}
// Overload - for loc.
loc loc::operator/(loc op2)
{
    loc temp;
    // notice order of operands
    temp.longitude = longitude / op2.longitude;
    temp.latitude = latitude / op2.latitude;
    return temp;
}

int main()
{
        loc ob1(10, 20), ob2( 5, 30);
        loc ob3,ob4,ob5,ob6;
         cout<<"Object 1 \n";
        ob1.show();
        cout<<"Object 2 \n";
        ob2.show();
        ob1.show(); // displays 11 21
        ob3 = operator+(ob1,ob2);
        //  ob4 = ob1 - ob2;
        (ob1-ob2).show(); // Created the Temporary object
        ob5 = ob1 * ob2;
        ob6 = ob1 / ob2;
        cout<<"After Overloading  + operator \n";
        ob3.show();
        cout<<"After Overloading  - operator \n";
        ob4.show();
        cout<<"After Overloading  * operator \n";
        ob5.show();
        cout<<"After Overloading  / operator \n";
        ob6.show();
        return 0;
}
