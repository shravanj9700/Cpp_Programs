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

    bp = new Derived();     // Upcatsing

    return 0;
}

//dynamic