#include <stdio.h>

void prikazNiza(int niz[], int n);

int main() {
    int niz[]={1,2,3,4,5};
    int n=sizeof(niz)/sizeof(int);
    prikazNiza(niz, n);

    return 0;
}

void prikazNiza(int niz[], int n) {
    printf("Niz je: ");
    for (int i=0; i<n; i++) {
        printf("%3d", niz[i]);
    }
}