#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct person
{
	char fullname[50];
	int weight;
	int height;
	char facebookid[60];
	bool isGamer;
} person_t;


static void print_person_details(person_t thisperson);
