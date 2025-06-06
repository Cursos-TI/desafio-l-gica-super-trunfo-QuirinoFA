#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Declaração das variáveis utilizadas
    char estado_1, estado_2;
    char nome_1[50], nome_2[50];
    unsigned int pop_1, pop_2;
    float area_1, area_2;
    float pib_1, pib_2;
    int turi_1, turi_2;
    float densi_1, densi_2;
    float ppc_1, ppc_2;
    float sp_1, sp_2;
    short int cid_1 = 0, cid_2 = 0;

    // Cadastro da carta 1
    printf("INFORMAÇÕES DA CARTA 1\n");
    printf("Digite o estado da Carta 1: \n");
    scanf("%c", &estado_1);
    getchar();

    printf("Digite o nome da cidade: \n");
    fgets(nome_1, sizeof(nome_1), stdin);
    nome_1[strcspn(nome_1, "\n")] = '\0';

    printf("Digite o número de habitantes: \n");
    scanf("%u", &pop_1);
    getchar();

    printf("Digite a área da cidade: \n");
    scanf("%f", &area_1);
    getchar();

    printf("Digite o PIB (em bilhões de reais) da cidade: \n");
    scanf("%f", &pib_1);
    getchar();

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &turi_1);
    getchar();

    densi_1 = (float) pop_1 / area_1;
    ppc_1 = (float) pib_1 * 1000000000 / pop_1;
    sp_1 = (float) pop_1 + area_1 + pib_1 + turi_1 + ppc_1 + (1.0 / densi_1);

    // Cadastro da carta 2
    printf("\n");
    printf("INFORMAÇÕES DA CARTA 2\n");
    printf("Digite o estado da Carta 2: \n");
    scanf("%c", &estado_2);
    getchar();

    printf("Digite o nome da cidade : \n");
    fgets(nome_2, sizeof(nome_2), stdin);
    nome_2[strcspn(nome_2, "\n")] = '\0';

    printf("Digite o número de habitantes: \n");
    scanf("%u", &pop_2);
    getchar();

    printf("Digite a área da cidade: \n");
    scanf("%f", &area_2);
    getchar();

    printf("Digite o PIB (em bilhões de reais) da cidade: \n");
    scanf("%f", &pib_2);
    getchar();

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &turi_2);
    getchar();

    densi_2 = (float) pop_2 / area_2;
    ppc_2 = (float) pib_2 * 1000000000 / pop_2;
    sp_2 = (float) pop_2 + area_2 + pib_2 + turi_2 + ppc_2 + (1.0 / densi_2);

        // Exibição dos dados da carta 1
    printf("\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %c01\n", estado_1);
    printf("Nome da Cidade: %s\n", nome_1);
    printf("População: %u\n", pop_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("Número de Pontos Turísticos: %d\n", turi_1);
    printf("Densidade Populacional: %.2f hab/km²\n", densi_1);
    printf("PIB per Capita: %.2f reais\n", ppc_1);

    // Exibição dos dados da carta 2
    printf("\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %c02\n", estado_2);
    printf("Nome da Cidade: %s\n", nome_2);
    printf("População: %u\n", pop_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n", turi_2);
    printf("Densidade Populacional: %.2f hab/km²\n", densi_2);
    printf("PIB per Capita: %.2f reais\n", ppc_2);

    // Comparações e vencedores de cada atributo
    printf("COMPARAÇÃO DE CARTAS\n");
    if (pop_1 > pop_2){
        printf("População: Cidade 1 tem maior população.\n");
        cid_1++;
    }
    else{
        if (pop_1 == pop_2)
            printf("População: As duas cidades têm a mesma população.\n");
        else{
            printf("População: Cidade 2 tem maior população.\n");
            cid_2++;
        }
    }
    if (area_1 > area_2){
        printf("Área: Cidade 1 tem maior área.\n");
        cid_1++;
    }
    else{
        if (area_1 == area_2)
            printf("Área: as duas cidades têm a mesma área.\n");
        else{
            printf("Área: Cidade 2 tem maior área.\n");
            cid_2++;
        }
    }
    if (pib_1 > pib_2){
        printf("PIB: Cidade 1 tem maior PIB.\n");
        cid_1++;
    }
    else{
        if (pib_1 == pib_2)
            printf("PIB: As duas cidades têm o mesmo PIB.\n");
        else{
            printf("PIB: Cidade 2 tem maior PIB.\n");
            cid_2++;
        }
    }
    if (turi_1 > turi_2){
        printf("Pontos Turísticos: Cidade 1 tem mais pontos turísticos.\n");
        cid_1++;
    }
    else{
        if (turi_1 == turi_2)
            printf("Pontos Turísticos: As duas cidades têm o mesmo número de ponto turístico.\n");
        else{
            printf("Pontos Turísticos: Cidade 2 tem mais pontos turísticos.\n");
            cid_2++;
        }
    }
    if (densi_1 < densi_2){
        printf("Densidade Populacional: Cidade 1 tem menor densidade.\n");
        cid_1++;
    }
    else{
        if(densi_1 == densi_2)
            printf("Densidade Populacional: As duas cidades têm a mesma densidade populacional.\n");
        else{
            printf("Densidade Populacional: Cidade 2 tem menor densidade.\n");
            cid_2++;
        }
    }
    if (ppc_1 > ppc_2){
        printf("PIB per Capita: Cidade 1 tem maior PIB per Capita.\n");
        cid_1++;
    }
    else{
        if (ppc_1 == ppc_2)
            printf("PIB per Capita: As duas cidade têm o mesmo PIB per Capita.\n");
        else{
            printf("PIB per Capita: Cidade 2 tem maior PIB per Capita.\n");
            cid_2++;
        }
    }
    if (sp_1 > sp_2){
        printf("Super Poder: Carta 1 tem maior super poder.\n");
        cid_1++;
    }
    else{
        if (sp_1 == sp_2)
            printf("Super Poder: As duas cartas têm o mesmo super poder.\n");
        else{
            printf("Super Poder: Carta 2 tem maior super poder.\n");
            cid_2++;
        }
    }

    // Exibição da carta vencedora
    if (cid_1 > cid_2)
        printf("A cidade vencedora foi a cidade %s.\n", nome_1);
    else{
        if (cid_1 < cid_2)
            printf("A cidade vencedora foi a cidade %s.\n", nome_2);
        else
            printf("As cidades %s e %s empataram.\n", nome_1, nome_2);
    }

    return 0;
}
