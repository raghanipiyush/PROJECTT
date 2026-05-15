#include<stdio.h>
int main()
{
	int num, first, last, sum;
	printf("enter any number :");
	scanf("%d", &num);
	
	last = num % 10;
	while(num >= 10){
		num = num /10;
	}
	first = num;
	sum = first + last;
	
	printf("first digit = %d ",first);
	printf("last digit = %d ",last);
	printf("sum = %d ", sum);
}
/*output
enter any number :384
first digit = 3 last digit = 4 sum = 7
*/