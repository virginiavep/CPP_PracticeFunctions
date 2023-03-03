/* This program calculates the distance between two user-given points*/

#include <iostream>
#include <cmath>

using namespace std;

//User-defined data structure that represents a 2D Cartesian coordinate
struct Point
{
    float x;
    float y;
};

//Takes two parameters of Point* type and returns the distance between them
float calculateDistance(Point* a, Point *b)
{
    float X,Y;  //store distance formula total values for the x and y parts
    X = pow((b->x - a->x),2);
    Y = pow((b->y - a->y),2);
    return sqrt(X + Y);
}

int main()
{
    Point a, b;
    cout << "This program calculates the distance between to points" << endl;
    cout << "Please enter the coordinates for the first point (ex: 10.2 12.5)" << endl;
    cin >> a.x >> a.y;
    cout << "Please enter the coordinates for the second point (ex: 15.2 16.5)" << endl;
    cin >> b.x >> b.y;
    cout << "The distance between the two points is:" <<calculateDistance(&a, &b);
    return 0;
}