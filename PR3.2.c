#include<stdio.h>
int main()
{
	int num, count = 0;
	printf("enter any number : ");
	scanf("%d" ,&num);
	
	while(num != 0){
		num = num /10;
		count++;
	}
	printf("total numbers of digits : %d" ,count);

}
/*output
enter any number : 752
total numbers of digits : 3
*/