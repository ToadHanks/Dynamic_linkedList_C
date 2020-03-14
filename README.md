Author
-------
Mihir Patel   

Description
-------------   
In this project, I am making a program to maintain a database of items found in a convenience store. Each item has a name (maximum of 50 characters) and price associated with it. Furthermore, this program uses a dynamically allocated linked list to store the item information.
      
Following are some base files which I have made:

- *items.h*   
   - This file contains definitions and prototypes of functions that are defined in items.c. The structure item is also defined to store information about a country. 

- *items.c*     
   - This file contains the function definitions that you need to complete. There are four functions, append_item, search_item, print_items, and clear_items with following functionality:
      - **append_item**:  Asks the user for name of the item. Add the item to the end of the linked list if it doesn't already exist. If the item already exists, nothig gets added. This function returns the list. If the list is empty, I return the pointer to the newly created item, otherwise return the list that was passed into the function.     
      - **search_item**: Ask the user for name of an item and search the item with the given name in the linked list. Function should print out the name and price of the item if it exists. If the item doesn't exist, I simply print that the item was not found.  
      - **print_items**: Print out all the items in the linked list. Each item with its price in printed in a new line.   
      - **clear_item**: Clears all the items in the linked list. All dynamically allocated nodes (individually) are freed.   
- *store.c*     
   - This file has the main function. You can see a pointer variable to item structure which points to the first node in the linked list.        

Please use the premade make file to get an executable. Then do gcc -Wall ./store in a linux or minGW environment. To test everything at once, please use the file test_store.
     
Status
-------
Completed   

Examples   
--------   
Below are some examples of how this code runs. 
````````c
$ make 

$ ./store

Append item: a 
Search item: s 
Print items: p 
Quit:        q 
Enter operation code: a 

Enter item name: milk 
Enter price: 2.97 
 
Enter operation code: a 

Enter item name: coffee 
Enter price: 6.98 
 
Enter operation code: a 

Enter item name: bread 
Enter price: 2.56 
 
Enter operation code: a 

Enter item name: coffee 
Item already exists. 
 
Enter operation code: s 

Enter item name: coffee 
Price of coffee is $6.98 
 
Enter operation code: s

Enter item name: egg 
Item not found. 
 
Enter operation code: p 

Price of milk is $2.97 
Price of coffee is $6.98 
Price of bread is $2.56 
 
Enter operation code: q 
````````
