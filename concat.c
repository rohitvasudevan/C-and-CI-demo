//
//  main.c
//  concatenation
//
//  Created by Rohit Vasudevan on 5/26/20.
//  Copyright © 2020 Rohit Vasudevan. All rights reserved.
//

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    char str1[MAX_SIZE], str2[MAX_SIZE];
    int i, j;
    
    printf("\nEnter the first string: ");
    gets(str1);
    printf("\nEnter the second string: ");
    gets(str2);
    
    i = 0;
    while(str1[i] != '\0')
    {
        i++;
    }
    
    j = 0;
    while(str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }
    
    str1[i] = '\0';
    
    printf("\nConcatenated string is: %s", str1);
    
    return 0;
}
