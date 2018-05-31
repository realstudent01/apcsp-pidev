#include <stdio.h>

struct Student
{
 char firstName[50];
 char lastName[50];
 char age[2];
 char studentID[50];
};

void printStudent( int argc, char* argv[])// struct Student* student)
{
 printf("student 1 name is %s %s\n", student1.firstName, student1.lastName);
}

int main()
{
 struct Student student1;
 struct Student student2;

 printStudent(student1);
 printStudent(student2);

}
