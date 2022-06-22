#include <stdio.h>

int main()
{
    
    int a[10],n,sum=0;
    printf("Limit:");
    scanf("%d", &n);
    
    printf("Numbers\n");
    for ( int i = 0; i < n; i++ ){
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    float avg = sum/n;
    printf("Sum : %d\nAverage : %f", sum, avg);
    return 0;
}
