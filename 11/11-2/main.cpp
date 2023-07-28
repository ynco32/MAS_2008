//
//  main.cpp
//  assign11-2
//
//  Created by Yunji Choe on 2020/06/03.
//  Copyright © 2020 Yunji Choe. All rights reserved.
//

#include <iostream>
#include <string.h>
#include "assign11-2.h"


int main() {
    my_string warning("There is a String");
    my_string standard("");
    
    std::cout << warning <<endl << standard << std::endl;
    standard = warning;
    std::cout << warning << endl << standard << std::endl;
    
    warning = warning + standard;
    cout<<warning<<endl;
    return 0;
}
