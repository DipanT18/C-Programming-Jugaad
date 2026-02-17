//This program is written to read and display the details of n number of employee using structure in C.
#include<stdio.h>
struct Employee{
    int id;
    char name[20];
    float salary;
};
int main(){
    struct Employee E[5];
    for(int i=0;i<5;i++){
        printf("Enter employee id: ");
        scanf("%d",&E[i].id);
        printf("Enter employee name: ");
        scanf("%s",E[i].name);
        printf("Enter employee salary: ");
        scanf("%f",&E[i].salary);
    }
    
    printf("\nEmployee Details:\n");
    for(int i=0;i<5;i++){
        printf("ID: %d\n",E[i].id);
        printf("Name: %s\n",E[i].name);
        printf("Salary: %.2f\n",E[i].salary);
    }
}