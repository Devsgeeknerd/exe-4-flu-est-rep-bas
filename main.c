#include <stdio.h>
#include <stdlib.h>

void main()
{
    float nota1;
    float nota2;
    float media;
    char repetir;

    do
    {
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);

        while (nota1 < 0 || nota1 > 10)
        {
            printf("Digite uma nota entre 0 e 10: ");
            scanf("%f", &nota1);
        }

        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        while (nota2 < 0 || nota2 > 10)
        {
            printf("Digite uma nota entre 0 e 10: ");
            scanf("%f", &nota2);
        }

        media = (nota1 + nota2) / 2;

        printf("A media das notas e: %0.2f", media);

        printf("\nDeseja repetir o calculo? [S/N]");
        fflush(stdin);
        scanf("%c", &repetir);

    } while ((repetir == 'S') || (repetir == 's'));
    return 0;
}
