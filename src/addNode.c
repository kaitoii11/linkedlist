#include <stdlib.h>
#include "../include/node.h"
#include "../include/linkedlist.h"

Node* addNode(Node *node, int val){
  while(node -> next != NULL){
    node = node -> next;
  }
  Node *n = createNode(val);
  node -> next = n;

  return n;
}
