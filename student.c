#include <stdio.h>

struct Student {
 char firstName[50];
 char lastName[50];
 int age;
 int studentID;
} Student1, Student2;

void printStudent( struct Student* student )
{
 printf("student 1 name is %s %s\n", Student1.firstName, Student1.lastName);
}

int main()
{
 char imput;
 char temp;
 printf("enter students that you want to put in the struct\n");
 fgets(input, 256, stdin);
 sscanf(input, "%s", temp);
 struct Student temp;
 struct Student Student1;
 struct Student Student2;

 printStudent(struct Student* student1);
 printStudent(struct Student* student2);

}
