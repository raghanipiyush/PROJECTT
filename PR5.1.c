#include <stdio.h>
int main()
{
    int a[100], n, i;

    printf("Enter the array size: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Negative elements from an Array: ");

    for(i = 0; i < n; i++)
    {
        if(a[i] < 0)
        {
            printf("%d ", a[i]);
        }
    }
}
/*output
Enter the array size: 5
Enter array elements:
a[0] = 2
a[1] = -4
a[2] = 1
a[3] = -3
a[4] = -5
Negative elements from an Array: -4 -3 -5
*/