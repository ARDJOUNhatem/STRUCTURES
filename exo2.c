#include<stdio.h>

struct student {
    char name[50];
    int marks[5];
};
int main(){
    struct student students[5];
    int totalMarks, sum;
    float average;

     for(int i = 0; i < 5; i++){
        printf("Enter details for student %d\n", i+1);
        printf("Enter name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        printf("Enter marks for 5 subject: ");
        sum = 0;
         for(int j = 0;j < 5; j++){
            scanf("%d", &students[i].marks[j]);
            sum += students[i].marks[j];
         }
         average = sum /5.0;
         totalMarks = sum;
         printf("total Marks: %d, Average Marks: %2.f\n", totalMarks, average);
     }
     return 0;

}