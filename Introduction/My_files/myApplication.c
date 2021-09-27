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
	person3->isGamer=no;
	
	return 0;
}

static void print_person_details(person_t *thisperson)
{
	printf("The name of the person is = %s .\n",thisperson->fullname);
	printf("The weight of the person is=%i .\n",thisperson->weight);
	printf("The height of the person is=%i .\n",thisperson->height);
	printf("Is this person a gamer %d .\n", thisperson->isGamer);
	
}
