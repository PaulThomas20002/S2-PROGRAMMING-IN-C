/*hello ,Paul Thomas, CS student, Build this program*/
#include <stdio.h>
int main (){
    int a[10], b[10], c[10], i, j, n, m;
    printf("Welcome to the program to merge array \n");
    printf("Enter the size of array 1 : ");
    scanf("%d", &m);
    printf("Enter the array elements \n");
    for (i=0; i<m; i++){
        scanf("%d", &a[i]);
        c[i]=a[i];
    }
    j=m;
    printf("Enter the size of array 2 : ");
    scanf("%d", &n);
    printf("Enter the array elements\n ");
    for (i=0; i<n; i++){
        scanf("%d", &b[i]);
        c[j]=b[i];
        j++;
    }
    printf("Merged Array is \n")
    for (i=0; i<n+m; i++){

        printf("%d\t", c[i]);
    }
return 0;
}
