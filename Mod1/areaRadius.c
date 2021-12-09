/*AIM 
To read the radius of the circle and find the area. 
ALGORITHM 
Step 1 : Start 
Step 2 : Input the radius value in variable r 
Step 3 : Store area=3.14 * r2 
Step 4 : Print the area of the circle 
Step 5 : Stop 
PROGRAM 
*/

#include <stdio.h> 
#include <math.h> 
int main() 
{ 
float r, area; 
print ("Enter the radius of the circle: "); 
scanf("%f", &r); 
area= 3.14 * pow( r , 2 ); 
printf("The area of the circle = %f", area); 
return 0; 
}
