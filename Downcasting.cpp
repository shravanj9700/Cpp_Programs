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
   Derived *dp = NULL;
   Base bobj;

   dp = &bobj;      // Downcasting

    return 0;
}

// error expeced