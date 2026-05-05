#include<iostream>
using namespace std;

class  Base                     // 8bytes
{
    public :
        int i,j;

        void fun()
        {  cout<<"Inside base fun\n";  }

        void gun()
        {  cout<<"Inside base gun\n";  }

        void sun()
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

        void run()              // Definition
        {  cout<<"Inside derived run\n";  }
};

int main()
{
    cout<<sizeof(Base)<<"\n";
    cout<<sizeof(Derived)<<"\n";

    return 0;
}