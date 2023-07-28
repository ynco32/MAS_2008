//
//  main.c
//  assignment2
//
//  Created by Yunji Choe on 2020/03/26.
//  Copyright © 2020 Yunji Choe. All rights reserved.
//

#include <stdio.h>

int a = 12;
int b = 24;
int c = 7;
int sum;

int main()
{
    
    printf("사과 %d개\n", a);
    printf("오렌지 %d개\n",b);
    printf("배 %d개\n\n",c);
    
    sum=a+b+c;
    printf("총 과일 개수 %d개\n", sum);
    
    
    return 0;
    
}
