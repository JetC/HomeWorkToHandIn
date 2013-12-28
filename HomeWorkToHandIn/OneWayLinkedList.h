//
//  OneWayLinkedList.h
//  DataStructureTest1
//
//  Created by 孙培峰 on 1312/16/.
//  Copyright (c) 2013 孙培峰. All rights reserved.
//

#ifndef DataStructureTest1_OneWayLinkedList_h
#define DataStructureTest1_OneWayLinkedList_h



#endif
typedef struct LNode{
    int data;
    struct LNode *next;
}LNode, *OneWaylinkList;//LNode只是对此类的代称,linkList才是可方便地用做程序中的

long timesPrintfCalled;


OneWaylinkList initOneWayListWithLength(int lengthOfTheCreatingList)
{
    OneWaylinkList p = NULL, r = NULL, list = NULL;//p和r和list各是一个结构体
    //p负责建立新节点,r负责临时存储
    
    list = (OneWaylinkList)malloc(sizeof(LNode));
    
    
    for (int i = 1; i <= lengthOfTheCreatingList; i++)
    {
        
        p = (OneWaylinkList)malloc(sizeof(LNode));//每次循环都为p新分配一个空间,不再影响已被引用过的链表元素位置
        
        p->data = i;//指定p内的内容
        
        
        if ( i == 1 )
        {
            
            list = p;//这里是指针(地址)传递!两处指向的地址是一致的!
            
            //在第一次循环中,list的next被指向了刚创建的数据p的位置,在此语句完成赋值
        }
        
        else
        {
            
            r->next = p;//指针传递!两处指向的地址是一致的!
            
            //第二次循环中,r的next被指向了刚创建的数据p的位置,同时指定了list->next->next的地址,即在此处完成赋值
            //每次循环中p都是新的,即是在第二次循环中,本语句指出了list->next->next的位置
        }
        
        r = p;	//p的地址传给r,r中含有本次循环赋来的数据,第一次循环时即为list->next的地址传入了r中
        //上条else语句中p的地址给了r->next,本句中把p的地址给了r而不是它的子节点,相当于把r向下一个节点推进了(待修正)
    }
    return list;
    
    free(p);
    free(r);
    free(list);
}

void printLinkedList(OneWaylinkList listToBePrinted)
{
    OneWaylinkList p = NULL;
    
    while (listToBePrinted->next)
    {
        
        printf("One Way : %i\n",listToBePrinted->data);
        timesPrintfCalled++;
        //p = (OneWaylinkList)malloc(sizeof(LNode));
        p = listToBePrinted->next;
        listToBePrinted = p;
        
    }
    listToBePrinted->next = NULL;
    printf("One Way : %i\n",listToBePrinted->data);
    timesPrintfCalled++;
    
    
    free(p);
}

