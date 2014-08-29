CS211_Lab5
==========

Lab assignment FIVE from Programming for Engineers I in C

Setup
======

Create a new directory and in it create two new C code files. The first, named lab5.c, should contain no functions other than main(), and perhaps any support functions used by it for the main program's functions. The second C file, named stlist.c, should start out empty.

Create a new header file named stlist.h, and '#include' it in both C files.

Then, write a Makefile which will compile, assemble and link this file into an executable called "lab5". Do not forget to add "-Wall" to each gcc command. Then, run "make" from within that directory and be sure your Makefile works. Don't forget to include the header file as a dependency for both .c files.

Project
=======

Create a C struct used to store data for a student in this class, as part of a singly-linked list (you'll need a "next" pointer). The data for a student must include:

- B-Number (as an 'unsigned int')
- First name (up to 18 characters, not inluding the NULL)
- Last name (also up to 18 characters, not inluding the NULL)
- 9 quiz grades
- 5 project grades
- Midterm grade
- Final project grade
- Optional final exam grade - which must be zero if not taken

Each 'grade' should be a 'char' (either signed or unsigned, your choice) type, since it can only range from 0 to 100, inclusive. The definition for this struct should be written in your stlist.h header file.

Define a static global "head" pointer for this list, and a set of functions for manipulating this list in your stlist.c file. A declaration for each of these functions - along with detailed descriptions of each, should be placed in the stlist header file. You must provide, with the functions in this file, at least the following functionality:

1) Input, from the user, a set of student data for one student. Verify this data is valid (not a duplicate B-Number, all grades from 0-100, etc...). If it is, add it to the beginning of the list.

2) Remove the first student from the list.

3) Print the list of students, plus all calculated grades (see note below).

4) Remove a student by b-number (input by the user).

5) Print all the info of a student by b-number (input by the user), plus all calculated grades (see note below).

6) Sort the list by students' last names (then first names, if the last names are the same - then B-Number if both names are the same) using the Radix Sort algorithm.

7) Sort the list by student's final course grade using the Insertion Sort algorithm.

8) Save the entire list to a text file (see note below). The filename should be requested from the user.

9) Load (and replace) the entire list from a text file (see note below). The filename should be requested from the user.

Note: 'All caclulated grades' includes all grades in the student data as well as the calculated quiz average, lab average, and the final course number and letter grades. All calculated grades must be rounded off to exactly two decimal places.

The grade will be computed as follows:

- 20% Midterm Exam
- 20% Final Project
- 30% Quizzes (Drop Lowest 2)
- 30% Projects (each worth 2, 3, 30, 35, 30 percent respectively)

The Final Exam grade - if greater than any one of these other grades - will replace exactly 10% of the total weight of that other grade, reducing its weight by 10%. If the Final Exam grade is also greater than another of these grades, it will replace 10% of that grade as well in the same way, gaining a total weight of 20%. Your program must automatically determine the best way to use the final exam for this overall grade.

The letter grade is computed from the overall percentage grade, rounded off to two decimal places, as follows:

93.00+: A

90.00+: A-

87.00+: B+

83.00+: B

80.00+: B-

77.00+: C+

73.00+: C

70.00+: C-

65.00+: D

0.00+: F

So, for example, a 92.99 (for example) is an A-, not an A. You do not round the grade off beyond these 2 decimal places.

Note: Saving to and loading from a text file must use a specific format. Each item (number, name, grade, etc...) should be printed by itself (no extra text describing or labeling anything) on its own line, with no blank lines between them. They should be in the exact order as they are listed above. There should be one blank line after each student entry. The "b-number" should be printed as just the number (without the 'B') in decimal, and it can leave off the leading 0s. Here is an example file:

101011

Steaphan G

Greene

100

100

100

0

100

100

100

100

0

100

100

86

99

96

99

94

0


202201

John

Smith

56

64

45

57

57

84

55

87

75

90

80

25

24

10

68

15

26

Add to your main function the ability to test all of these features interactively. How exactly you do this is up to you, but all required features must be easily testable by the user, and you can expect the CAs will have their own data files to load and test your code with.

