#include <iostream>
#include <string>
#include "FlyBehavior.h"
#include "QuackBehavior.h"

using std::cin;
using std::cout;
using std::string;
using std::endl;

class Duck
{
    public:
        void performQuack()
        {
            quackBehave->quack();
        }
        void performFly()
        {
            flyBehave->fly();
        }
        void swim()
        {
            cout << "All ducks float, even decoys!" << endl;
        }
        virtual void display()
        {
            cout << "I am a Duck!" << endl;
        }
    protected:
        FlyBehavior* flyBehave;
        QuackBehavior* quackBehave;
};

class MallardDuck : public Duck
{
    public:
        MallardDuck();
        void display()
        {
            cout << "I'm a real Mallard duck!" << endl;
        }
};

MallardDuck::MallardDuck()
{
    quackBehave = new Quack();
    flyBehave = new FlyWithWings();
}
