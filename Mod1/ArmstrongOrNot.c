/*6. Check whether the number is Armstrong or not. AIM 
To check whether the number is Armstrong is not. 
ALGORITHM 
Step 1: Start. 
Step 2: Input the variable which needed to be checked. Step 3: Assign value to the variable 
Step 4: Split all digits of Arms 
Step 5: Find cube-value of each digits 
Step 6: Add all cube-values together 
Step 7: Save the output to Sum variable 
Step 8: If Sum equals to Arms print Armstrong Number Step 9: If Sum not equals to Arms print Not Armstrong Number Step 10: Stop 
PROGRAM */

#include <stdio.h> 
int main() { 
int num, rem, check, sum = 0; 
printf("Enter the Number : "); 
scanf("%d",&num); 
check = num; 
while(check > 0) { 
rem = check % 10; 
sum = sum + (rem * rem * rem); 
check = check / 10; 
}
if(sum == num) 
printf("%d is an armstrong number.", num); else 
printf("%d is not an armstrong number.", num); 
return 0; 
}
