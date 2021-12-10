#include <stdio.h>
int main()
    {
    int right=0;
    int mistake=0;
    int number=0;
    char name[20];
    char Word[]={'v','i','r','a','t','k','o','h','l','i'};
    char guessStatus[]={'_','_','_','_','_','_','_','_','_','_','\0'};
    char guess;
    printf("Welcome to Hangman\nWhat is your Name?\n");
    scanf(" %s", name);
    getchar();
    printf("Hello %s!\n",name);
       while (mistake <=10 && number<10)
            {
                printf("Guess a letter: ");
                guess = getchar();
                printf("%c", guess);
                right=0;
                for (int search=0;search<10;search++)
            {
            if (guess==Word[search])
            {
                number++;
                guessStatus[search]=Word[search];
                right=1;
            }
        }
        if (right==0)
            {
            mistake++;
            printf("%c is wrong! \n Your Status is: %s \n You have %i tries left\n", guess,guessStatus,10-mistake);
            }
            else
            {
                printf("Good job %s!\nYour Status is: %s\nYou have %i tries left\n", name,guessStatus,10-mistake);
            }
    }
}
