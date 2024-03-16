#include <stdio.h>
#include "matematica.h"

int main() {
    float angulo = 1.0; // Ângulo em radianos

    printf("Seno de %.2f radianos: %.2f\n", angulo, calcular_seno(angulo));
    printf("Cosseno de %.2f radianos: %.2f\n", angulo, calcular_cosseno(angulo));
    printf("Tangente de %.2f radianos: %.2f\n", angulo, calcular_tangente(angulo));

    return 0;
}
