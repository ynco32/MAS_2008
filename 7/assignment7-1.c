//
//  main.c
//  assignment7-1
//
//  Copyright © 2020 Yunji Choe. All rights reserved.
//

#include <stdio.h>
enum months { JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};

int main() {
    enum months month;
    char* monthName[12] = {"January", "Feburary", "March", "April", "May", "June","July", "August", "September", "October", "November", "December"};
    
    for (month = JAN; month < 12; month++){
        printf("%2d %11s\n", month+1, monthName[month]);
    }
    
    return 0;
}


    
    
