#ifndef _STLIST_H
#define _STLIST_H

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <ctype.h>
#include <math.h>

typedef struct student{
	unsigned int bNum;
	char firstName[19];
	char lastName[19];
	float quizGrade[9];
	float labGrade[5];
	float midtermGrade;
	float projectGrade;
	float finalExamGrade;
	struct student *nextPtr;
} Student;

void push( Student **topPtr );
void pop( Student **topPtr );
void bNumRemove( Student **currentPtr );
void sortList( Student **topPtr );	//Using Radix Sort
void sortFinal( Student **topPtr ); //Using Insertion Sort
void printStudentInfo( Student *currentPtr );
void printList( Student *currentPtr );

#endif
