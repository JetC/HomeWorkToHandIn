//
//  CheckingPalindroming.h
//  DataStructureTest1
//
//  Created by 孙培峰 on 1312/16/.
//  Copyright (c) 2013 孙培峰. All rights reserved.
//

#ifndef DataStructureTest1_CheckingPalindroming_h
#define DataStructureTest1_CheckingPalindroming_h
#endif

#include <string.h>
#include "LinkedQueue.h"


void checkingPalindroming(char str[])
{
    SeqStack mystack;
    queueNode myqueue;
    char x,y;
    int i;
    unsigned long length;
    
    length = strlen(str);
    queueInitiate(&myqueue);
    seqStackInitiate(&mystack);
    
    for (i = 0; i < length; i++)
    {
        queueAppend(&myqueue, str[i]);
        seqStackPush(&mystack, str[i]);
    }
    
    while (isQueueNotEmpty(myqueue) == 1 && isSeqStackNotEmpty(mystack) == 1 )
    {
        if (queueDelete(&myqueue, &x) == 1 && seqStackPop(&mystack, &y) == 1 && x != y )
        {
            printf("Not HuiWen\n");
            return;
        }
    }
    
    if (isQueueNotEmpty(myqueue) || isSeqStackNotEmpty(mystack))
    {
        printf("Not HuiWen\n\n");
    }
    else
    {
        printf("It's HuiWen\n\n");
    }
    
}




















