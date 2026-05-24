#include <stdio.h>
int main()
{
    int a[10][10], row, col, i, j;
    int rowNo, colNo;
    int rowSum = 0, colSum = 0;

    printf("Enter the array's row size: ");
    scanf("%d", &row);

    printf("Enter the array's column size: ");
    scanf("%d", &col);

    printf("Enter array's elements:\n");

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter row number: ");
    scanf("%d", &rowNo);

    printf("Elements of row %d: ", rowNo);

    for(j = 0; j < col; j++)
    {
        printf("%d ", a[rowNo][j]);
        rowSum = rowSum + a[rowNo][j];
    }

    printf("\nThe sum of row %d: %d\n", rowNo, rowSum);

    printf("\nEnter column number: ");
    scanf("%d", &colNo);

    printf("Elements of column %d: ", colNo);

    for(i = 0; i < row; i++)
    {
        printf("%d ", a[i][colNo]);
        colSum = colSum + a[i][colNo];
    }

    printf("\nThe sum of column %d: %d", colNo, colSum);
}

/*output
Enter the array's row size: 3
Enter the array's column size: 3
Enter array's elements:
a[0][0] = 2
a[0][1] = 7
a[0][2] = 1
a[1][0] = 3
a[1][1] = 5
a[1][2] = 4
a[2][0] = 8
a[2][1] = 9
a[2][2] = 6

Enter row number: 0
Elements of row 0: 2 7 1
The sum of row 0: 10

Enter column number: 2
Elements of column 2: 1 4 6
The sum of column 2: 11
*/