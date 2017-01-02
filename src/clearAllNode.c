#include <stdlib.h>
#include "../include/node.h"

void clearAllNode(Node *head){
  while(head -> next != NULL){
    Node *before = head;
    head = head -> next;
    free(before);
  }

  free(head);
}
