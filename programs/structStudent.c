//This program is written to store and display 5 students information in ascending order using structures
#include <stdio.h>
struct Student {
    int rollno;
    char name[50];
    int age;
    float marks;
};
int sortStudents(struct Student students[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(students[j].rollno > students[j+1].rollno) {
                struct Student temp = students[j];
                students[j] = students[j+1];
                students[j+1] = temp;
            }
        }
    }
}

int main() {
    struct Student students[5];
    printf("Enter information for 5 students:\n");
    for(int i = 0; i < 5; i++) {
        printf("Student %d:\n", i+1);
        printf("Enter Roll Number: ");
        scanf("%d", &students[i].rollno);
        printf("Enter Name: ");
        scanf("%s", students[i].name);
        printf("Enter Age: ");
        scanf("%d", &students[i].age);
        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);
    }
    sortStudents(students, 5);
    printf("\nStudents information in ascending order of Roll Number:\n");
    for(int i = 0; i < 5; i++) {
        printf("Student %d:\n", i+1);
        printf("Roll Number: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Marks: %.2f\n", students[i].marks);
    }
    return 0;
}
