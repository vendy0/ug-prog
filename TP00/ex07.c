#include <stdio.h>

// Players number verification
int verify_players(int joueurs)
{
    if (joueurs < 2)
    {
        printf("Groupe trop petit\n");
        return 0;
    }
    else if (joueurs > 6)
    {
        printf("Groupe trop grand\n");
        return 0;
    }

    return 1;
}

// Reservation verification
int verify_reservation(int reservation)
{
    if (!reservation)
    {
        printf("Réservation obligatoire\n");
        return 0;
    }

    return 1;
}

// Age verification
void verify_age(int age, int joueurs, int adulte)
{
    if ((age >= 10 && age <= 13) && (adulte && joueurs >= 3))
        printf("Accès autorisé\n");
    else if ((age >= 14 && age <= 17) && (joueurs >= 4 || adulte == 1))
        printf("Accès autorisé\n");
    else if (age >= 18)
        printf("Accès autorisé\n");
    else
        printf("Accès refusé\n");
}

int main(void)
{
    // Variables declaration
    int age = 15;
    int joueurs = 3;
    int adulte = 0;
    int reservation = 1;

    if (!verify_reservation(reservation))
        return 0;

    if (!verify_players(joueurs))
        return 0;
        
    verify_age(age, joueurs, adulte);

    return 0;
}
