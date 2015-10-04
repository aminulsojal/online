//%~!@#$%^&*()
//-*- coding: utf-8 -*-
//__author__ = 'tanvir'

#include <iostream>
#include <cmath>

#include "MyPoint.h"

using namespace std;

MyPoint::MyPoint()
{
    x = 0;
    y = 0;
}
MyPoint::MyPoint(int x, int y)
{
    this->x = x;
    this->y = y;
}
MyPoint::MyPoint(const MyPoint& temp)
{
    x = temp.x;
    y = temp.y;
}
bool MyPoint::isZero()
{
    return (x == 0) && (y == 0);
}
void MyPoint::print()
{
    cout<<"("<<x<<","<<y<<")"<<endl;
}
MyPoint& MyPoint::operator=(const MyPoint& temp)
{
    x = temp.x;
    y = temp.y;
    return *this;
}
MyPoint MyPoint::operator+(const MyPoint& temp)
{
    return MyPoint(x+temp.x, y+temp.y);
}
MyPoint MyPoint::operator-(const MyPoint& temp)
{
    return MyPoint(x-temp.x, y-temp.y);
}
float getDistance(const MyPoint& temp1, const MyPoint& temp2)
{
    return sqrt(((temp1.x - temp2.x)*(temp1.x - temp2.x)) + ((temp1.y - temp2.y)*(temp1.y - temp2.y)));
}
