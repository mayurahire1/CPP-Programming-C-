#include<iostream>
using namespace std;

class Base
{
    public: 
        int i,j;

        void fun()
        {   cout<< "Inside Base fun\n";  }
        
        virtual void gun()
        {   cout<< "Inside Base gun\n";  }

        virtual void sun()
        {   cout<< "Inside Base sun\n";  }

};  // 8 byte

class Derived : public Base
{
    public: 
        int x,y;

        void fun()              // Redefination
        {   cout << "Inside Derived fun\n";    }

        void sun()              // Redefination
        {   cout << "Inside Derived sun\n";    }
        
        virtual void  run()          
        {   cout << "Inside Derived run\n";    }
}; // 16-byte

int main()
{
    cout << sizeof(Base) << "\n";       // 8-byte
    cout << sizeof(Derived) << "\n";    // 16-byte

    

    return 0;
}