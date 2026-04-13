#include <stdio.h>

struct Student {
    char name[20];
    int rollno;
    int m1;
    int m2;
    float average;
};

int main() {
    struct Student s[5];
    int i;

    for(i = 0; i < 5; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll Number: ");
        scanf("%d", &s[i].rollno);

        printf("Mark 1: ");
        scanf("%d", &s[i].m1);

        printf("Mark 2: ");
        scanf("%d", &s[i].m2);

        s[i].average = (s[i].m1 + s[i].m2) / 2.0;
    }

  printf("\nStudent Details and Average Marks:\n");

    for(i = 0; i < 5; i++) {
        printf("\nName: %s", s[i].name);
        printf("\nRoll Number: %d", s[i].roll);
        printf("\nAverage Marks: %.2f\n", s[i].average);
    }

    return 0;
}
