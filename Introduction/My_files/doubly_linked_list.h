#include <memory.h>
#include <stdlib.h>


typedef struct doubly_linked_list_node
{
	void *data;
	struct doubly_linked_list_node *left;
	struct doubly_linked_list_node *right;
} doubly_linked_list_node_t;

typedef struct doubly_linked_list
{
	doubly_linked_list_node_t *head;
} doubly_linked_list_t;

/* Function declaration to create a new doubly linked list and to return a new doubly linked list */
doubly_linked_list_t  *get_new_doubly_linked_list();

/* Function to add the data from the application to the doubly linked list */
int add_data_to_doubly_linked_list(doubly_linked_list_t *this_list,void *application_data);

/* Supplementary functions */

/*
 
int remove_data_from_doubly_linked_list_by_data_pointer(doubly_linked_list_t *this_list,void *data); //returns 0 on success and -1 on failure

int is_this_doubly_linked_list_empty(doubly_linked_list_t *this_list); //return 0 if empty and -1 if it is not empty

void delete_all_node_in_doubly_linked_list(doubly_linked_list_t *this_list); // deletes all nodes from the doubly linked list, but do not free application data


*/
