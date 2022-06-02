/* Program to Overloading Binary addition using friend Function */

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
    friend loc operator++(loc &op);
    friend loc operator--(loc &op);
};
// Now a friend; use a reference parameter.
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
    loc ob1, ob2(10, 20);
    cout<<"Object 1 Before increment \n";
    ob1.show();
    ++ob1;
    cout<<"Object 1 After increment \n";
    ob1.show(); // displays 11 21
    cout<<"Object 2 Before Decrement \n";
    ob2.show(); // displays 12 22
    --ob2;
    cout<<"Object 2 After Decrement \n";
    ob2.show(); // displays 11 21
    return 0;
}
