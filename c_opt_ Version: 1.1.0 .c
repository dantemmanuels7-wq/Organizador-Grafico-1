   Versión: 1.1.0
   Código optimizado: prueba divisores solo hasta sqrt(m)
   y elimina ramas redundantes.
*/

#include <stdio.h>

int main() {

    int N = 1000;
    int count_primos = 0;
    long long suma_primos = 0;
    int primos_pares = 0;
    int primos_impares = 0;

    for (int m = 2; m <= N; m++) {

        int es_primo = 1;

        for (int d = 2; d * d <= m; d++) {
            if (m % d == 0) {
                es_primo = 0;
                break;
            }
        }

        if (es_primo) {
            count_primos++;
            suma_primos += m;

            if (m % 2 == 0)
                primos_pares++;
            else
                primos_impares++;
        }
    }

    printf("Primos encontrados: %d\n", count_primos);
    printf("Suma de primos: %lld\n", suma_primos);
    printf("Primos pares: %d\n", primos_pares);
    printf("Primos impares: %d\n", primos_impares);

    return 0;
}
