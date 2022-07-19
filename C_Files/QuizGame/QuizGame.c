#include <stdio.h>
#include <ctype.h>

int main()
{
    char questions[][100] = {   "1. Fav Color?", 
                                "2. Fav Dog?",
                                "3. Where You from?"};
    char options[][100] = { "A. Pink", "B. Magenta", "C. Blue", "D. Black",
                            "A. Oscar", "B. Daisy", "C. Roscoe", "D. Turbo",
                            "A. OR", "B. LA", "C. CA", "D. IL"};
    char answers[3] = {'A', 'A', 'C'};

    int numberOfQuestions = sizeof(questions)/sizeof(questions[0]);

    char guess;
    int score;

    printf("QUIZ GAME\n\n");

    for(int i = 0; i < numberOfQuestions; i++)
    {
        printf("\n");
        printf("%s\n", questions[i]);

        for(int j = (i * 4); j < (i * 4) + 4; j++) 
        {

        printf("%s\n", options[j]);
        }

        printf("guess: ");
        scanf("%c", &guess);
        scanf("%c");  //clear \n from input buffer

        guess = toupper(guess);

        if(guess == answers[i])
        {
            printf("Correct!\n");
            score++;

        }
        else 
        {
            printf("Wrong!\n");

        }
    }

    printf("FINAL SCORE: %d/%d\n", score, numberOfQuestions);
    return 0;
}