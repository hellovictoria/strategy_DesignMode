#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;
using std::endl;

class QuackBehavior
{
    public:
        virtual void quack(){};
};

class Quack : public QuackBehavior
{
    public:
        void quack()
        {
            cout << "Quack" << endl;
        }
};

class MuteQuack : public QuackBehavior
{
    public:
        void quack()
        {
            cout << "silence" << endl;
        }
};

class Squeak : public QuackBehavior
{
    public:
        void quack()
        {
            cout << "squeak" << endl;
        }
};


