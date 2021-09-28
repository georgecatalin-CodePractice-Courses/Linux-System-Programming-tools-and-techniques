struct employee_t
{
	char name[50];
	unsigned int employee_id;
	struct occupation_t occupation;    //here is an example of recursive dependency as the compiler needs to know the size of the struct occupation_t (which is the sum of all its components). But the compiler does not know the size of occupation_t because it has not been declared yet
};

struct ocuppation_t 
{
	char designation[30];
	unsigned int salary;
	struct employee_t manager;  //here is also an example of recursive dependency to another struct
}
