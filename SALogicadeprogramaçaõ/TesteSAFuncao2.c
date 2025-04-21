#include <stdio.h>

void CadastroCarro(){
    char modelo[50];
    int ano;
    char placa[20];
    char nomeCompletoDono[50];
    char servicocarro[20];

    //Pega o nome completo do dono do veiculo
    printf("Digite o Nome Completo do Proprietario do veiculo: ");
    fgets(nomeCompletoDono, 50, stdin);
    
    // Coletando os dados do carro
    printf("Digite o modelo do carro: ");
    fgets(modelo, 50, stdin);  // Lê o modelo com espaços

    printf("Digite o ano do carro: ");
    scanf("%d", &ano);
    getchar(); // Limpa o caractere de nova linha deixado pelo scanf

    printf("Digite a placa do carro: ");
    fgets(placa, 20, stdin);
    
    // Exibindo os dados
    printf("\n--- Dados do Carro ---\n");
    printf("Nome do Proprietario: ", nomeCompletoDono);
    printf("Modelo: %s", modelo);
    printf("Ano: %d\n", ano);
    printf("Placa: %s", placa);
}
void Servicomanun(){
    char troca_de_óleo;
    char alinhamento_e_balanceamento;
    char revisão_de_freios;
    char suspensão_e_direção;
    char além_de_reparos_em_motor;
    char transmissão_e_sistema_elétrico;

}