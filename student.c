#include <stdio.h>
#include <string.h>

struct Student {
 char firstName[50];
 char lastName[50];
 int age;
 int studentID;
};

void printStudent( struct Student* student)
{
 printf("the student's name is %s %s\n", student->firstName, student->lastName);
 printf("their age is %d\n", student->age);
 printf("their studentID is %d\n", student->studentID);
}

int main()
{
 char input[256];
 int num;
 char temp[256];
 int tempnum;

 printf("enter how many students you want to put in the struct\n");
 fgets(input, 256, stdin);
 sscanf(input, "%d", &num);

 struct Student studentArr[num];


 for ( int i = 0; i < num; i++)
 {
  printf("what is student number %d 's first name\n", i);
  fgets(input, 256, stdin);
  sscanf(input, "%s", temp);
  strcpy(studentArr[i].firstName, temp);

  printf("what is student number %d 's last name\n", i);
  fgets(input, 256, stdin);
  sscanf(input, "%s", temp);
  strcpy(studentArr[i].lastName, temp);

  printf("what is student number %d 's age\n", i);
  fgets(input, 256, stdin);
  sscanf(input, "%d", &tempnum);
  studentArr[i].age = tempnum;

  printf("what is student number %d 's student ID\n", i);
  fgets(input, 256, stdin);
  sscanf(input, "%d", &tempnum);
  studentArr[i].studentID = tempnum;
 }

 for ( int i = 0; i < num; i++)
 {
  printStudent(&studentArr[i]);
 }


//  strcpy(studentArr[i].lastName, "Hecht");

//  studentArr[i].age =


//  printStudent( &studentArr[0] );
//  printStudent( &studentArr[1] );

}
