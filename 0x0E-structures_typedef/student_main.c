#include "student.h"
#include <stdio.h>

int main()
{
	int cp;
	struct student s1, s2;

	init_student(&s1, 1, "endrit", 50);
	init_student(&s2, 2, "asdf", 52);
	cp = compare_average(&s1, &s2);
	printf("%i\n", cp);
	return (0);
}
