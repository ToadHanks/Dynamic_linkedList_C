/**********************************************************************************
 * File: store.c                                                                  *
 * Author: Mihir Patel                                                              *                                                               *                                               *
 * Following program is a main function.                                          * 
 **********************************************************************************/

#include <stdio.h>
#include "items.h"

int main(void)
{
  struct item *item_list = NULL;   // points to first item
  char code;
  
  printf("Append item: a\n");
  printf("Search item: s\n");
  printf("Print items: p\n");
  printf("Quit:        q\n");

  for (;;) {
    printf("Enter operation code: ");
    scanf(" %c", &code);
    while (getchar() != '\n')   /* skips to end of line */
      ;
    switch (code) {
      case 'a': item_list = append_item(item_list);
                break;
      case 's': search_item(item_list);
                break;
      case 'p': print_items(item_list);
                break;
      case 'q': clear_items(item_list); return 0;
      default:  printf("Illegal code\n");
    }
    printf("\n");
  }

  return 0;
}