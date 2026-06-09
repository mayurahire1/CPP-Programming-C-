#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int Summation(int Arr[], int iSize)
        {
            int iCnt = 0;
            int iSum = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                iSum = iSum + Arr[iCnt];
            }

            return iSum;
        }
};

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0;
    ArrayX aobj;

    cout << "Enter number of elements: ";
    cin >> iLength;

    Brr = new int[iLength];

    cout << "Enter the elements: \n";
 
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cin >> Brr[iCnt];
    }

    cout << "Array elements are : \n";

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cout << Brr[iCnt] << endl;
    }

    iRet = aobj.Summation(Brr, iLength);        // Error : Summation by default private

    cout << "Summation is : " << iRet ;

    delete[] Brr;

    return 0;
}