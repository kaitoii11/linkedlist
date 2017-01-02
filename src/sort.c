#include <stdlib.h>
#include "../include/node.h"

void ascendingSort(Node *head){
  int length = countNode(head);
  int *values = (int*) malloc(sizeof(int) * length);
  Node *tmp = head;
  int i =0;
  while(tmp -> next != NULL){
    values[i] = tmp-> value;
    tmp= tmp-> next;
    i++;
  }
  values[length -1] = tmp-> value;
  tmp = head;
  for(i = 0 ; i< length; i++){
    for(int j = i; j < length ; j++){
      if(values[i] > values[j]){
        int t = values[i];
        values[i] = values[j];
        values[j] = t;
      }
    }
    tmp -> value = values[i];
    tmp = tmp -> next;
  }
  free(values);
}

void descendingSort(Node *head){
  int length = countNode(head);
  int *values = (int*) malloc(sizeof(int) * length);
  Node *tmp = head;
  int i =0;
  while(tmp -> next != NULL){
    values[i] = tmp-> value;
    tmp= tmp-> next;
    i++;
  }
  values[length -1] = tmp-> value;
  tmp = head;
  for(i = 0 ; i< length; i++){
    for(int j = i; j < length ; j++){
      if(values[i] > values[j]){
        int t = values[i];
        values[i] = values[j];
        values[j] = t;
      }
    }
    tmp -> value = values[i];
    tmp = tmp -> next;
  }
  free(values);
}
