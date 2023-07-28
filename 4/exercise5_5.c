//
//  exercise5_5.c
//  assignment 4
//
//  Created by Yunji Choe on 2020/04/12.
//  Copyright © 2020 Yunji Choe. All rights reserved.
//
//  Time conversion 1

#include <stdio.h>
int hr, min, total_min;

int main() {
    total_min = 0;
    while (1){
        printf("Enter hours and minutes, or 0 0 to stop: ");
        scanf("%d %d", &hr, &min);
        if (hr == 0 && min ==0)
            break;
        total_min = hr * 60 + min;
        printf("%d hour %d minutes = %d minutes\n\n", hr, min, total_min);
    }
    
           
    return 0;
}
