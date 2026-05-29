#include<iostream>
using namespace std;

class  Base                     // 8bytes
{
    public :
        int i,j;

        void fun()              // 1000
        {  cout<<"Inside base fun\n";  }

        virtual void gun()      // 2000
        {  cout<<"Inside base gun\n";  }

        virtual void sun()      // 3000
        {  cout<<"Inside base sun\n";  }
};

class Derived : public Base     // 16 bytes
{
    public :
        int x,y;

        void fun()              // 4000
        {  cout<<"Inside derived fun\n";  }

        void sun()              // 5000
        {  cout<<"Inside derived sun\n";  }

        virtual void run()      // 6000
        {  cout<<"Inside derived run\n";  }
};

int main()
{
    Base *bp = new Derived();       // Upcatsing
    
    bp->fun();      // Base fun
    bp->gun();      // Base gun
    bp->sun();      // Derived sun
    // bp->run();      // Error

    return 0;
}