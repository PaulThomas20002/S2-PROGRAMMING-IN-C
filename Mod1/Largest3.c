/*AIM: To Read 3 integer values and find the largest number. ALGORITHM 
Step 1 : Start 
Step 2 : Input the values of variable as a, b, c 
Step 3: If a>b and if a>c 
Step 4: print a is largest else print c is largest. 
Step 5: Else if b>c. 
Step 6: Print b is largest. 
Step 7: else print c is largest 
Step 8 : Stop 
PROGRAM */


#include <stdio.h> 
int main() 
{ int a,b,c ; 
printf("Enter 3 values to find largest among A,B,C \n"); scanf("%d %d %d", &a, &b, &c ); 
if(a>b){ 
if(a>c){printf("%d is the largest",a);} 
else{printf("%d is the largest",c);} 
} 
else if(b>c) 
printf("%d is the largest",b); 
else 
printf("%d is the largest",c); 
return 0; 
}
