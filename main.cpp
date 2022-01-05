#include <iostream>
#include "first.hpp"
#include "second.hpp"

first objFirst;
second objSecond;

int main(){
    std::cout << "Hello World" << std::endl;
    objFirst.printFunc();
    objSecond.printFunc();
    return 0;
}