//
//  main.cpp
//  assign8-2.cpp
//
//  Copyright © 2020 Yunji Choe. All rights reserved.
//

#include <iostream>
#include "assign8-2.h"


int main(int argc, const char * argv[]) {
    IntArray powersOf2;
    IntArray *ppow = &powersOf2;
    
    powersOf2.init();
    
    ppow->setSize(8);
    
    ppow->setElem(0, 1);
    ppow->setElem(1, 2 * ppow->getElem(0));
    ppow->setElem(2, 2 * ppow->getElem(1));
    ppow->setElem(3, 2 * ppow->getElem(2));
    ppow->setElem(4, 2 * ppow->getElem(3));
    ppow->setElem(5, 2 * ppow->getElem(4));
    ppow->setElem(6, 2 * ppow->getElem(5));
    ppow->setElem(7, 2 * ppow->getElem(6));
    
    std::cout << "IntArray is = " <<
    
    ppow->getElem(0) << ppow->getElem(1) <<
    ppow->getElem(2) << ppow->getElem(3) <<
    ppow->getElem(4) << ppow->getElem(5) <<
    ppow->getElem(6) << ppow->getElem(7) << std::endl;
    
    powersOf2.cleanup();
    return 0;
}
