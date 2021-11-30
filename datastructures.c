#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char name[20];
    int age;
    char phonenumber;
    double salary;
} Emp;
 
int main()
{
    int n=2;
    Emp employees[n];
    printf("Enter %d Employee Details \n \n",n);
    for(int i=0; i<n; i++){
        printf("Employee %d:- \n",i+1);

        printf("Name: ");
        scanf("%[^\n]s",employees[i].name);

        printf("age: ");
        scanf("%d",&employees[i].age);
        
        printf("phonenumber: ");
        scanf("%d",&employees[i].phonenumber);
        
        printf("Salary: ");
        scanf("%lf",&employees[i].salary);

        char ch = getchar();
 
        printf("\n");
    }
 
    printf("-------------- All Employees Details ---------------\n");
    for(int i=0; i<n; i++){
        printf("Name \t: ");
        printf("%s \n",employees[i].name);
 
        printf("age\t: ");
        printf("%d \n",employees[i].age);
        
        printf("phonenumber\t: ");
        printf("%d \n",employees[i].phonenumber);
 
        printf("Salary \t: ");
        printf("%.2lf \n",employees[i].salary);
 
        printf("\n");
    }
    return 0;
    }
