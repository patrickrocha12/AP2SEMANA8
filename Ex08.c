// Ex 08

#include <stdio.h>

int divisiveis(int v[], int tam, int x) {
    if (tam == 0) {
        return 0;
    }
    if (v[0] % x == 0) {
        return v[0] + divisiveis(v + 1, tam - 1, x);
    } else {
        return divisiveis(v + 1, tam - 1, x);
    }
}

int main() {
    int v[] = {13, 20, 75, 120};
    int divisor = 5;
    int resultado = divisiveis(v, sizeof(v) / sizeof(v[0]), divisor);
    printf("%d\n", resultado);  
    return 0;
}