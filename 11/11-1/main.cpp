//
//  main.cpp
//  assign11
//
//  Created by Yunji Choe on 2020/06/03.
//  Copyright © 2020 Yunji Choe. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <string>
#include "assign11-1.h"

int main(int argc, const char * argv[]) {
    Polynomial pol(2);
    pol.set(0, 5);
    pol.set(1, 2);
    pol.set(2, 2);
    
    Polynomial ppo(3);
    
    ppo = pol;
    std::cout<< "A2 is" << pol.get(2) <<std::endl;
    std::cout<< "Degree is " << pol.degree() <<std::endl;
    std::cout<< "Result is " << pol.evaluate(2) <<std::endl;
    ppo.print(&std::cout);
}
