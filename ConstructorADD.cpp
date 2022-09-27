#include <iostream>
using namespace std;
#define pi 3.14
class con
{
public:
    int a, b, c;
    float d;
    con(int x, int y, int z, float w) //parametrised
    {
        a = x;
        b = y;
        c = z;
        d = w;
    }

    int sum()
    {
        return (a + b);
    }
    int cube()
    {
        return c * c * c;
    }
    float area()
    {
        return pi * d * d;
    }

    con(con &copy)
    {
        a = copy.a;
        b = copy.b;
        c = copy.c;
        d = copy.d;
    }
    void display()
    {
        cout << "the sum is=" << sum() << endl;
        cout << "the cube is=" << cube() << endl;
        cout << "the cube is=" << area() << endl;
    }
};

int main()
{
    int a, b, c;
    float d;
    cout << "Enter 2 numbers to add:" << endl;
    cin >> a >> b;
    cout << "Enter number to find cube: " << endl;
    cin >> c;
    cout << "Enter number to find Area of circle: " << endl;
    cin >> d;
    con obj(a, b, c, d);
    con obj2 = obj;
    cout << "Normal constructor : " << endl;
    obj.display();
    cout << "-------------------------------------------------------------------------------" << endl;
    cout << "Copy constructor : " << endl;
    obj2.display();
    // cout << "the sum is=" << obj.sum() << endl;
    // cout << "the cube is=" << obj.cube() << endl;
    // cout << "the cube is=" << obj.area() << endl;
}
