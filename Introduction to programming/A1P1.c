#include <stdio.h>
int main() {
    // Write C code here
    int n,s=0;
    printf("Enter value of n :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        s+=i;
    }
    printf("Sum of first n natural numbers is %d",s);

    return 0;
}