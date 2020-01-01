/**********************************************************************************
 * File: items.c                                                                  *
 * Author: Mihir Patel                                                            *                                                 *
 * Following program has function definitions that is used by main function.      * 
 **********************************************************************************/
 
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include "items.h"

/*********************************************************
 * append_item: Adds an item to the end of the linked    *
 * list if it doesn't already exist. If the item already *
 * exist, it doesn't add anything to the list.           *
 * This function, returns the list.                      *
 *********************************************************/
struct item *append_item(struct item *item_list)
{
  struct item *new_node;
  struct item *curr;
  struct item *prev;
  char entered_name[51];
  double entered_price= 0.0;
  
  new_node = (struct item *)malloc(sizeof(struct item));
  if (new_node == NULL) {
    printf("malloc failed in append_item\n");
    return item_list;
  }
  
  printf("Enter item name: ");
  read_line(entered_name, 51);
  
  for(curr=prev=item_list; curr != NULL; prev = curr, curr = curr->next){
	  
	if(strcmp(curr->item_name, entered_name)== 0){
		printf("Item is in inventory.\n");
		return item_list;
	}
  }
  
  printf("Enter price: $");
  scanf("%lf", &entered_price);
  
  strcpy(new_node->item_name,entered_name);
  new_node->item_price = entered_price;
  
   if(item_list == NULL){
	  new_node->next = NULL;
	  return new_node;
  }
  
  new_node->next = NULL;
  prev->next= new_node;
	
  return item_list;
}

/**********************************************************
 * search_item: Searches for an item with the given name  *
 * in the linked list. Function prints out the name       *
 * and price of the item if it exists. If the item doesn't*
 * exist, it prints that the item was not found.          *
 *********************************************************/
void search_item(struct item *item_list)
{
  struct item *s;
  char entered_name[51];
  
  printf("Enter item name: ");
  read_line(entered_name, 51);
  
  for (s = item_list; s != NULL; s = s->next){
    if (strcmp(s->item_name, entered_name) ==0){
		
		printf("Price of 	%-5s is $%.2lf\n",s->item_name, s->item_price);
		return;
	}
  }
  printf("Item not found.\n");
}

/*********************************************************
 * print_items: Print out all the items in the linked    *
 * list, each item with its price in a new line.         *
 *********************************************************/
void print_items(struct item *item_list)
{
  struct item *p;
  
  for (p = item_list; p != NULL; p = p->next)
    printf("Price of 	%-5s is $%.2lf\n", p->item_name, p->item_price);

}

/*********************************************************
 * clear_items: Clears all the items in the linked list. *
 * All dynamically allocated nodes gets  freed.          *
 *********************************************************/
void clear_items(struct item *item_list)
{
  struct item *c;

  while(item_list != NULL) {
    c = item_list;
    item_list = item_list->next;
    if( c!= NULL)
      free(c);
  }
}

/**********************************************************
 * read_line: reads a line and scan input per chracter.   *
 **********************************************************/
int read_line(char str[], int n)
{
  int ch, i = 0;

  while (isspace(ch = getchar()))
    ;
  while (ch != '\n' && ch != EOF) {
    if (i < n)
      str[i++] = ch;
    ch = getchar();
  }
  str[i] = '\0';
  return i;
}