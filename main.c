#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*****
Codado por Pedro Henrique Borges - Engenharia da Computação 1º Periodo IFTM UBERABA

Foi feita uma pesquisa com um grupo de alunos de uma universidade, na
qual se perguntou para cada aluno o número de vezes que utilizou o restaurante da
universidade no último mês. Construa um algoritmo que determine:
a) O percentual de alunos que utilizaram menos que 10 vezes o restaurante;
b) O percentual de alunos que utilizaram entre 10 e 15 vezes;
c) O percentual de alunos que utilizaram o restaurante acima de 15 vezes.
Ex.: 2, 3, 11, 12, 21, 22, 23 = a) 28%; b) 28%; c) 42%

*****/

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i, vez, alunos, menos10 = 0, entre10e15 = 0, acima15 = 0;
    float porcento10, porcento15, porcentoacima;

    printf("Quantos alunos têm no grupo pesquisado? ");
    scanf("%d", &alunos);

    for(i = 0; i < alunos; i++){
        printf("Quantas vezes o aluno %d foi ao restaurante? ", i+1);
        scanf("%d", &vez);

        if(vez < 10){
            menos10++;

        }
        if(vez >= 10 && vez <= 15){
            entre10e15++;

        }
        if(vez > 15){
            acima15++;

        }

    }
    porcento10 = (menos10*100)/alunos;
    porcento15 = (entre10e15*100)/alunos;
    porcentoacima = (acima15*100)/alunos;

    printf("O número de alunos eh: %d\n", alunos);
    printf("A porcentagem de alunos que foram menos de 10 vezes eh: %.1f\n", porcento10);
    printf("A porcentagem de alunos que foram de 10 a 15 eh: %.1f\n", porcento15);
    printf("A porcentagem de alunos que foram mais de 15 vezes eh: %.1f\n", porcentoacima);


    system("pause");
    return 0;
}
