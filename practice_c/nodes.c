#include <stdio.h>
#include <stdlib.h>
/* Defining the structure for a node */
typedef struct Node {
	int data;
	struct Node* next;
}jack;

int access_node_at_position(jack* head, int position)
{
	int current_position = 0;
	/* Traverse the list until the desired position */
	while (head != NULL && current_position < position) {
		head = head->next;
		current_position++;
	}

	/* if position is valid,return the data; otherwise, return an error value */
	if (head != NULL) {
		return head->data;
	} else {
		return -1;
		/* -1 indicates an error */
	}
}
