#include<stdio.h>
int main()
{
	int a,reverse;
	printf("Enter a number:");
	scanf("%d",&a);
    reverse=(a%10)*10+(a/10);
	printf("Reversed number is %d",reverse);
}
