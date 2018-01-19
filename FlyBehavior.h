#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;
using std::endl;

class FlyBehavior
{
    public:
        virtual void fly(){};  //virtual function, different from pure virtual function.
};

class FlyWithWings : public FlyBehavior
{
    public:
        void fly()
        {
            cout << "I'm flying!" << endl;
        }
};

class FlyNoWay : public FlyBehavior
{
    public:
        void fly()
        {
            cout << "I can't fly!" << endl;
        }
};




