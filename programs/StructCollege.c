#include<stdio.h>
struct Student{
    int rollno;
    char name[50];
    int Department;
    float Course;
    int Year;
};
int printbyyear(struct Student S[],int n,int year){
    printf("Students in year %d:\n",year);
    for(int i=0;i<n;i++){
        if(S[i].Year==year){
            printf("Roll No: %d\n",S[i].rollno);
            printf("Name: %s\n",S[i].name);
            printf("Department: %d\n",S[i].Department);
            printf("Course: %.2f\n",S[i].Course);
        }
    } 
}
int showbyrollno(struct Student S[],int n,int rollno){
    printf("Details of student with roll no %d:\n",rollno);
    for(int i=0;i<n;i++){
        if(S[i].rollno==rollno){
            printf("Roll No: %d\n",S[i].rollno);
            printf("Name: %s\n",S[i].name);
            printf("Department: %d\n",S[i].Department);
            printf("Course: %.2f\n",S[i].Course);
            printf("Year: %d\n",S[i].Year);
        }
    }
}

int main(){
    int n;
    printf("Enter number of students: ");
    scanf("%d",&n);
    struct Student S[n];
    for(int i=0;i<n;i++){
        printf("Enter roll no: ");
        scanf("%d",&S[i].rollno);
        printf("Enter name: ");
        scanf("%s",S[i].name);
        printf("Enter department: ");
        scanf("%d",&S[i].Department);
        printf("Enter course: ");
        scanf("%f",&S[i].Course);
        printf("Enter year: ");
        scanf("%d",&S[i].Year);
    }
    int year,rollno;
    printf("Enter year to filter students: ");
    scanf("%d",&year);
    printbyyear(S,n,year);
    printf("Enter roll no to show details: ");
    scanf("%d",&rollno);
    showbyrollno(S,n,rollno);
}