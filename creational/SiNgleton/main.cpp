#include <iostream>

#include "singleton.h"

int main()
{
    std::cout << "Hello Singleton Pattern!" << std::endl;
    Singleton* inst1 = Singleton::getInstance();
    Singleton* inst2 = Singleton::getInstance();

    if(inst1 == inst2){
        std::cout<<"sucess"<<std::endl;
    }
    return 0;
}

