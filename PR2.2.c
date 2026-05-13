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
            (score >= 60) ? 'D' : 'F';

    printf("your Grade is = %c.", grade);
      switch(grade)
    {
        case 'A':
            printf("Excellent Work");
            break;
        case 'B':
            printf("Well Done");
            break;
        case 'C':
            printf("Good Job");
            break;
        case 'D':
            printf("You passed, but you could do better");
            break;
        case 'F':
            printf("Sorry, you failed");
            break;
        default:
            printf("Invalid ");
    }
}
/*output
Enter your score: 92
your Grade is = A.Excellent Work

*/
   
