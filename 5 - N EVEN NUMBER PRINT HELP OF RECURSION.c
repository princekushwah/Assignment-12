#include<stdio.h>
void even(int n)
{
    if(n==0)
        return;
    even(n-1);
    if(n%2==0)
    printf("%d ",n);
}
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    even(n);
    return 0;
}
