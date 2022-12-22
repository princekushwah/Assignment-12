#include<stdio.h>
#include<math.h>
int OctalToDecimal(int n)
{
    static int decimal = 0, sem = 0;
    if(n!=0)
    {
    decimal=decimal+(n%10)*pow(8,sem);
    sem++;
    OctalToDecimal(n/10);
    }
   return decimal;
}
int main()
{
    int n;
    printf("Enter the Octal Value:");
    scanf("%d",&n);
    printf("Decimal Value of Octal number is: %d",OctalToDecimal(n));
}
