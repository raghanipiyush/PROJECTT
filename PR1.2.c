#include <stdio.h>
int main()

{


    float basic, hra, da, ta, gross;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    printf("Enter HRA Percentage: ");
    scanf("%f", &hra);

    printf("Enter DA Percentage: ");
    scanf("%f", &da);

    printf("Enter TA Percentage: ");
    scanf("%f", &ta);
     gross = basic +
            (basic * hra / 100) +
            (basic * da / 100) +
            (basic * ta / 100);

    printf("Gross Salary = %.2f", gross);
}
    

/*output
Enter Basic Salary: 200
Enter HRA Percentage: 10
Enter DA Percentage: 5
Enter TA Percentage: 8
Gross Salary = 246.00
*/