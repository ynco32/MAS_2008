//
//  main.cpp
//  assign10
//
//  Copyright © 2020 Yunji Choe. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <string>
#include "assign10.h"

int main() {
    Polynomial pol(2);
    pol.set(0, 5);
    pol.set(1, 2);
    pol.set(2, 2);
    
    
    std::cout<< "A2 is" << pol.get(2) <<std::endl;
    std::cout<< "Degree is " << pol.degree() <<std::endl;
    std::cout<< "Result is " << pol.evaluate(2) <<std::endl;
    
    

    return 0;
}
