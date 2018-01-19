#include <iostream>
#include <string>
#include "duck.h"
using std::cin;
using std::cout;
using std::endl;

int main()
{
    MallardDuck mduck;
    mduck.display();
    mduck.performQuack();
    mduck.performFly();
    return 0;
}
