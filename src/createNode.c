#include <stdlib.h>
#include "../include/node.h"

Node* createNode(int val){
  Node *n = (Node *) malloc(sizeof(Node));
  n -> value = val;

  return n;
}
