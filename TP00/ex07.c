#include <stdio.h>

int main(void){
    // Variables declaration
    int age = 15;
    int joueurs = 3;
    int adulte = 0;
    int reservation = 1;

    // Reservation verification
    if (!reservation)
    {
        printf("Réservation obligatoire\n");
        return 0;
    }
    
    // Players number verification
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
    
    // Age verification
    if ((age >= 10 && age <= 13) && (adulte && joueurs >= 3))
        printf("Accès autorisé\n");
    else if ((age >= 14 && age <= 17) && (joueurs >= 4 || adulte == 1))
            printf("Accès autorisé\n");
    else if (age > 18)
        printf("Accès autorisé\n");
    else
        printf("Accès refusé\n");

    return 0;
}