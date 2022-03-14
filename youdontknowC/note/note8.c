#include <stdio.h>

struct cmd {
	int a;
	struct cmd * next;
};

struct cmd * merge_K_lists( struct cmd ** list_ptr, int list_size );
struct cmd * merge_sort(struct cmd * list1, struct cmd * list2);

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

	struct cmd ** k_list;
	k_list = &head1;
	*(k_list + 1) = head2; // @ compiler make sense, so head2 pointer follows head1 pointer; I don't need to assign it again...
	/*
	0x7fffffffde00: 0x0000000000000000           0x00007fffffffde20 (head1)
	0x7fffffffde10: 0x00007fffffffde50 (head2)   0x00007fffffffde08
	*/

	// OK... I have no idea about the compiler; I cannot take head1 pointer + 8 to get head2 pointer...
	// so I enabled the *(k_list + 1) = head2 to force write address on the +8 memory 
	/*
	0x7fffffffde00: 0x00007fffffffde20 (head1)      0x0000000000000000 <- force write address here
	0x7fffffffde10: 0x00007fffffffde50 (head2)      0x00007fffffffde00

	[list] index 0 : 10
	[list] index 1 : 11
	[list] index 2 : 9
	[list] index 3 : 33
	[list] index 4 : 22
	*/
	
	struct cmd * new_ptr;
	new_ptr = merge_K_lists( k_list, 2 );

	int index = 0;

	while ( new_ptr ) {
	    printf("[list] index %d : %d\n", index++, new_ptr->a);
	    new_ptr = new_ptr->next;
	}

	return 0;
}

struct cmd * merge_K_lists( struct cmd ** list_ptr, int list_size )
{
	if (list_size == 0) return NULL;
	while (list_size > 1) {
		for (int i=0, j=list_size-1; i<j; i++, j--) {
			*(list_ptr + i) = merge_sort( *(list_ptr + i), *(list_ptr + j) );
		}
		list_size = (list_size + 1) / 2;
		// 因為奇數條的list 會有一條merge不到, 所以+1 讓listsize多一個去放這條;
		// 而偶數不會因為+1 而影響listsize
	}
	return *(list_ptr + 0);
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