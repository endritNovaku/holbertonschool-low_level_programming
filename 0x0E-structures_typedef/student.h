#ifndef _STUDENT_H
#define _STUDENT_H

struct student
{
	int id;
	char *name;
	float average;
};

void init_student(struct student *st, int id, char *name, float average);
void print_student(struct student *s);
int compare_average(struct student *s1, struct student *s2);
#endif
