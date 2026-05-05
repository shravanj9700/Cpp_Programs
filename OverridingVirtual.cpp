#include<iostream>
using namespace std;

class  Base                     // 8bytes
{
    public :
        int i,j;

        void fun()
        {  cout<<"Inside base fun\n";  }

        virtual void gun()
        {  cout<<"Inside base gun\n";  }

        virtual void sun()
        {  cout<<"Inside base sun\n";  }
};

class Derived : public Base     // 16 bytes
{
    public :
        int x,y;

        void fun()              // Redefinition
        {  cout<<"Inside derived fun\n";  }

        void sun()              // Redefinition
        {  cout<<"Inside derived sun\n";  }

        virtual void run()              // Definition
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