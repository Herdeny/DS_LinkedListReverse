#ifndef DS_LINKEDLISTREVERSE_OPERATE_H
#define DS_LINKEDLISTREVERSE_OPERATE_H

#include <cstdlib>
#include <cstdio>

//定义单链表的存储结构
typedef struct LNode {
    int data;
    struct LNode *next;
} LNode, *LinkList;

//新建单链表
void ListCreate(LinkList &L);
//依次输出单链表的结点值
void ListPrint(LinkList L);
//就地反转
void ListReverse(LinkList &L);
//摧毁单链表
void ListDestroy(LinkList &L);

#endif
