#include <stdio.h>
int main()
{
    int score;
    char grade;

    printf("Enter your score: ");
    scanf("%d", &score);

    grade = (score >= 85) ? 'A' :
            (score >= 80) ? 'B' :
            (score >= 70) ? 'C' :
            (score >= 60) ? 'D' : 'F';

    printf("your Grade is = %c.", grade);

    switch(grade)
    {
        case 'A':
            printf("Excellent Work!\n");
            break;
        case 'B':
            printf("Well Done\n");
            break;
		case 'C':
            printf("Good Job\n");
            break;
        case 'D':
            printf("You passed, but you could do better\n");
            break;
        case 'F':
            printf("Sorry, you failed\n");
            break;
        default:
            printf("Invalid \n");
    }
        if(grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D')
    {
        printf(" You are eligible for the next level");
    }
    else
    {
        printf("Please try again next time");
    }
}
/*output
Enter your score: 85
your Grade is = A.Excellent Work!
 You are eligible for the next level
*/
    
