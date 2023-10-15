#ifndef NODES_H
#define NODES_H

typedef struct Node {
    int data;
    struct Node* next;
} jack;

int access_node_at_position(jack* head, int position);

#endif
