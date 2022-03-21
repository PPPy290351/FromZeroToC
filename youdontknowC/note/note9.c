#include <stdio.h>
#include <linux/kernel.h>
#include <list.h>

#define PRINT_LINE() printf("---------------------------\n")

#define LIST_FOR_EACH_MACRO 1

struct my_list_head {
	struct my_list_head * prev;
	struct my_list_head * next;
};

struct cmd {
	int a;
	struct my_list_head list;
};

void init_list_head(struct my_list_head * head);
void my_list_add_tail(struct my_list_head * node, struct my_list_head * head);
void my_show_list(struct my_list_head * head);

int main(void)
{
	struct my_list_head head_node;
	// head pointer
	struct my_list_head * head;
	head = &head_node;
	// cmd structure
	struct cmd cmd1;
	struct cmd cmd2;
	struct cmd cmd3;
	// Expected : [head ptr] -> cmd1 -> cmd2 -> cmd3

	init_list_head( head );

	cmd1.a = 10;
	my_list_add_tail( &cmd1.list, head );
	my_show_list( head );
	PRINT_LINE();
	cmd2.a = 33;
	my_list_add_tail( &cmd2.list, head );
	my_show_list( head );
	PRINT_LINE();
	cmd3.a = 22;
	my_list_add_tail( &cmd3.list, head );
	my_show_list( head );
	PRINT_LINE();


	return 0;
}

void init_list_head(struct my_list_head * head)
{
	/* Let prev/next pointer pointing to itself */
	head->prev = head;
	//     - head - 		<- head_node : TYPE(list_head)
	//  prev      next
	head->next = head;
}

void my_list_add_tail(struct my_list_head * node, struct my_list_head * head)
{
	/**
	 * @add_tail
	 * 
	 * Each node will add by [left/previous] of head
	 * it means "head->prev = new_node"
	 */
	struct my_list_head * prev = head->prev;

	prev->next = node; // @ [head->prev]->next
	node->next = head;
	node->prev = prev; // @ because new_node is "[head->prev]->next"
	head->prev = node;
}	

void my_show_list(struct my_list_head * head)
{
#if LIST_FOR_EACH_MACRO
	struct my_list_head * iterator;
	struct cmd * cmd_result;
	printf("=== LIST_FOR_EACH : %d ===\n", LIST_FOR_EACH_MACRO);
	list_for_each( iterator, head ) {
		cmd_result = list_entry( iterator, struct cmd, list );
		printf("[List] a : %d\n", cmd_result->a);
	}
#else
	struct my_list_head * iterator;
	struct cmd * cmd_result;
	printf("=== LIST_FOR_EACH : %d ===\n", LIST_FOR_EACH_MACRO);
	for (iterator=head->next; iterator != head; iterator=iterator->next) {
		// cmd_result = container_of( iterator, struct cmd, list );
		/* container_of == list_entry */
		cmd_result = list_entry( iterator, struct cmd, list );
		printf("[List] a : %d\n", cmd_result->a);
	}
#endif
}
