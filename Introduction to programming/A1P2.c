#include <stdio.h>
int main() {
    int n,i=1;
    printf("Enter value of n :");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d * %d = %d\n",n,i,n*i);
        i++;
    }
    return 0;
}