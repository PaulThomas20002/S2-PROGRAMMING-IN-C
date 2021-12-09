/*Check whether the given string is palindrome or not. 
Aim 
Check whether the given string is palindrome or not. 
Algorithm 
Step 1 : Declare a function that accepts one argument, a string. 
Step 2 : Save the string length to a variable. 
Step 3 : Check if there are more letters left, if so, proceed and otherwise, you have a palindrome. 
Step 4 : Now, if the first and last letters are the same, invoke the function again, passing the string with the first and last letters sliced. Otherwise, return false. 
Program */


#include <stdio.h> 
#include <string.h> 
int main() 
{ 
char str[100]; 
int i, len, flag; 
flag = 0; 
printf("\n Please Enter any String : "); 
gets(str); 
len = strlen(str); 
for(i = 0; i < len; i++) 
{ 
if(str[i] != str[len - i - 1]) 
{
flag = 1; 
break; 
} 
} 
if(flag == 0) 
{ 
printf("\n %s is a Palindrome String", str); 
} 
else 
{ 
printf("\n %s is Not a Palindrome String", str); } 
return 0; 
