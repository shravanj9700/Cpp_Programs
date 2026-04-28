#include<iostream>
using namespace std;

class  Base                     // 8bytes
{
    public :
        int i,j;
};

class Derived : public Base     // 16 bytes
{
    public :
        int x,y;
};

int main()
{
    Base *bp = NULL;
    Derived dobj;

    bp = &dobj;     // Upcatsing

    return 0;
}