#include "operate.h"

//�½�������
void ListCreate(LinkList &L) {
    L = (LinkList) malloc(sizeof(LNode));
    L->next = NULL;
    for (int i = 10; i > 0; --i) {
        LinkList p = (LinkList) malloc(sizeof(LNode));
        p->data = i;
        p->next = L->next;
        L->next = p;
    }
    printf("CREATE_linked_list_OK\n");
}

//�������������Ľ��ֵ
void ListPrint(LinkList L) {
    LinkList p = L;
    if (!p->next) {
        printf("Empty LinkList");
        return;
    }
    do {
        p = p->next;
        printf("%d ", p->data);
    } while (p->next);
}

//�͵ط�ת
void ListReverse(LinkList &L) {
    LinkList p=L,q,t;
    t=(LinkList) malloc(sizeof(LNode));
    t->next=L->next;
    while (p->next!=NULL) p=p->next;
    L->next=p;
    while (t->next!=p){
        q=t->next;
        while (q->next!=p) q=q->next;
        p->next=q;
        p=q;
    }
    p->next=NULL;
    free(t);
    printf("\nREVERSE_linked_list_OK");
}

//�ݻٵ�����
void ListDestroy(LinkList &L) {
    LinkList p = L, q;
    while (p->next) {
        q = p->next;
        p->next = q->next;
    }
    printf("\nDESTROY_linked_list_OK");
}
