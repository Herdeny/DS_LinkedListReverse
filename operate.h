#ifndef DS_LINKEDLISTREVERSE_OPERATE_H
#define DS_LINKEDLISTREVERSE_OPERATE_H

#include <cstdlib>
#include <cstdio>

//���嵥����Ĵ洢�ṹ
typedef struct LNode {
    int data;
    struct LNode *next;
} LNode, *LinkList;

//�½�������
void ListCreate(LinkList &L);
//�������������Ľ��ֵ
void ListPrint(LinkList L);
//�͵ط�ת
void ListReverse(LinkList &L);
//�ݻٵ�����
void ListDestroy(LinkList &L);

#endif
