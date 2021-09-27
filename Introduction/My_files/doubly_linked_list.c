#include "doubly_linked_list.h"

/* Implementation of the public function to create and return a new empty doubly linked list */
doubly_linked_list_t *get_new_doubly_linked_list()
{
	doubly_linked_list_t *my_doubly_linked_list=(doubly_linked_list_t *) calloc(1, sizeof(doubly_linked_list_t));
	my_doubly_linked_list->head=NULL;
	return my_doubly_linked_list;
}

/* Implementation of the public function to add data to the doubly linked list */
int add_data_to_doubly_linked_list(doubly_linked_list_t *this_list,void *application_data)
{
	if(this_list==NULL || application_data==NULL)
	{
		return -1;
	}
	
	doubly_linked_list_node_t *new_node=(doubly_linked_list_node_t *) calloc(1, sizeof(doubly_linked_list_node_t));
	new_node->left=NULL;
	new_node->right=NULL;
	new_node->data=application_data;
	
	
/* Add the new node to the doubly linked list */
	if(this_list->head==NULL) //same as if(!this_list->head)
	{
		this_list->head=new_node;
		return 0;
	}
	
	doubly_linked_list_node_t *first_node=this_list->head;
	new_node->right=first_node;
	first_node->left=new_node;
	this_list->head=new_node;
	
	return 0;
}
