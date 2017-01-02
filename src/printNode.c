#include <stdio.h>
#include <stdlib.h>
#include "../include/node.h"

void printNode(Node *head){
  while(head != NULL){
    printf("%d ", head -> value);
    head = head -> next;
  }
  printf("\n");
}
