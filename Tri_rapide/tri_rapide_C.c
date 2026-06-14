#include <stdio.h>
#include <stdlib.h> 



int partition(int* tab, int deb, int fin) {
     // On prend le dernier comme pivot
    int pivot = tab[fin];
    // Indice pour placer les éléments plus petits
    int i = deb;
    
    for (int j = deb; j < fin; j++) {
        if (tab[j] < pivot) {
            // On échange l'élément actuel avec celui à l'index i
            int temp = tab[i];
            tab[i] = tab[j];
            tab[j] = temp;
            i++;
        }
    }
    // On place enfin le pivot à sa position définitive (à l'index i)
    int temp = tab[i];
    tab[i] = tab[fin];
    tab[fin] = temp;
    
    return i; 
}



int partition_aleatoire(int* tab, int deb, int fin) {
    // On choisit un indice aléatoire entre deb et fin inclus
    int ind_aleatoire = deb + rand() % (fin - deb + 1);
    
    // On échange le pivot  avec le dernier élément (tab[fin])
    int temp_pivot = tab[ind_aleatoire];
    tab[ind_aleatoire] = tab[fin];
    tab[fin] = temp_pivot;

    // A partir de là on reprend la version classique
    int pivot = tab[fin];
    int i = deb;
    
    for (int j = deb; j < fin; j++) {
        if (tab[j] < pivot) {
            int temp = tab[i];
            tab[i] = tab[j];
            tab[j] = temp;
            i++;
        }
    }
    
    int temp = tab[i];
    tab[i] = tab[fin];
    tab[fin] = temp;
    
    return i; 
}



void quickSort(int* tab, int deb, int fin) {
    if (deb < fin) {

        // On partitionne notre tableau
        int pivot = partition(tab, deb, fin);
        
        /* 
        ou, pour la version randomisé,
        
        int pivot = partition(tab, deb, fin);
        */

        // On résout récursivement sur les sous-tableaux gauche et droit
        quickSort(tab, deb, pivot - 1);
        quickSort(tab, pivot + 1, fin);
    }
}




int main() {
  
    int a[15] = {42, -5, 12, 0, 89, 12, 3, 71, -5, 18, 56, 23, 9, 100, 34};
    int n = 15;
    // Taille de a
    quickSort(a, 0, n-1);

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}