#include <stdio.h>
int main() {
    int n,i=1,p=1;
    printf("Enter value of n :");
    scanf("%d",&n);
    do 
    {
        p*=i;
        i++;
    }while(i<=n);
    printf("Factorial of %d is %d",n,p);
    return 0;
}