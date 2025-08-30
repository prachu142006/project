#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int greater(char char1, char char2)
{
    if (char1 == char2)
    {
        return -1;
    }
    if ((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }
    else if ((char2 == 'r') && (char1 == 's'))
    {
        return 0;
    }
    if ((char1 == 'p') && (char2 == 'r'))
    {
        return 1;
    }
    else if ((char2 == 'p') && (char1 == 'r'))
    {
        return 0;
    }
    if ((char1 == 's') && (char2 == 'p'))
    {
        return 1;
    }
    else if ((char2 == 's') && (char1 == 'p'))
    {
        return 0;
    }
}

int main()
{ 
    char playerchar, compchar;
    int playerscore = 0, compscore= 0, temp;
    char dict[] = {'r', 'p', 's'};

    printf("Welcome to the Rock,Paper,Scissors.\n");

    for (int i = 0; i < 3; i++)
    {
        printf("Player 1's Turn:\n");
        printf("Choose 1 for Rock, 2 for paper and 3 for scissors\n");
        scanf("%d", &temp);
        getchar();
        playerchar = dict[temp - 1];
        printf("You choose %c\n", playerchar);

        printf("computer's Turn:\n");
        printf("Choose 1 for Rock, 2 for paper and 3 for scissors\n");
        temp = generateRandomNumber(3) + 1;
        compchar = dict[temp - 1];
        printf("cpu choose %c\n", compchar);

        if (greater(compchar, playerchar) == 1)
        {
            compscore += 1;
            printf("cpu got it\n");
        }
        else if (greater(compchar, playerchar) == -1)
        {
            compscore += 1;
            playerscore += 1;
            printf("its a draw\n");
        }
        else
        {
            playerscore += 1;
            printf("You got it\n");
        }
        printf("you:%d\ncpu: %d\n\n", playerscore, compscore);
    }
    if (playerscore > compscore)
    {
        printf("You win!!\n");
    }
    else if (playerscore < compscore)
    {
        printf("cpu win!\n");
    }
    else
    {
        printf("it's a draw\n");
    }
    return 0;
}