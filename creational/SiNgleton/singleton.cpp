#include "singleton.h"
#include <iostream>

static Singleton* inst = NULL;

Singleton* Singleton::getInstance()
 {
     if(NULL == inst){
         inst = new Singleton();
     }
     return inst;
 }
Singleton::Singleton()
{

}

