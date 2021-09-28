
//Forward declaration
struct occupation_t ;  //this instructs the compiler to ignore the pointer usage of the struct 'occupation_t' in case of a recursive dependency. Thus breaking the recursive dependency

struct employee_t   /*  for compilation purposes, the compiler needs to know the size of the struct */
{
	char name[50];   // the size is 50 * 1byte/char=50 bytes
	unsigned int employee_id; //the size is 1 * 4bytes=4 bytes
	struct occupation_t *occupation; // the size is 4 bytes on 32 bits systems, and 8 bytes on 64 bits systems -->by switching to pointer usage occupation_t *occupation) of the struct  from the complete usage (occupation_t occupation) the recursive dependency is resolved
};


struct occupation_t
{
	char designation[32];
	struct cleemployee_t employee;
};
