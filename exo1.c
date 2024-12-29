#include<stdio.h>

struct student{
    char name[50];
    int rollNumber;
    float marks;
};
int main(){
    struct student student;
    printf("Enter student name: ");
    fgets(student.name, sizeof(student.name), stdin);
    printf("Enter roll number: ");
    scanf("%d", &student.rollNumber);
    printf("Enter marks: ");
    scanf("%f", &student.marks);

    printf("\n student details: \n");
    printf("Name: %s", student.name);
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Marks: %2.f\n", student.marks);
    return 0;
}