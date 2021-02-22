#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    char choose;
    unsigned int computer_choose;
    unsigned int player_choose;
    char possible_chooses[3][10] = {"rock", "paper", "scissors"};
    char *computer = NULL;
    char *player = NULL;

    printf("Please choose: rock(r) - paper(p) - scissors(s)\n");
    scanf("%c", &choose);
    srand(time(0));
    computer_choose = rand() % 3;

    switch (choose) {
    case 'r':
        player = "rock";
        player_choose = 0;
        break;
    case 'p':
        player = "paper";
        player_choose = 1;
        break;
    case 's':
        player = "scissors";
        player_choose = 2;
        break;
    default:
        printf("Error! Unexpected symbol inputted!\n");
        return 0;
    }

    computer = possible_chooses[computer_choose];
    printf("You choose %s, I choose %s \n", player, computer);

    if (player_choose == 2 && computer_choose == 0) {
        printf("I win: %s beats %s\n", player, computer);
    }
    else if (player_choose == 0 && computer_choose == 2) {
        printf("You win: %s beats %s\n", player, computer);
        }
    else if (player_choose > computer_choose) {
        printf("You win: %s beats %s\n", player, computer);
    }
    else if (player_choose < computer_choose) {
        printf("I win: %s beats %s\n", player, computer);
    }
    else {
        printf("Draw\n");
    }

    return 0;
}
