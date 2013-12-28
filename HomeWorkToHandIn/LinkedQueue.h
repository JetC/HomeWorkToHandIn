//
//  LinkedQueue.h
//  queueArrordingToTextBook
//
//  Created by 孙培峰 on 1312/16/.
//  Copyright (c) 2013 孙培峰. All rights reserved.
//

#ifndef queueArrordingToTextBook_LinkedQueue_h
#define queueArrordingToTextBook_LinkedQueue_h
#endif

#include "SeqStack.h"


typedef struct queueNode{
    struct LNode *front;
    struct LNode *rear;
}queueNode;

void queueInitiate(queueNode *q)
{
    q->rear = NULL;
    q->front = NULL;
}

int isQueueNotEmpty(queueNode q)
{
    if (q.front == NULL)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int queueAppend(queueNode *q, dataType x)
{
    LNode *p;
    if ((p = (LNode *)malloc(sizeof(LNode))) == NULL)
    {
        printf("Not enough Mem!");
        return 0;
    }
    
    p->data = x;
    p->next = NULL;
    
    if (q->rear != NULL)
    {
        q->rear->next = p;
    }
    
    q->rear = p;
    if (q->front == NULL)
    {
        q->front = p;
    }
    return 1;
}

int queueDelete(queueNode *q, dataType *d)
{
    if (q->front == NULL)
    {
        printf("No Element!");
        return 0;
    }
    else
    {
        *d = q->front->data;
        q->front = q->front->next;
        if (q->front == NULL)
        {
            q->rear = NULL;
        }
        return 1;
    }
}

int queueGetFirstElement(queueNode q, dataType *d)
{
    if (q.front == NULL)
    {
        printf("Empty!");
        return 0;
    }
    else
    {
        *d = q.front->data;
        return 1;
    }
}

void destroy(queueNode q)
{
    LNode *p, *p1;
    p = q.front;
    while (p != NULL)
    {
        p1 = p;
        p = p->next;
        free(p1);
        
    }
}






















