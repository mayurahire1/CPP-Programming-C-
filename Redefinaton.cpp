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
    Base *bp = NULL;

    bp = new Derived();     // upcasting

    bp -> fun();        // Base fun
    bp -> gun();        // Base gun
    bp -> sun();        // Base sun
    // bp -> run();        // Error
    
    return 0;
}