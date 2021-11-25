#include <stdio.h>
int main()
{
    int a[10], i, item,n,loc=-1;
    printf("\nEnter number of elements of an array:\n");
    scanf("%d",&n);
    printf("\nEnter elements: \n");
    for (i=0; i<n; i++)
        scanf("%d", &a[i]);
    printf("\nEnter item to search: ");
    scanf("%d", &item);
    for (i=0; i<=n; i++)
        if (item == a[i])
        {
            loc=i;
            break;
        }
    if (loc==-1)
        printf("\nItem does not exist.");
    else 
        printf("\nItem found at location %d", loc+1);
    return 0;
}
