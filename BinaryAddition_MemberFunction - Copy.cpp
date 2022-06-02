/* Program to Overloading Binary addition using Member Function */

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
    loc operator+(loc op2);
};
// Overload + for loc.
loc loc::operator+(loc op2)
{
    loc temp;
    temp.longitude = op2.longitude + longitude;
    temp.latitude = op2.latitude + latitude;
    return temp;
}
int main()
{
        loc ob3;;
        loc ob1(10, 20), ob2( 5, 30);
        cout<<"Object 1 \n";
        ob1.show(); // displays 10 20
        cout<<"Object 2 \n";
        ob2.show(); // displays 5 30
        ob3 = ob1 + ob2;
        cout<<"After Overloading  + operator \n";
        ob3.show(); // displays 15 50

        (ob1+ob2).show();  // Overloading + operator

        return 0;
}
