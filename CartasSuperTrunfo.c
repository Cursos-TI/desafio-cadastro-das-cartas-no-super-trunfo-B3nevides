#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    char estado;
    char cidade[50];
    char codigo[10];
    int populacao;
    float area;
    float pib; 
    int numTurismo; // variavel para número de turismo 


    // Cadastro da primeira Carta 1
    printf("<CADASTRO DE CARTA 1> \n"); 
    printf("Escolha uma leta de A a H: ");
    scanf(" %c", &estado);
    printf("Código da carta: ");
    scanf(" %s", &codigo);
    printf("Nome da cidade: ");
    scanf(" %s", &cidade);
    printf("População: ");
    scanf(" %d", &populacao);
    printf("Área(km): ");
    scanf(" %f", &area);
    printf("PIB: ");
    scanf(" %f", &pib);
    printf("Número de pontos Turísticos: ");
    scanf(" %d", &numTurismo);


    // Imprimindo a carta cadastrada
    printf("<CARTA 1> \n"); 
    printf("Estado: %c\n ", estado);
    printf("Código: %c %s\n ", estado, codigo);
    printf("Nome da Cidade: %s\n ", cidade);
    printf("População: %d\n ", populacao, "km");
    printf("Área(km): %.2f\n ", area);
    printf("PIB: %.2f\n ", pib);
    printf("Número de pontos Turísticos: %d\n ", numTurismo);


    // Cadastro da segunda Carta 2
    printf("<CADASTRO DE CARTA 2> \n"); 
    printf("Escolha uma leta de A a H: ");
    scanf(" %c", &estado);
    printf("Código da carta: ");
    scanf(" %s", &codigo);
    printf("Nome da cidade: ");
    scanf(" %s", &cidade);
    printf("População: ");
    scanf(" %d", &populacao);
    printf("Área(km): ");
    scanf(" %f", &area);
    printf("PIB: ");
    scanf(" %f", &pib);
    printf("Número de pontos Turísticos: ");
    scanf(" %d", &numTurismo);


    // Imprimindo a carta cadastrada
    printf("<CARTA 2> \n"); 
    printf("Estado: %c\n ", estado);
    printf("Código: %c %s\n ", estado, codigo);
    printf("Nome da Cidade: %s\n ", cidade);
    printf("População: %d\n ", populacao);
    printf("Área(km): %f\n ", area, "km");
    printf("PIB: %f\n ", pib);
    printf("Número de pontos Turísticos: %d ", numTurismo);

    return 0;

}
