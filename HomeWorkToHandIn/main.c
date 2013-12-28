//
//  main.c
//  HomeWorkToHandIn
//
//  Created by 孙培峰 on 1312/28/.
//  Copyright (c) 2013 孙培峰. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "ListConversing.h"
#include "CheckingPalindroming.h"

int main(int argc, const char * argv[])
{
    void checkingPalindroming(char str[]);

    LNode* head = initOneWayListWithLength(8);
    LNode* head_reversed;
    
    printf("The link list data is:\n");
    
    LinkList_print(head);
    
    head_reversed = LinkList_reverse(head);
    
    printf("After reversed,the link list data is:\n");
    
    LinkList_print(head_reversed);
    
    char str1[] = "ABCDEDCBA";
    char str2[] = "ssaa";
    char str3[] = "ssdaa";
    
    
    checkingPalindroming(str1);
    checkingPalindroming(str2);
    checkingPalindroming(str3);

    return 0;
}

