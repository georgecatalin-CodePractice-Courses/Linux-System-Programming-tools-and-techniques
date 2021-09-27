#define A 10
#define  B 20
#define square(x) (x*x)

#ifdef A     //if A is defined
#include "x.h"
#endif

#undef A   //Compiler forgets that something A was ever defined

#ifdef A
#include "y.h"  //will not be executed cause A is no longer defined
#endif

#ifndef A   //this is true
int const T=square(B);  //will be executed
#else
int const T=square(B)+1; //will not be executed
#endif

int main()
{
	..
}
