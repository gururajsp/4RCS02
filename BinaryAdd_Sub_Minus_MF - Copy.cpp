/* Program to Overloading Binary addition,subtraction and unary minus using Member Function */

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
    loc operator-(loc op2);
    loc operator++();
    loc operator+(loc op2);
};
// Overload + for loc (Binary operator)
loc loc::operator+(loc op2)
{
    loc temp;
    temp.longitude = op2.longitude + longitude;
    temp.latitude = op2.latitude + latitude;
    return temp;
}
// Overload - for loc  (Binary operator)
loc loc::operator-(loc op2)
{
    loc temp;
    // notice order of operands
    temp.longitude = longitude - op2.longitude;
    temp.latitude = latitude - op2.latitude;
    return temp;
}
// Overload prefix ++ for loc.
loc loc::operator++()
{
    longitude++;
    latitude++;
    return *this;  // Return object value.
}
int main()
{
        loc ob1(10, 20), ob2( 5, 30), ob3(90, 90);
        loc ob4,ob5;
         cout<<"Object 1 \n";
        ob1.show();
        cout<<"Object 2 \n";
        ob2.show();
        ++ob1;
        cout<<"\nObject 1 After increment operator ++ \n";
        ob1.show(); // displays 11 21
        ob4 = ob1 + ob2;
        cout<<"After Overloading  + operator \n";
        ob4.show(); // displays 15 50
        ob5 = ob4 - ob1;
        cout<<"After Overloading  - operator \n";
        ob5.show(); // displays 15 50
        return 0;
}
