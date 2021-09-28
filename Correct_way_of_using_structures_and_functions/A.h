typedef struct occupation
{
	char designation[32];
	unsigned int salary;
} occupation_t;  ///this is correct . "Define and use" principle for structs


typedef struct employee
{
	char name[50];
    unsigned int employee_id;
    occupation_t occ;
} employee_t;


