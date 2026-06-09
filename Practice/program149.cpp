#include<iostream>
using namespace std;

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0;

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

    delete[] Brr;

    return 0;
}