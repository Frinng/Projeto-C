/*#include <stdio.h>

// Definindo o registro
struct Carro {
    char modelo[50];
    int ano;
    char placa[20];
    char nomeCompletoDono[50];
    char servicocarro[20];
};

int main() {
    // Criando uma variável do tipo Carro
    struct Carro carro1;

    //Pega o nome completo do dono do veiculo
    printf("Digite o Nome Completo do Proprietario do veiculo: ");
    fgets(carro1.nomeCompletoDono, 50, stdin);
    
    // Coletando os dados do carro
    printf("Digite o modelo do carro: ");
    fgets(carro1.modelo, 50, stdin);  // Lê o modelo com espaços

    printf("Digite o ano do carro: ");
    scanf("%d", &carro1.ano);
    getchar(); // Limpa o caractere de nova linha deixado pelo scanf

    printf("Digite a placa do carro: ");
    fgets(carro1.placa, 20, stdin);
    
    printf("Qual Tipo de Manuntecao Voce deseja fazer? (Preventiva ou Agendada) ");
    fgets(carro1.servicocarro, 20, stdin);

    // Exibindo os dados
    printf("\n--- Dados do Carro ---\n");
    printf("Modelo: %s", carro1.modelo);
    printf("Ano: %d\n", carro1.ano);
    printf("Placa: %s", carro1.placa);
    printf("O Cliente Deseja fazer uma Manutencao: %s", carro1.servicocarro);

    return 0;
}
    */