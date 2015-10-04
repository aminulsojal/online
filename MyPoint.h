#ifndef MyPoint_Class
#define MyPoint_Class
class MyPoint
{
private:
    int x;
    int y;
public:
    MyPoint();
    MyPoint(int, int);
    MyPoint(const MyPoint&);
    bool isZero();
    void print();
    MyPoint& operator=(const MyPoint&);
    MyPoint operator+(const MyPoint&);
    MyPoint operator-(const MyPoint&);
    friend float getDistance(const MyPoint&, const MyPoint&);
};
#endif
