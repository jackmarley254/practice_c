#include <stdio.h>
#include <stdlib.h>
#include "nodes.h"
/*
   */
int main (void)
{
	jack* head = malloc(sizeof(jack));
	head->data = 10;

	jack* second = malloc(sizeof(jack));
	second->data = 20;

	jack* third = malloc(sizeof(jack));
	third->data = 30;
	/* linking the nodes together */
	head->next = second;
	second->next = third;
	third->next = NULL;

	/* accessing nodes at specific positions */
	int element1 = access_node_at_position(head, 0);
	int element2 = access_node_at_position(head, 1);
	int element3 = access_node_at_position(head, 2);
	int element4 = access_node_at_position(head, 3);
/* printing the results */
	printf("Element at position 0: %d\n", element1);
	printf("Element at position 1: %d\n", element2);
	printf("Element at position 2: %d\n", element3);
	printf("Element at position 3: %d\n", element4);
	/* Free memory */
	free(third);
	free(second);
	free(head);

	return 0;
}
