#include "stlist.h"

/* Structure Reference
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
*/

/* -----------------------------------------------------------------
 *	name: push()
 *	inputs:	**topPtr (Adress of current list pointer)
 *	outputs: <None>
 *	This function adds a new student structure to the beginning of 
 *	the linked-list.
 *	Student information is added via user input and verifies all
 *	information is valid (no duplicate B#, all grades range from
 *	0-100, etc.) before adding to list.
 * -----------------------------------------------------------------
 */
void push( Student **topPtr ){
	int i, err = 0;	// Error indication variable
	Student *newStudentPtr;
	newStudentPtr = malloc(sizeof(Student));
	
	if(newStudentPtr != NULL){
		//Get information
		while(err == 0){
			printf("Enter this student's 8 digit B#: ");
			scanf("%d",&newStudentPtr->bNum);
			printf("Enter student's FIRST name: ");
			scanf("%s",newStudentPtr->firstName);
			printf("Enter student's LAST name: ");
			scanf("%s",newStudentPtr->lastName);
			for(i=0;i<9;i++){
				printf("Enter score for Quiz #%d: ",i+1);
				scanf("%f",&newStudentPtr->quizGrade[i]);
			}
			for(i=0;i<5;i++){
				printf("Enter score for Lab #%d: ",i+1);
				scanf("%f",&newStudentPtr->labGrade[i]);
			}
			printf("Enter score for Midterm: ");
			scanf("%f",&newStudentPtr->midtermGrade);
			printf("Enter score for Final Project: ");
			scanf("%f",&newStudentPtr->projectGrade);
			printf("Enter score for Final (0 if not taken): ");
			scanf("%f",&newStudentPtr->finalExamGrade);
			
			err = 1;
		}
		
		// Insert into the beginning of list
		newStudentPtr->nextPtr = *topPtr;
		*topPtr = newStudentPtr;
	}
	else{
		printf("No memory available\n");
	}
};

/* -----------------------------------------------------------------
 *	name: pop()
 *	inputs:	**topPtr (Adress of current list pointer)
 *	outputs: <None>
 *	This function removes the first student from the list
 * -----------------------------------------------------------------
 */
void pop( Student **topPtr ){
	Student *tempPtr;
	tempPtr = *topPtr;
	*topPtr = (*topPtr)->nextPtr;
	free( tempPtr );
};

void bNumRemove( Student **currentPtr );
void sortList( Student **topPtr );	//Using Radix Sort
void sortFinal( Student **topPtr ); //Using Insertion Sort
void printStudentInfo( Student *currentPtr );
void printList( Student *currentPtr );
