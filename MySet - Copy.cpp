
#include <iostream>
#include "MySet - Copy.h"

using namespace std;
MySet :: MySet()
{
    size = 100;
    numOfElements = 0;
    array = 0;
}
MySet :: MySet(int sz)
{
    array = new int[sz];
}
void MySet :: print()
{
    int i;
    if(numOfElements == 0)cout << "The set is empty\n";
    else{
        cout << "The set is ";
        for(i = 0; i < numOfElements; i++){
            cout << array[i] << " ";
        }
    }

}
bool MySet :: isEmpty()
{
    if(numOfElements == 0) return true;
    else return false;
}
void MySet :: insert(int i)
{
    array[numOfElements] = i;
    numOfElements++;
}
void MySet :: remove(int i)
{
    int j;
    for(j = 0; j < numOfElements ; j++){
        array[j-1] = array[j];
        numOfElements--;
    }
}
int MySet :: search (int i)
{

}
MySet operator +(const MySet &ob,int i)
{
    MySet temp;
    temp.array[numOfElements] = ob.x + i;
    temp.array[numOfElements] = ob.y + i;
    return temp;
}




//add MySet functions Implementations here


