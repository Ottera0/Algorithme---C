#include <stdio.h>

int main(){
    
    //Initialisation des tableaux et remplissage
    char* tableau[5][5] = {{"Pelle", "Teuse", "1, Rue du gravat", "15", "3"},
                           {"Abbe", "toniere", "2, Rue du clocher", "7", "13"},
                           {"Toit", "Ture", "3, Avenue du ciel", "10", "10"},
                           {"Pere", "Fusion", "4, Boulevard du sang", "12", "13"},
                           {"Mere", "Cedes", "5, Rue du chauffard", "17", "3"}};

    //Boucle pour afficher les etudiants et leurs informations respectives
    for(int i = 0; i < 5; i++){
        printf("eEudiant %d : %s %s\n %s\nProgrammation en C : %s\nSysteme d'exploitation : %s\n\n", i+1, tableau[i][0], tableau[i][1], tableau[i][2], tableau[i][3], tableau[i][4]);
    }
    return 0;

}