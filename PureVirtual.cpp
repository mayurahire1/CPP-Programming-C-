#include<iostream>
using namespace std;

class Base
{
    public: 
        int i,j;

        int Add(int a,int b)
        {
            return a+b;
        }
        
        virtual int sub(int a,int b) = 0;
};

class Derived: public Base
{
    public:
        int x,y;

        int mult(int a,int b)
        {
            return a*b;
        }

        int sub(int a,int b)
        {
            return a-b;
        }
};

int main()
{
    Base *bp = new Derived();

    cout << "Additon is: " << bp->Add(11,10) << "\n";
    cout << "Subtraction is: " << bp->sub(11,10) << "\n";
    // cout << "Multiplication is: " << bp->mult(11,10);    //Error


    return 0;
}