/*ASSIGNMENT 13, 14 
AIM 
To find the distances between two points in the Euclidean space. ALGORITHM 
Step 1 : Start 
Step 2 : Take 2 points as an input from an user 
Step 3 : Calculate the difference between the corresponding X- coordinates . Step 4 : Apply the formula 
Step 5 : Stop 
PROGRAM */


#include <stdio.h> 
#include <stdlib.h> 
struct employee { 
char name1[30]; 
char name2[30]; 
int empId; 
float salary; }; 
int main() 
{ 
struct employee emp[100]; 
int i,n; 
printf("enter the number of employees"); 
scanf("%d",&n); 
printf("\nEnter details :\n"); 
for(i=0;i<n;i++){ 
printf("First Name :"); 
scanf("%s" ,emp[i].name1); 
printf("surName :"); 
scanf("%s" ,emp[i].name2); 
printf("ID :"); 
scanf("%d",&emp[i].empId); 
printf("Salary :"); 
scanf("%f",&emp[i].salary); 
} 
for(i=0;i<n;i++){ 
printf("\nEntered detail is:"); 
printf("Name: %s %s\n",emp[i].name1,emp[i].name2); 
printf("Id: %d \n",emp[i].empId); 
printf("Salary: %f\n",emp[i].salary);
}
return0; 
}
