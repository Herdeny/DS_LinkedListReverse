#include "operate.h"

int main() {
    LinkList List;
    //��������
    ListCreate(List);
    printf("INITIAL_linked_list: ");
    ListPrint(List);
    //��ת����
    ListReverse(List);
    printf("\nREVERSED_linked_list: ");
    ListPrint(List);
    //�ݻ�����
    ListDestroy(List);
    printf("\nDESTROYED_linked_list: ");
    ListPrint(List);
    return 0;
}
