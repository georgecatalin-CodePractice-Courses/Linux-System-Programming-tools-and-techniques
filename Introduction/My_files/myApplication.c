#include "myApplication.h"

int main(char argc, char** argv)
{
	person_t *person1=(person_t *) calloc(1, sizeof(person_t));
	strncpy(person1->fullname,"George Calin",strlen("George Calin"));
	person1->weight=96;
	person1->height=178;
	person1->isGamer=true;
	
	person_t *person2=(person_t *) calloc(1, sizeof(person_t));
	strncpy(person2->fullname,"Mara Calin",strlen("Mara Calin"));
	person2->weight=35;
	person2->height=140;
	person2->isGamer=true;
	
	person_t *person3=(person_t *) calloc(1,sizeof(person_t));
	strncpy(person3->fullname,"Sorina Calin",strlen("Sorina Calin"));
	person3->weight=75;
	person3->height=150;
	person3->isGamer=false;
	
	/* Create a new linked list */
	doubly_linked_list_t *persons_db=get_new_doubly_linked_list();
	add_data_to_doubly_linked_list(persons_db,person1);
	add_data_to_doubly_linked_list(persons_db,person2);
	add_data_to_doubly_linked_list(persons_db,person3);
	
	print_person_database(persons_db);
	
	return 0;
}

void print_person_details(person_t *thisperson)
{
	printf("The name of the person is = %s .\n",thisperson->fullname);
	printf("The weight of the person is=%i .\n",thisperson->weight);
	printf("The height of the person is=%i .\n",thisperson->height);
	printf("Is this person a gamer %d .\n", thisperson->isGamer);
}


void print_person_database(doubly_linked_list_t *this_list)
{
	if(this_list==NULL || this_list->head==NULL)
	{
		return;
	}
	
	doubly_linked_list_node_t *head=this_list->head;
	person_t *person=NULL;
	
	while(head)
	{
		person=head->data;
		print_person_details(person);
		head=head->right;
	}
}
