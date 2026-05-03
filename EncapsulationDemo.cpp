#include<iostream>
using namespace std;

//Encapsulation
class Marvellous
{  
    // Access Specifier
    public:
        int No1,No2; // Characteristics 

    void fun()      //Behavior
    {
        cout << "Inside Fun \n"; 
    }

    void gun()  //Behavior
    {
        cout << "Inside gun \n";
    }
};

int main()
{
    // Object Creation (Instance)
    Marvellous mobj1;
    Marvellous mobj2;

    cout << sizeof(mobj1)<<"\n"; //8

    cout << mobj1.No1 <<"\n";
    
    mobj1.fun();
    mobj2.fun();

    mobj1.gun();

    return 0;
}