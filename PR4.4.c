#include<stdio.h>
int main()
{
	int i, j, space;
	for(i = 5; i >= 1; i--)
	{
		for(space = 5; space > i; space--){
			printf("  ");
		}
		for(j = 1; j<= i; j++)
		{
			printf("%d ", j % 2);
		}
		printf("\n");
	}
}
/*output
1 0 1 0 1
  1 0 1 0
    1 0 1
      1 0
        1

*/