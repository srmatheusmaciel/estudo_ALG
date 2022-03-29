/* 

APS ALGORITMOS II
QUESTÃO 2

DESENVOLVIDO POR: MATHEUS DE OLIVEIRA MACIEL (2021200020)
Ygor Borges Vailant
Luiz Felipe de S. Santos


 */



#include <stdio.h>
#include <locale.h>
int main() {
	
setlocale (LC_ALL, " " );
    int par, impar, i, vetDigitado[10], x[10], y[10];
    par = 0;
    impar = 0;
printf ( " ==============*** UNICARIOCA - APS ALGORITMOS II PROFESSOR: MANUEL MARTINS ***============= \n\n " );
printf ( " ============== DESENVOLVIDO POR: MATHEUS MACIEL / YGOR BORGES / LUIZ FELIPE ============= \n\n " );
printf ( " ==============********************************************************************============= \n\n " );
printf ( " ============== PROGRAMA QUE VERIFICA PARES E IMPARES DE UM VETOR DE 10 POSICOES ============= \n\n " );
    for (i = 0; i < 10; i++) {
        printf("\nDigite o %d.o numero: ", i + 1);
        scanf("%d%*c", &vetDigitado[i]);

        if (vetDigitado[i] % 2 == 0) {
            x[par] = vetDigitado[i];
            par++;
        }
        else {
            y[impar] = vetDigitado[i];
            impar++;
        }
    }
	
    printf("\nVetor Par:\n");
    for (i = 0; i < par; i++) {
        printf("%d\n", x[i]);
    }

    printf("\nVetor Impar:\n");
    for (i = 0; i < impar; i++) {
        printf("%d\n", y[i]);
    }
    return 0;
}
