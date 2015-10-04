#ifndef MySet_Class
#define MySet_Class
class MySet
{
private:
    int size;
    int *array;
    int numOfElements;
public:
    MySet();
    MySet(int x);
    MySet(const MySet&);
    bool isEmpty();
    int search(int );
    void insert(int);
    void remove(int);
    void print();

    //MySet& operator =(const MySet &ob);
    MySet& operator =(const MySet &ob);
    friend MySet operator +(const MySet ob,int i);
    friend  MySet operator -(const MySet ob);
    //add your operator overloading functions' declaration here
};
#endif
