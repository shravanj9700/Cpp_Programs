class Base
{
    public :
        int i,j;
        int Add(int a, int b)
        {
            return a+b;
        }
        virtual int Sub(int a, int b) = 0;
};

class Derived : public Base
{
    public :
        int x,y;
        int Mult(int a, int b)
        {
            return a*b;
        }
        int Sub(int a, int b)
        {
            return a-b;
        }
};

int main()
{
    

    return 0;
}