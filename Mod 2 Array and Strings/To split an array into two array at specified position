/*hello ,Paul Thomas, CS student, Build this program*/
#include<stdio.h>
int main()
{

    int a[10], b[10], c[10], i, n, m, p;
    printf("Enter the size of array : ");
    scanf("%d", &p);
    printf("Enter the position to split : ");
    scanf("%d", &m);
    n=p-m;
    printf("Enter the elements\n");
    for(i=0; i<p; i++)
        scanf("%d", &a[i]);
        
    for(i=0; i<m; i++)
        b[i]=a[i];
    
    for(i=0; i<n; i++)
        c[i]=a[i+m];
     
    printf("1st Array \n");

    for(i=0; i<m; i++)
    {
       printf("%d\t", b[i]);
    }
    printf("\n2nd Array \n");
    
    for (i=0; i<n; i++)
    {
        printf("%d\t", c[i]);
    }
    return 0;
}
