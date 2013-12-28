//
//  ListConversing.h
//  listConversingAccordingToWeb
//
//  Created by 孙培峰 on 1312/16/.
//  Copyright (c) 2013 孙培峰. All rights reserved.
//

#ifndef listConversingAccordingToWeb_ListConversing_h
#define listConversingAccordingToWeb_ListConversing_h
#endif
#define ITEM_NUM 10
#include "OneWayLinkedList.h"



void LinkList_destroy(LNode* head);
void LinkList_print(LNode* head);
LNode* LinkList_reverse(LNode* head);

void LinkList_destroy(LNode* head)
{
    printf("Destroy the link list...\n");
    if(head)
    {
        free(head);
    }
}

void LinkList_print(LNode* head)
{
    if(head == NULL) return;
    
    while(head)
    {
        printf("%d\n",head->data);
        head = head->next;
    }
}

LNode* LinkList_reverse(LNode* head)
{
    LNode *preNode,*curNode,*nextNode;
    
    if(head == NULL) return NULL;//空链表
    
    if(head->next == NULL) return head;//仅一个元素
    
    curNode = head;preNode=NULL;//初始化
    
    while(curNode)
    {
        nextNode = curNode->next;//先记录下一个结点
        curNode->next = preNode;//改变链表方向（逆置）
        preNode = curNode;//将当前结点作为下一次循环的前一个结点
        curNode = nextNode;//向后推移一个结点
    }
    
    return preNode;//当遍历完链表后curNode应该为空，此时preNode就是逆置后链表头(head)
    
}
