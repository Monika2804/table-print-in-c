#include<stdio.h>
int main()
{
	int a,i = 1;
	printf("Enter any number you want to multiplication table: ");
	scanf("%d", &a);
	printf("multiplication table = %d\n",a);
	do
	{
		printf("%d*%d = %d\n",a,i,(a*i));
		i++;
	}
	while(i<=10);
	return 0;
}
	
