#include <stdio.h>

struct cmd {
    int a;
    struct cmd * next;
};

struct cmd * merge_sort(struct cmd *, struct cmd *);

int main(void)
{
    struct cmd * head1;
    struct cmd cmd1;
    struct cmd cmd2;
    struct cmd cmd3;
    cmd1.a = 10;
    cmd2.a = 33;
    cmd3.a = 22;

    head1 = &cmd1;
    cmd1.next = &cmd2;
    cmd2.next = &cmd3;
    cmd3.next = NULL;
    // head -> cmd1(16) -> cmd2(22) -> cmd3(33) -> NULL
    
    struct cmd * head2;
    struct cmd cmd4;
    struct cmd cmd5;
    cmd4.a = 11;
    cmd5.a = 9;

    head2 = &cmd4;
    cmd4.next = &cmd5;
    cmd5.next = NULL;
    // head -> cmd4(11) -> cmd5(27) -> NULL

    struct cmd * new_head;
    new_head = merge_sort( head1, head2 );

    int index = 0;
    while ( new_head ) {
        printf("[list] index %d : %d\n", index++, new_head->a );
        new_head = new_head->next;
    }

    return 0;
}

struct cmd * merge_sort(struct cmd * list1, struct cmd * list2)
{
    struct cmd * head;
    struct cmd ** indirect = &head;

    for (; list1 && list2; indirect = &(*indirect)->next) {
        if (list1->a < list2->a) {
            *indirect = list1;
            list1 = list1->next;
        } else {
            *indirect = list2;
            list2 = list2->next;
        }
    }

    *indirect = (struct cmd *)((long)list1 | (long)list2);
    return head;
}