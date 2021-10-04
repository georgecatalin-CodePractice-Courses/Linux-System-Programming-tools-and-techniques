#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "doubly_linked_list.h"

typedef struct person
{
	char fullname[50];
	int weight;
	int height;
	char facebookid[60];
	bool isGamer;
} person_t;


static void print_person_details(person_t *thisperson);

static void print_person_database(doubly_linked_list_t *this_list);
