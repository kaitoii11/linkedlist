#include <stdlib.h>
#include "../include/node.h"

int countNode(Node *node){
  int i = 0;
  while(node -> next != NULL){
    node = node -> next;
    i++;
  }

  return ++i;
}
