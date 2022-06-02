//Overloading Unary ++ and Assignment (=) operator using friend function
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
   friend loc operator++(loc &op);
   friend loc operator--(loc &op);
};
loc operator++(loc &op)
{
    op.longitude++;
    op.latitude++;
    return op;
}
// Make op-- a friend; use reference.
loc operator--(loc &op)
{
    op.longitude--;
    op.latitude--;
    return op;
}
int main()
{
    loc ob1(10, 20), ob2;
    ob1.show();
    ++ob1;
    ob1.show(); // displays 11 21
    ob2 = ++ob1;
    ob2.show(); // displays 12 22
    --ob2;
    ob2.show(); // displays 11 21
    return 0;
}

