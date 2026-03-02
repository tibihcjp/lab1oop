#include <stdio.h>

/*
    calculeaza termenul urmator al sumei partiale 
    preconditii: n>1
    postconditii: returneaza urmatorul termen al sumei partiale
*/
double calcTerm(double termen, double x, int n) {
    double factor = -(x * x) / ((2 * n - 2) * (2 * n - 1));
    return termen * factor;
}
/*
   afiseaza n sume partiale
   preconditii: n>1
   postconditii: afiseaza n sume partiale

*/
void sumpart(double x, int n) {
    double suma = x;      
    double termen = x;   

    printf("Suma1 = %f\n", suma);

    for (int i = 2; i <= n; i++) {
        termen = calcTerm(termen, x, i);
        suma += termen;
        printf("Suma%d = %f\n", i, suma);
    }

    
}

int main() {
    int opt, n;
    double x;

    do {
        
        printf("1. Calculeaza aproximari\n");
        printf("0. Exit\n");
        printf("Alege optiunea: ");
        scanf_s("%d", &opt);

        if (opt == 1) {
            printf("Introdu x: ");
            scanf_s("%lf", &x);
            printf("Introdu nr de sume partiale: ");
            scanf_s("%d", &n);
            sumpart(x, n);
            
        }
    } while (opt != 0);

    return 0;
}