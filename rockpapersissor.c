#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int randomNumberGenrator(int n)
{

    srand(time(NULL));

    return rand() % n;
}

int greaterScore(char c1, char c2)
{
    if( (c1 == 'r' && c2 == 's') || (c1 == 'p' && c2 == 'r') || (c1 == 's' && c2 == 'p')){
        return 1;
    }

    else if((c1 == 's' && c2 == 'r') || (c1 == 'r' && c2 == 'p') || (c1 == 'p' && c2 == 's')){
        return 0;
    }
    else if((c1 == 's' && c2 == 's') || (c1 == 'r' && c2 == 'r') || (c1 == 'p' && c2 == 'p')){
        return 0;
    }
}

int main()
{

    int p1Score = 0, compScore = 0, i, temp;
    char player1, comp;
    char game[] = {'r', 's', 'p'};

    printf("Welcome to the Rock, Papper, Sissors Game....\n\n");
    for (i = 0; i < 3; i++)
    {
        printf("Player1's turn , Please choose an option :\n");
        printf("Choose 1 for Rock , 2 for Papper, 3 for Sissors\n");
        scanf("%d", &temp);
        getchar();
        player1 = game[temp - 1];
        printf("You choose : %c\n\n", player1);

        printf("CPU's turn , Please choose an option :\n");
        temp = randomNumberGenrator(3) + 1;
        comp = game[temp - 1];
        printf("CPU choose : %c\n\n", comp);

        if (greaterScore(comp, player1) == 1)
        {
            compScore = +1;
        }
        else if (greaterScore(comp, player1) == -1)
        {
            compScore = 0;
            p1Score = 0;
        }
        else
        {
            p1Score += 1;
        }
    }

    if(p1Score > compScore){
        printf("You WIN :%d" ,p1Score );
    }
    else if(p1Score < compScore){
        printf("CPU WINS : %d",compScore);

    }
    else{
        printf("It's a draw!!!");
    }
}
