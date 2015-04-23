#include <iostream>
#include "Point.h"

using namespace std;

int main()
{
    Point p1(1,2);
    Point p2(4,5);
    Point p3;

    p3=p1+p2;
    p3.print();

    Point p4 = p1.operator+(p2);
    p4.print();

    Point p5 = p1 + p2 + p3 + p4;
    p5.print();
}
