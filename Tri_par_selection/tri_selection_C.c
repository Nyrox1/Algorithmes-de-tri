#include <stdio.h>



void tri_selection(int* t, int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i; // min ← i
        
        for (int j = i + 1; j < n; j++) {
            if (t[j] < t[min]) { // Si t[j] < t[min]
                min = j;         // min ← j
            }
        }
        
        // Si min ≠ i, alors on échange t[i] et t[min]
        if (min != i) {
            int temp = t[i];
            t[i] = t[min];
            t[min] = temp;
        }
    }
}



int main() {
    int a[13] = {42, 12, 0, 89, 3, 71, -5, 18, 56, 23, 9, 100, 34};
    int n = 13;

    printf("Avant le tri par selection :\n");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n\n");

    tri_selection(a, n);

    printf("Apres le tri par selection :\n");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");

    return 0;
}