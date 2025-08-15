#include <stdio.h>

typedef struct {
    char estado;
    char codigo[4];
    char nome_cidade[50];
    int  populacao;
    float area;
    float pib;
    int  pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
} Carta;

int main(void) {
    Carta c1 = {'A', "A01", "São Paulo", 12325000, 1521.11, 699.28, 50, 8102.47, 56724.32};
    Carta c2 = {'B', "B02", "Rio de Janeiro", 6748000, 1200.25, 300.50, 30, 5622.24, 44532.91};

    printf("Dados da Carta 1:\n");
    printf("Estado: %c\n", c1.estado);
    printf("Código: %s\n", c1.codigo);
    printf("Cidade: %s\n", c1.nome_cidade);
    printf("População: %d\n", c1.populacao);
    printf("Área (km²): %.2f\n", c1.area);
    printf("PIB (bilhões R$): %.2f\n", c1.pib);
    printf("Pontos Turísticos: %d\n", c1.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", c1.densidade_populacional);
    printf("PIB per Capita (R$): %.2f\n", c1.pib_per_capita);

    printf("\nDados da Carta 2:\n");
    printf("Estado: %c\n", c2.estado);
    printf("Código: %s\n", c2.codigo);
    printf("Cidade: %s\n", c2.nome_cidade);
    printf("População: %d\n", c2.populacao);
    printf("Área (km²): %.2f\n", c2.area);
    printf("PIB (bilhões R$): %.2f\n", c2.pib);
    printf("Pontos Turísticos: %d\n", c2.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", c2.densidade_populacional);
    printf("PIB per Capita (R$): %.2f\n", c2.pib_per_capita);

    return 0;
}
