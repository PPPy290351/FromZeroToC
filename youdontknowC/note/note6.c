#include <stdio.h>

struct cmd {
    int a;
    struct cmd * next;
};

int main(void)
{
    struct cmd * head;
    struct cmd cmd1;
    struct cmd cmd2;
    struct cmd cmd3;
    cmd1.a = 10;
    cmd2.a = 20;
    cmd3.a = 30;

    head = &cmd1;
    cmd1.next = &cmd2;
    cmd2.next = &cmd3;
    cmd3.next = NULL;
    // head -> cmd1 -> cmd2 -> cmd3 -> NULL
    
    struct cmd ** l2ptr;
    l2ptr = &head;
    //  head -> cmd1 -> cmd2 -> cmd3
    //   |
    // l2ptr
    
    printf("cmd1 a by pointer: %d\n", (*l2ptr)->a);
    printf("cmd1 a by structure: %d\n", (**l2ptr).a);

    struct cmd * target = &cmd2; // ready to remove
    
    while ( *l2ptr ) {
        printf("list %d\n", (*l2ptr)->a);
        l2ptr = &(*l2ptr)->next;
    }

    /* remove process */
    l2ptr = &head;
    while ( *l2ptr != target ) {
        printf("list %d, not me \n", (*l2ptr)->a);
        l2ptr = &(*l2ptr)->next;
    }
    *l2ptr = target->next;

    l2ptr = &head;
    while ( *l2ptr ) {
        printf("list %d\n", (*l2ptr)->a);
        l2ptr = &(*l2ptr)->next;
    }

    return 0;
}
/* list 20 : deleted...
Output:
list 10
list 20
list 30
list 10, not me 
list 10
list 30
*/