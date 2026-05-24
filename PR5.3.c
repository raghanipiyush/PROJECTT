#include <stdio.h>
int main()
{
    int a[10][10], row, col, i, j;

    printf("Enter the array's row & column size: ");
    scanf("%d%d", &row, &col);

    printf("Enter array's elements:\n");

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
        printf("The transpose matrix of an array:\n");

    for(i = 0; i < col; i++)
    {
        for(j = 0; j < row; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}
/*outout
Enter the array's row & column size: 3
3
Enter array's elements:
a[0][0] = 2
a[0][1] = 4
a[0][2] = 1
a[1][0] = 3
a[1][1] = 5
a[1][2] = 4
a[2][0] = 8
a[2][1] = 2
a[2][2] = 6
The transpose matrix of an array:
2 3 8
4 5 2
1 4 6
*/