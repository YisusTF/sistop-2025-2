#include <stdio.h>
#include <omp.h>

#define N 1000

int main() {
    int array[N];
    int sum = 0;
    
    // Inicializar el arreglo
    for (int i = 0; i < N; i++) {
        array[i] = i + 1;
    }
    
    // Calcular la suma en paralelo
    #pragma omp parallel for reduction(+:sum)
    for (int i = 0; i < N; i++) {
        sum += array[i];
    }
    
    printf("Suma total: %d\n", sum);
    return 0;
}
