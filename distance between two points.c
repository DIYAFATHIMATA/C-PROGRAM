#include<stdio.h>
int main()
{
	int a,b,c,d,distance;
	printf("Enter the coordinates of the first point:");
	scanf("%d %d",&a,&b);
	printf("Enter the coordinates of the second point:");
	scanf("%d %d",&c,&d);
	distance=sqrt((c-a)*(c-a)+(d-b)*(d-b));
	printf("Distance between the point is %d",distance);
	return 0;
}


