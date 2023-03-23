#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float raioAlvo, raioTiro;
    int centroAlvoX, centroAlvoY, centroTiroX, centroTiroY, distCentros;

    printf("Raio do alvo: ");
    scanf("%f", &raioAlvo);

    printf("Coordenadas do centro do alvo (x, y): ");
    scanf("%d, %d", &centroAlvoX, &centroAlvoY);

    printf("Raio do tiro: ");
    scanf("%f", &raioTiro);

    printf("Coordenadas do centro do tiro (x, y): ");
    scanf("%d, %d", &centroTiroX, &centroTiroY);

    distCentros = pow(abs(centroTiroX - centroAlvoX), 2) + pow(abs(centroTiroY - centroAlvoY), 2);
    distCentros = sqrt(distCentros);

    if(distCentros >= (raioAlvo + raioTiro)){
        printf("Colisão não detectada\n");
    }
    else {
        printf("Colisão detectada\n");
    }

    return 0;
}