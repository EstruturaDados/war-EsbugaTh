#include <stdio.h>
#include <string.h>

// Definição da estrutura Territorio
// Armazena nome, cor do exército e quantidade de tropas
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {
    // Declaração de vetor para armazenar 5 territórios
    struct Territorio territorios[5];

    // Interface de entrada clara para o usuário
    printf("Cadastro de Territórios\n");
    printf("=======================\n");

    // Laço para entrada de dados dos 5 territórios
    for (int i = 0; i < 5; i++) {
        printf("\nTerritório %d:\n", i + 1);

        // Entrada do nome do território
        printf("Digite o nome do território: ");
        scanf(" %[^\n]", territorios[i].nome); // Lê até a quebra de linha

        // Entrada da cor do exército
        printf("Digite a cor do exército: ");
        scanf(" %s", territorios[i].cor); // Lê uma palavra

        // Entrada da quantidade de tropas
        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);
    }

    // Exibição dos dados cadastrados
    printf("\nResumo dos Territórios Cadastrados\n");
    printf("==================================\n");

    for (int i = 0; i < 5; i++) {
        printf("Território %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exército: %s\n", territorios[i].cor);
        printf("Quantidade de tropas: %d\n", territorios[i].tropas);
        printf("----------------------------------\n");
    }

    return 0;
}

