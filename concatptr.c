//
//  main.c
//  concatpointers
//
//  Created by Rohit Vasudevan on 5/26/20.
//  Copyright © 2020 Rohit Vasudevan. All rights reserved.
//

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    char str1[MAX_SIZE], str2[MAX_SIZE];
    char *s1 = str1;
    char *s2 = str2;
    
    printf("\nEnter the first string: ");
    gets(str1);
    printf("\nEnter the second string: ");
    gets(str2);
    
    while(*(++s1));
    
    while((*(s1++) = *(s2++)));
    
    printf("\nConcatenated string is: %s", str1);
    
    return 0;
}
