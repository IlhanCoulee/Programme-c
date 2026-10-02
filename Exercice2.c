//*****************************
//       activité 1
//*****************************
#include <stdio.h>

int main()
{
        int age = 17;

    printf("\nAge : %d\n", age);

//*****************************
//       activité 2
//*****************************

    char initiale = 'I';
    float taille = 1.75;

    printf("\n--- Mes informations ---\n");
    printf("Age : %d ans\n", age);
    printf("Taille : %.2f m\n", taille);
    printf("Initiale : %c\n", initiale);

//*****************************
//       EXERCICE 1
//*****************************

    int nombre1 = 10;
    int nombre2 = 5;
    int somme = nombre1 + nombre2;

    printf("\n--- Exercice 1 ---\n");
    printf("Somme : %d\n", somme);

//*****************************
//       EXERCICE 2
//*****************************

    int a = 20;
    int b = 4;

    printf("\n--- Exercice 2 ---\n");
    printf("Addition : %d\n", a + b);
    printf("Soustraction : %d\n", a - b);
    printf("Multiplication : %d\n", a * b);
    printf("Division : %d\n", a / b);

//*****************************
//       EXERCICE 3
//*****************************

    float temperature = 20.5;

    printf("\n--- Exercice 3 ---\n");
    printf("Temperature : %.2f degres Celsius\n", temperature);

//*****************************
//       EXERCICE 4
//*****************************

    int longueur = 10;
    int largeur = 5;
    int aire = longueur * largeur;

    printf("\n--- Exercice 4 ---\n");
    printf("Longueur : %d\n", longueur);
    printf("Largeur : %d\n", largeur);
    printf("Aire : %d\n", aire);

//*****************************
//       EXERCICE 5
//*****************************

    int perimetre = 2 * (longueur + largeur);

    printf("\n--- Exercice 5 ---\n");
    printf("Perimetre : %d\n", perimetre);

//*****************************
//       EXERCICE 6
//*****************************

    float note1 = 15;
    float note2 = 17;
    float note3 = 18;
    float moyenne = (note1 + note2 + note3) / 3;

    printf("\n--- Exercice 6 ---\n");
    printf("Note 1 : %.2f\n", note1);
    printf("Note 2 : %.2f\n", note2);
    printf("Note 3 : %.2f\n", note3);
    printf("Moyenne : %.2f\n", moyenne);

//*****************************
//       EXERCICE 7
//*****************************

    float prixHTVA = 100;
    float tauxTVA = 21;
    float prixTVAC = prixHTVA + (prixHTVA * tauxTVA / 100);

    printf("\n--- Exercice 7 ---\n");
    printf("Prix HTVA : %.2f euros\n", prixHTVA);
    printf("TVA : %.2f %%\n", tauxTVA);
    printf("Prix TVAC : %.2f euros\n", prixTVAC);

//*****************************
//       EXERCICE 8
//*****************************

    float salaireMensuel = 2000;
    float salaireAnnuel = salaireMensuel * 12;

    printf("\n--- Exercice 8 ---\n");
    printf("Salaire mensuel : %.2f euros\n", salaireMensuel);
    printf("Salaire annuel : %.2f euros\n", salaireAnnuel);

//*****************************
//       EXERCICE 9
//*****************************

    float kilometres = 5;
    float metres = kilometres * 1000;

    float heures = 2;
    float minutes = heures * 60;

    printf("\n--- Exercice 9 ---\n");
    printf("%.2f km = %.2f metres\n", kilometres, metres);
    printf("%.2f heures = %.2f minutes\n", heures, minutes);

//*****************************
//       DÉFI
//*****************************

    float math = 15;
    float francais = 17;
    float sciences = 18;
    float moyenneBulletin = (math + francais + sciences) / 3;

    printf("\n**************************\n");
    printf("******** BULLETIN ********\n");
    printf("**************************\n");
    printf("Math : %.0f\n", math);
    printf("Francais : %.0f\n", francais);
    printf("Sciences : %.0f\n", sciences);
    printf("Moyenne : %.2f\n", moyenneBulletin);
    printf("**************************\n");

    return 0;
}