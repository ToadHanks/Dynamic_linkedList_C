/**********************************************************************************
 * File: items.h                                                                  *
 * Author: Mihir Patel                                                              *                                                     *
 * Following contians the header files used by other files.                       * 
 **********************************************************************************/

#ifndef ITEMS_H
#define ITEMS_H

#define NAME_LEN 50

struct item {
  char item_name[NAME_LEN+1];
  double item_price;
  struct item *next; 
};

struct item *append_item(struct item *item_list);
void search_item(struct item *item_list);
void print_items(struct item *item_list);
void clear_items(struct item *item_list);
int read_line(char str[], int n);

#endif