#include <iostream>
using namespace std;
int main()
{
    int p, r, t;
    cout << endl;
    cout << "                  Calculate simple interest " << endl;
    cout << endl;
    cout << "enter priciple amount   ";
    cin >> p;
    cout << "Enter annual interest   ";
    cin >> r;
    cout << "Enter time in year      ";
    cin >> t;
    cout << "The simple interst is...." << (p * r * t) / 100 << endl;
    cout << endl;
    cout << "                   Check is it Valid triangle " << endl;
    cout << endl;
    int a, b, c;
    cout << "Enter sides of a triangle......" << endl;
    cin >> a >> b >> c;
    if ((a + b > c) && (b + c > a) && (c + a > b))
    {
        cout << "yes... it is a valid triangle" << endl;
    }
    else
    {
        cout << "No... it is not a valid triangle" << endl;
    }
    cout << endl;
    return 0;
}