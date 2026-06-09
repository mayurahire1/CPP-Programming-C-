#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    public:
        int *Arr;
        int iSize;

        // Parametrised Constructor
        ArrayX(int x)
        {
            cout << "Inside constructor\n";
            iSize = x;                      // Character initialization
            Arr = new int[iSize];           // Resourse Allocation
        }

        // Destructor
        ~ArrayX()
        {
            cout << "Inside destructor\n";
            delete[] Arr;                   // Resourse Deallocation
        }
};

int main()
{
    ArrayX aobj1(5);

    return 0;
}