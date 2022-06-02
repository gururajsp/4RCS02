//Overloading Unary ++ and Assignment (=) operator
#include <iostream>
using namespace std;
class loc
{
        int longitude, latitude;
    public:
        loc() {} // needed to construct temp
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
    loc operator=(loc op2);
    loc operator++();
};
loc loc::operator=(loc op2)
{
    longitude = op2.longitude;
    latitude = op2.latitude;
    return *this; // i.e., return object that generated call
}
// Overload ++ for loc.
loc loc::operator++()
{
    longitude++;
    latitude++;
    return *this;
}
int main()
{
loc ob1(10, 20), ob2( 5, 30);
 ++ob1;
ob2 = ob1;
ob1.show();
ob2.show();

return 0;
}

