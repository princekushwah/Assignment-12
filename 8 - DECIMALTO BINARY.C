#include<stdio.h>
void con(int n)
{
    if(n==0)
        return;

    con(n/2);
    printf("%d ",n%2);

}
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    con(n);
    return 0;
}
