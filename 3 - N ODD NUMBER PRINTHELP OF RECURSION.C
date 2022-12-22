#include<stdio.h>
void odd(int n)
{
    if(n==0)
        return;
    odd(n-1);
    if(n%2==0)
    printf("%d ",n-1);
}
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    odd(n);
    return 0;
}
