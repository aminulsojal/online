//%~!@#$%^&*()
//-*- coding: utf-8 -*-
//__author__ = 'tanvir'

#include <iostream>
#include "MyPoint.cpp"

using namespace std;

int main(void)
{
    MyPoint zero;
    zero.print();
    cout<<zero.isZero()<<endl;
    
    MyPoint p1(5, 3);
    p1.print();
    
    MyPoint p2(2, 7);
    p2.print();
    
    MyPoint sum = p1 + p2;
    sum.print();
    
    MyPoint diff1 = p1 - p2;
    diff1.print();
    
    MyPoint diff2 = p2 - p1;
    diff2.print();
    
    float distance = getDistance(p1, p2);
    cout << distance << endl;
    return 0;
}
