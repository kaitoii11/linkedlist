#include <stdio.h>
#include <stdlib.h>
#include "../include/node.h"

void removeLastNodeWithValue(Node *head, int val){
  Node *tmp, *del;
  while(head -> next != NULL){
    if(head -> next -> value == val){
      tmp = head;
    }
    head = head -> next;
  }

  if(tmp == NULL)
    return;

  del = tmp -> next;
  if(tmp -> next -> next != NULL){
    tmp -> next = tmp -> next -> next;
  } else {
    tmp -> next = 0;
  }
  del -> next = 0;
  free(del);
}
