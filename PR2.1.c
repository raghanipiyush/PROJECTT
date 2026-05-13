#include <stdio.h>
int main()
{
    int score;
    char grade;

    printf("Enter your score: ");
    scanf("%d", &score);

    grade = (score >= 90) ? 'A' :
            (score >= 80) ? 'B' :
            (score >= 70) ? 'C' :
            (score >= 60) ? 'D' :
            (score >= 50) ? 'E' : 
            'F';

    printf(" your Grade is = %c",grade);
}
/*output
Enter your score: 92
 your Grade is = A
*/
    
