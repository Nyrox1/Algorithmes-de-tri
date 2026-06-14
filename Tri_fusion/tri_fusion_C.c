#include <stdio.h>
#include <stdlib.h>
#include <assert.h>



void fusion(int* tab, int deb, int milieu, int fin) {
    int* temp = malloc(sizeof(int) * (fin - deb + 1));

    int i = deb;        // Indice sous-tableau gauche
    int j = milieu + 1; // Indice sous-tableau droit
    int k = 0;          // Indice tableau temporaire

    // On compare et on remplit temp
    while (i <= milieu && j <= fin) {
        if (tab[i] <= tab[j]) {
            temp[k] = tab[i];
            i++;
        } else {
            temp[k] = tab[j];
            j++;
        }
        k++;
    }

    // Copie des restes de gauche
    while (i <= milieu) {
        temp[k] = tab[i];
        i++;
        k++;
    }

    // Copie des restes de droite
    while (j <= fin) {
        temp[k] = tab[j];
        j++;
        k++;
    }

    // On recopie le tableau trié temp dans tab sans oublier le décalage
    for (int m = 0; m < taille_temp; m++) {
        tab[deb + m] = temp[m];
    }

    free(temp);
}



void triFusion(int* tab, int deb, int fin) {
    if (deb < fin) {
        int milieu = deb + (fin - deb) / 2;

        triFusion(tab, deb, milieu);
        triFusion(tab, milieu + 1, fin);

        fusion(tab, deb, milieu, fin);
    }
}



int main() {
    int a[15] = {42, -5, 12, 0, 89, 12, 3, 71, -5, 18, 56, 23, 9, 100, 34};
    int n = 15;

    printf("Tableau avant le tri fusion :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n\n");

    triFusion(a, 0, n - 1);

    printf("Tableau apres le tri fusion :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}