#include <stdio.h>


int prim(int n) {
    if (n < 2) 
        return 0;
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) 
            return 0; 
    }
    return 1;
}


void typesir(int lung) {
    int n = 1;         
    int cnt = 0;    

    while (cnt < lung) {

        if (prim(n)) {
            
            for (int i = n; i >= 1; i--) {
                if (cnt < lung) {
                    printf("%d ", i);
                    cnt++;
                }
            }
        }
        else {
            
            if (cnt < lung) {
                printf("%d ", n);
                cnt++;
            }

            
            for (int d = 2; d <= n / 2; d++) {
                if (n % d == 0) {
                    
                    for (int i = 0; i < d; i++) {
                        if (cnt < lung) {
                            printf("%d ", d);
                            cnt++;
                        }
                    }
                }
            }
        }

        n++;
    }
    printf("\n");
}

int main() {
    int nr;
    int opt;

    do {
        
        printf("1. Afiseaza termeni\n");
        printf("0. Iesire\n");
        printf("Optiune: ");
        scanf_s("%d", &opt);

        if (opt == 1) {
            printf("Nr elemente: ");
            scanf_s("%d", &nr);
            typesir(nr);
        }
    } while (opt != 0);

    return 0;
}