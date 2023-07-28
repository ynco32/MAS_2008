//
//  main.c
//  assignment3
//
//  Created by Yunji Choe on 2020/04/06.
//  Copyright © 2020 Yunji Choe. All rights reserved.


#include <stdio.h>
// 3개의 char 변수를 name1, name2, name3 를 선언하고 본문에서 각 각 X, Y, Z 란 문자를 assign 한다.
char name1 = 'X';
char name2 = 'Y';
char name3 = 'Z';

int main(){
    printf("name1을 문자로 보면 %c", name1);
    printf("\nname2을 문자로 보면 %c", name2);
    printf("\nname3을 문자로 보면 %c\n\n", name3);
    
    printf("name1을 숫자로 보면 %d", name1);
    printf("\nname2을 숫자로 보면 %d", name2);
    printf("\nname3을 숫자로 보면 %d\n", name3);
         
    return 0;
}
