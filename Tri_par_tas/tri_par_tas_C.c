#include <stdio.h>



// Fonction pour maintenir la propriété de tas max
void tas_max(int* t, int n, int i) {
    // Un sommet doit être plus grand que ses fils
    int max = i;          
    int fils_gauche = 2 * i + 1; 
    int fils_droit = 2 * i + 2; 

    // Si le fils gauche est plus grand que la racine
    if (fils_gauche < n && t[fils_gauche] > t[max]) {
        max = fils_gauche;
    }

    // Si le fils droit est plus grand que le nouveau max
    if (fils_droit < n && t[fils_droit] > t[max]) {
        max = fils_droit;
    }

    // Si le max n'est pas la racine, on échange et on continue récursivement
    if (max != i) {
        int temp = t[i];
        t[i] = t[max];
        t[max] = temp;

        tas_max(t, n, max);
    }
}



void tri_par_tas(int* t, int n) {
    // Construction du tas
    for (int i = n- 1; i >= 0; i--) {
        tas_max(t, n, i);
    }

    // On extrait un par un les éléments du tas
    for (int i = n - 1; i > 0; i--) {
        // On déplace la racine (le plus grand élément) à la fin du tableau
        int temp = t[0];
        t[0] = t[i];
        t[i] = temp;

        tas_max(t, i, 0);
    }
}



int main() {
    int a[13] = {42, 0, 89, 12, 3, 71, -5, 18, 56, 23, 9, 100, 34};
    int n = 13;

    printf("Avant le tri par tas :\n");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n\n");

    tri_par_tas(a, n);

    printf("Après le tri par tas :\n");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");

    return 0;
}