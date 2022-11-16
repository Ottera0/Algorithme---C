#include <stdio.h>
#include <string.h>

//aide openclassroom
int main(){

    //Creation dela structure etudiant
    struct Etudiant{
        char nom[20];
        char prenom[20];
        char adresse[20];
        int noteC;
        int noteSE;
    };

    //Initialisation du tableau dans la structure
    struct Etudiant tableau[5];

    //Remplissage du tableau pour le 1er etudiant
    strcpy(tableau[0].nom, "Pelle");
    strcpy(tableau[0].prenom, "Teuse");
    strcpy(tableau[0].adresse, "1, Rue du gravat");
    tableau[0].noteC = 15;
    tableau[0].noteSE = 3;

    //Remplissage du tableau pour le 2eme etudiant
    strcpy(tableau[1].nom, "Abbe");
    strcpy(tableau[1].prenom, "toniere");
    strcpy(tableau[1].adresse, "2, Rue du clocher");
    tableau[1].noteC = 7;
    tableau[1].noteSE = 13;

    //Remplissage du tableau pour le 3eme etudiant
    strcpy(tableau[2].nom, "Toit");
    strcpy(tableau[2].prenom, "Ture");
    strcpy(tableau[2].adresse, "3, Avenue du ciel");
    tableau[2].noteC = 10;
    tableau[2].noteSE = 10;

    //Remplissage du tableau pour le 4eme etudiant
    strcpy(tableau[3].nom, "Pere");
    strcpy(tableau[3].prenom, "Fusion");
    strcpy(tableau[3].adresse, "4, Boulevard du sang");
    tableau[3].noteC = 12;
    tableau[3].noteSE = 13;

    //Remplissage du tableau pour le 5eme etudiant
    strcpy(tableau[4].nom, "Mere");
    strcpy(tableau[4].prenom, "Cedes");
    strcpy(tableau[4].adresse, "5, Rue du chauffard");
    tableau[4].noteC = 17;
    tableau[4].noteSE = 3;

    //Boucle pour afficher les etudiants et leurs informations respectives
    for(int i = 0; i < 5; i++){
        printf("\nEtudiant %d : %s %s", i+1, tableau[i].nom, tableau[i].prenom);
        printf("\n%s", tableau[i].adresse);
        printf("\nProgrammation en C : %d\nSysteme d'exploitation : %d\n", tableau[i].noteC, tableau[i].noteSE);
    }
    return 0;
}
