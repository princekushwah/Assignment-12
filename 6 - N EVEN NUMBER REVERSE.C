#include<stdio.h>
void rev(int n)
{
    if(n==0)
        return;
    if(n%2==0)
        printf("%d ",n);
    rev(n-1);
}
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    rev(n);
    return 0;

}
