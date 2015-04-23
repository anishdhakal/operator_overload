#include<iostream>
#include "Point.h"

using namespace std;

Point::Point()
{
    setX(0);
    setY(0);
}
Point::Point(int x, int y)
{
    setX(x);
    setY(y);
}

void Point::setX(int x)
{
    this->x=x;
}

void Point::setY(int y)
{
    this->y=y;
}

void Point::setXY(int x, int y)
{
    setX(x);
    setY(y);
}

int Point::getX()
{
    return x;
}

int Point::getY()
{
    return y;
}
void Point::print()
{
    cout<<x<<" "<<y<<endl;
}

Point Point::operator+(Point p0)const
{
    return Point(x+p0.getX(),y+p0.getY());
}
