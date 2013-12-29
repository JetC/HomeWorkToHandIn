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
    /**
     *  以下开始逆置链表
     */

    LNode* head = initOneWayListWithLength(8);
    LNode* headReversed;
    
    printf("The link list data is:\n");
    
    LinkListPrint(head);
    
    headReversed = LinkListReverse(head);

    printf("\n");
    printf("After reversed,the link list data is:\n");
    LinkListPrint(headReversed);
    printf("\n");

    
    /**
     *  以下开始检验回文
     */
    void checkingPalindroming(char str[]);

    char str1[] = "ABCDEDCBA";
    char str2[] = "ssaa";
    char str3[] = "ssdaa";
    
    
    checkingPalindroming(str1);
    checkingPalindroming(str2);
    checkingPalindroming(str3);

    return 0;
}

