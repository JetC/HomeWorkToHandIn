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
    
printf("游老师您好，本程序在Mac OS X 10.9 Xcode下（利用GCC编译器）可以标准C程序成功运行，但由于平台不同不方便生成.exe文件敬请谅解,全部工程文件敬请移步\nhttps://github.com/s773364/HomeWorkToHandIn\n\n");
    printf("The created linked list data is:（Please refer to my homework for more detail）\n");
    
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
    
    printf("字符串1为ABCDEDCBA,字符串2为ssaa，字符串3为ssdaa\n下面对其检查回文：");
    
    checkingPalindroming(str1);
    checkingPalindroming(str2);
    checkingPalindroming(str3);
    
    printf("\n\nPlease refer to my homework for more detail\n\n\n");
    printf("游老师您好，本程序在Mac OS X 10.9 Xcode下（利用GCC编译器）可以标准C程序成功运行，但由于平台不同不方便生成.exe文件敬请谅解,全部工程文件敬请移步\nhttps://github.com/s773364/HomeWorkToHandIn\n\n");
    return 0;
}

