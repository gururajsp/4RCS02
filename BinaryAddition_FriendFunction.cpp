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
    friend loc operator+(loc op1, loc op2);
};
// Overload + for loc.
loc operator+(loc op1, loc op2)
{
    loc temp;
    temp.longitude = op1.longitude + op2.longitude;
    temp.latitude = op1.latitude + op2.latitude;
    return temp;
}

int main()
{
        loc ob1(10, 20), ob2( 5, 30);
        loc ob3;
        cout<<"Object 1 \n";
        ob1.show();
        cout<<"Object 2 \n";
        ob2.show();
        ob3 = ob1 + ob2;
	//ob3 = operator+(ob1,ob2); 
        cout<<"After Overloading  + operator \n";
        ob3.show();
        return 0;
}
