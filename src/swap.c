#include <stdlib.h>
#include "../include/node.h"
#include "../include/linkedlist.h"

void swap(Node *head, int num1, int num2){
  if(num1 == num2){
    return ;
  } else if(num1 > num2){
    int tmp = num1;
    num1 = num2;
    num2 = tmp;
  }
  int length = countNode(head);
  if(length <= num2)
    return;
  int i = 0;
  Node *tmp;

  while(head != NULL){
    if(i == num1)
      tmp = head;
    if(i == num2)
      break;
    head = head -> next;
    i++;
  }

  int n = tmp -> value;
  tmp -> value = head -> value;
  head -> value = n;
}
