#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// clang-format off
#define REPEAT(A, N) { for (int i = 0; i < (N); i++) printf(A); }
// clang-format on

void empty_buffer(void)
{
    while (getchar() != '\n')
    {}
}

int digit_number(double nbr)
{
    return 0;
}

char ask_yes_or_no(char* text)
{
    do
    {
        char c;
        printf("%s ", text);
        scanf("%c", &c);
        empty_buffer();

        if( c == 'y' || c == 'n' )
            return c;

        printf("Erreur, veuillez recommencer\n");
    } while (true);
}

int ask_int(char* text, int min_val, int max_val)
{
    int choice = 0;
    bool correct = false;

    do
    {
        correct = true;
        printf("%s ", text);
        if( scanf("%d", &choice) != 1 || choice < min_val || choice > max_val ){
                correct = false;
                printf("Wrong input..\n");
        };
        empty_buffer();

    } while (!correct);

    printf("\n");

    return choice;
}

int menu()
{
    puts("\nVeuillez choisir une option :\n");
    puts("\t1. Table de multiplication");
    puts("\t2. Version");
    puts("\t0. Quitter");

    return ask_int(">", 0, 3);
}

int main()
{
    do
    {
        const int menu_choice = menu();

        switch (menu_choice)
        {
            case 0:
                break;
            case 1:
                break;
            default:
                break;
        }

        ask_yes_or_no("Voulez vous... [y/n]");

    } while (true);

    return 0;
}