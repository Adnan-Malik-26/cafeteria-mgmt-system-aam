#include <stdio.h>
#include <string.h>


union studentInfo {
    int rollNumber;
    char name[20];
    float marks;
};

int main() {

    union studentInfo student;

    printf("Enter the student's roll number: ");
    scanf("%d", &student.rollNumber);

    printf("Enter the student's name: ");
    scanf("%s", student.name);

    printf("Enter the student's marks: ");
    scanf("%f", &student.marks);


    printf("\nStudent Information:\n");
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Name: %s\n", student.name);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}
