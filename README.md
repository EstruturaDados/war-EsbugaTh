# 🛡️ Cadastro de Territórios

Este projeto foi desenvolvido como parte do desafio de introdução a estruturas compostas em linguagem C. O objetivo é criar um sistema simples para cadastrar e exibir informações de territórios.

## 🚀 Funcionalidades

- Cadastro de 5 territórios
- Armazenamento de nome, cor do exército e quantidade de tropas
- Exibição formatada dos dados cadastrados

## 🧱 Estrutura de Dados

Utiliza `struct` para agrupar os dados de cada território:

```c
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};