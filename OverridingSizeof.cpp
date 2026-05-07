#include<iostream>
using namespace std;

class Base
{
    public: 
        int i,j;

        void fun()
        {   cout<< "Inside Base fun\n";  }
        
        void gun()
        {   cout<< "Inside Base gun\n";  }

        void sun()
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
        
        void run()          
        {   cout << "Inside Derived run\n";    }
}; // 16-byte

int main()
{
    cout << sizeof(Base) << "\n";       // 8-byte
    cout << sizeof(Derived) << "\n";    // 16-byte

    return 0;
}