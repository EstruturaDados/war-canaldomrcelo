#include <stdio.h>
#include <string.h>

// -------------------------------------------------------
// Struct que representa um território
// Armazena nome, cor do exército e quantidade de tropas
// -------------------------------------------------------
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {

    // Vetor para armazenar 5 territórios
    struct Territorio territorios[5];

    // Entrada dos dados
    printf("===== Cadastro de Territorios =====\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Territorio %d:\n", i + 1);

        printf("Digite o nome do territorio: ");
        fgets(territorios[i].nome, 30, stdin);
        territorios[i].nome[strcspn(territorios[i].nome, "\n")] = '\0'; // remove o \n

        printf("Digite a cor do exercito: ");
        fgets(territorios[i].cor, 10, stdin);
        territorios[i].cor[strcspn(territorios[i].cor, "\n")] = '\0'; // remove o \n

        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);

        getchar(); // limpa buffer para o próximo fgets
        printf("\n");
    }

    // Exibição dos dados cadastrados
    printf("\n===== Territorios Cadastrados =====\n");

    for (int i = 0; i < 5; i++) {
        printf("\nTerritorio %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exercito: %s\n", territorios[i].cor);
        printf("Tropas: %d\n", territorios[i].tropas);
    }

    return 0;
}
