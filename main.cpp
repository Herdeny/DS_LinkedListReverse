#include "operate.h"

int main() {
    LinkList List;
    //创建链表
    ListCreate(List);
    printf("INITIAL_linked_list: ");
    ListPrint(List);
    //反转链表
    ListReverse(List);
    printf("\nREVERSED_linked_list: ");
    ListPrint(List);
    //摧毁链表
    ListDestroy(List);
    printf("\nDESTROYED_linked_list: ");
    ListPrint(List);
    return 0;
}
