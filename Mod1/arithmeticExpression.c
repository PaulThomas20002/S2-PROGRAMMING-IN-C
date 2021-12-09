/*(iv) Evaluate the arithmetic expression ((a -b / c * d + e) * (f +g)) and display its solution. Read the values of the variables from the user through console. 
AIM 
To find the arithmetic expression ((a -b / c * d + e) * (f +g)) and display its solution. 
ALGORITHM 
Step 1 : Start 
Step 2 : Input the values of variables a, b, c, d, e, f and g 
Step 3 : Store result as res = ((a - b / c * d + e) * (f +g)) 
Step 4 : Print the stored result 
Step 5 : Stop 
PROGRAM */


#include <stdio.h> 
int main() 
{ 
int a,b,c,d,e,f,g ; 
float res ; 
printf("Enter the values : "); 
scanf("%d %d %d %d %d %d %d", &a,&b,&c,&d,&e,&f,&g ); 
res = ((a - b / c * d + e) * (f +g)); 
printf("result = %f", res); 
return 0; 
}
