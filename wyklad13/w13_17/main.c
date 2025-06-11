#include <stdio.h>
#include <stdlib.h>

struct element{
    int i;
    struct element * next;
};

void printListWithHead(struct element * list){
    if (list->next == NULL){
        printf("Empty list\n---\n");
        return;
    }
    struct element * ptr = list->next;
    while(ptr != NULL){
        printf("%d\n", ptr->i);
        ptr = ptr->next;
    }
    printf("---\n");
}

int main()
{
    // lista z glowa
    // pusta
    struct element * list1 = malloc(sizeof(struct element));
    list1->next = NULL;
    //lista jednoelementowa
    struct element * list2 = malloc(sizeof(struct element));
    list2->next = malloc(sizeof(struct element));
    list2->next->i = 5;
    list2->next->next = NULL;
    //lista o trzech elementach 5,-4,9
    struct element * list3 = malloc(sizeof(struct element));
    list3->next = malloc(sizeof(struct element));
    list3->next->i = 5;
    list3->next->next = malloc(sizeof(struct element));
    list3->next->next->i = -4;
    list3->next->next->next = malloc(sizeof(struct element));
    list3->next->next->next->i = 9;
    list3->next->next->next->next = NULL;

    printListWithHead(list1);
    printListWithHead(list2);
    printListWithHead(list3);
    return 0;
}
