/*ASSIGNMENT 3 
Problem:5. Check whether the number is prime or not. 
AIM 
To check whether the number is prime is not. 
ALGORITHM 
Step 1: Start. 
Step 2: Input the variable which needed to be checked. Step 3 : Divide the variable num with num-1 times and set loop variable as 2. 
Step 3 : If num is divided with loop variables and check the reminder is zero. If not, it is not prime. 
Step 4 : Else it is prime. 
Step 5 : Stop. 
PROGRAM */


#include <stdio.h> 
int main() { 
int i, num, prime=1; 
printf("Enter the Number : "); 
scanf("%d",&num); 
for(i=2; i<num; i++) 
{ 
if((num%i) == 0) 
{ 
prime=0; 
} 
} 
if (prime == 1)
{ 
printf("%d is prime number.", num); 
} 
else 
printf("%d is not a prime number.", num); 
return 0; 
} 
