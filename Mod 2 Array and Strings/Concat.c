/*ASSIGNMENT 11 
AIM 
Concatenate two strings without using library functions. 
ALGORITHM 
START 
Step 1 : Declare two character array name str1 and str2 
Step 2 :Gets() takes the value of str2 from the user. 
Step 3 : While loop is implemented which checks whether str1[i] does not equal to '\0' or not, Step 4: While is used after this which checks whether str2[i] not equals to '\0' Step 5 :If the condition becomes true, the loop will get executed and where it is given the value of str2[j] gets initialized to str1[i] 
Step 6 : printf() is used to display the value of the concatenated string. 
STOP 
PROGRAM 
*/


#include<stdio.h> 
void main(void) 
{ 
char str1[25],str2[25]; 
int i=0,j=0; 
printf("\nEnter First String:"); 
gets(str1); 
printf("\nEnter Second String:"); 
gets(str2); 
while(str1[i]!='\0') 
i++; 
while(str2[j]!='\0') 
{ 
str1[i]=str2[j]; 
j++; 
i++; 
} 
str1[i]='\0'; 
printf("\nConcatenated String is %s",str1); 
}
