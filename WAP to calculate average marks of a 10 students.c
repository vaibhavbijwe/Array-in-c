#include <stdio.h>

int main() {
    int numStudents = 10;
    float marks[numStudents];
    float totalMarks = 0.0;

    for (int i = 0; i < numStudents; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &marks[i]);
        totalMarks += marks[i];
    }

   float averageMarks = totalMarks / numStudents;

    printf("Average marks: %.2f\n", averageMarks);

    return 0;
}
