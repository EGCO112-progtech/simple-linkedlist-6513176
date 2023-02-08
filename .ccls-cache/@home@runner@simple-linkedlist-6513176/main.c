//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//
#include <stdio.h>
#include "node.h"

#include <stdlib.h>

int main(int argc, const char *argv[]) {
  int c = 5, o;
  struct node *head;
  typedef struct node Node;
  typedef struct node *NodePtr;
  NodePtr p = (NodePtr)malloc(sizeof(Node));
  head = p;
  p->value = c;
  for (o = 1; o < 5; o++) {
    p->next = (NodePtr)malloc(sizeof(Node));
    p = p->next;
    p->value = 2 + 3 + o;
    p->next = NULL;
  }
  p = head;
  /*
    printf("%d\n", head ->value ); //what value for 5
    printf("%d\n", head ->next->value ); //what value for 8
/*  Exercise I
    1. Add 1 more than at the end
    2. Add value(11)
    3. Make next become NULL
 *//*
  p->next->next->value=11;//d.value = 11;
  printf("%d\n",p->next->next->value);//b.next->value;
  head->next->next->next = NULL;*/ //d.next = NULL;
  /*  Exercise II
          1. Add 1 more than at the begining!!!!
          2. Add value (2)

  *//*
    head=p;
  p->value = 2;
  p->next=p;
  printf("%d\n\n",head->value);
/*
  printf("%3d -> ",head->value);
  printf("%3d -> ",p->next->value);
  printf("%3d -> ",p->next->value);
  printf("%3d -> NULL\n\n",p->next->next->value);*/

  typedef struct node *NodePtr;
  NodePtr tmp = head; // add temp value to faciliate

  /*  Exercise III Use loop to print everything*/ /*
       int i,n=4;
       for(i=0;i<n;i++){
           printf("%3d -> ", tmp->value);
         tmp = tmp->next;
         // What is missing???
       }*/
                                                  /*printf("NULL\n\n");*/
  tmp = head;
  /*  Exercise IV change to while loop!! (you can use NULL to help)
   */
  while (tmp != NULL) {
    printf("%3d -> ", tmp->value);
    tmp = tmp->next;
  }
  printf("NULL");
  
  NodePtr tmp2;
  tmp = head;
  while (tmp != NULL) {
    printf(" \ndeleting %3d ", tmp->value);
    tmp2 = tmp->next;
    free(tmp);
    tmp = tmp2;
  }

  /*  Exercise V Use malloc to create all nodes, instead of create a struct!!
          //use a loop to help
           */

  /*  Exercise VI Free all node !!
       //use a loop to help
*/

  return 0;
}
