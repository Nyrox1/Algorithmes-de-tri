#include <stdio.h>



void tri_insertion(int* t, int n) {
    // On commence à 1 car un tableau d'un seul élément est déjà trié
    for (int i = 1; i < n; i++) {
        int cle = t[i]; // L'élément à insérer
        int j = i - 1;

        // On décale les éléments de t[0..i-1] qui sont plus grands que la clé
        while (j >= 0 && t[j] > cle) {
            t[j + 1] = t[j];
            j--;
        }
        // On insère la clé à sa place finale
        t[j + 1] = cle;
    }
}



int main() {
    int a[13] = {42, 12, 89, 12, 3, 71, -5, 18, 56, 23, 9, 100, 34};
    int n = 13;

    printf("Avant le tri par insertion :\n");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n\n");

    tri_insertion(a, n);

    printf("Apres le tri par insertion :\n");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");

    return 0;
}