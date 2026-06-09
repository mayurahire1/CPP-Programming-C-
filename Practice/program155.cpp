#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int x)
        {

        }
};

int main()
{
   ArrayX aobj;     // Error : no defaul contructor

   cout << sizeof(aobj) << endl;        // 12

    return 0;
}