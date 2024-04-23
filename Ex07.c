// Ex 07

#include <stdio.h>

int divisiveis(int arr[], int tam, int x) {
    if (tam == 0) {
        return 0;
    }
    return (arr[0] % x == 0) + divisiveis(arr + 1, tam - 1, x);
}

int main() {
    int array[] = {13, 20, 75, 120};
    int divisor = 5;
    int resultado = divisiveis(array, sizeof(array) / sizeof(array[0]), divisor);
    printf("%d\n", resultado); 
    return 0;
}