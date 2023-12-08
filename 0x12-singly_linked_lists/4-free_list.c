#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
* free_list - Realease the memory allocated for a list
*
* @head: A pointer to the first node of the list to free
*/
void free_list(list_t *head)
{
   if (head)
   {
       free_list(head->next);
       if (head->str)
       free(head->str);
       free(head);
   }
}


// 100-first.c


#include<stdio.h>


/**
* myStartupFun - Apply the constructor attribute to myStartupFun() so that it
*   is executed before main()
*/
void myStartupFun(void) __attribute__((constructor));


/**
* myStartupFun - implementation of myStartupFun
*/
void myStartupFun(void)
{
   printf("You're beat! and yet, you must allow,\n");
   printf("I bore my house upon my back!\n");
}

