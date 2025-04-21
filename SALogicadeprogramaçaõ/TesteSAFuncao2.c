#include <stdio.h>
#include <string.h>

void CadastroCarro(){
    char modelo[50];
    int ano;
    char placa[20];
    char nomeCompletoDono[50];
    char servicocarro[20];

    printf("======================================\n");
    printf("=========Cadastro De Veiculos=========\n");
    printf("======================================\n");

    //Pega o nome completo do dono do veiculo
    printf("Digite o Nome Completo do Proprietario do veiculo:\n ");
    fgets(nomeCompletoDono, 50, stdin);
    
    // Coletando os dados do carro
    printf("Digite o modelo do carro: \n");
    fgets(modelo, 50, stdin);  // Lê o modelo com espaços

    printf("Digite o ano do carro: \n");
    scanf("%d", &ano);
    getchar(); // Limpa o caractere de nova linha deixado pelo scanf

    printf("Digite a placa do carro:\n ");
    fgets(placa, 20, stdin);
    
    // Exibindo os dados
    printf("\n--- Dados do Carro ---\n");
    printf("Nome do Proprietario: %s", nomeCompletoDono);
    printf("Modelo: %s", modelo);
    printf("Ano: %d\n", ano);
    printf("Placa: %s", placa);
}
void Servicomanun(){
    char troca_de_óleo;
    char alinhamento_e_balanceamento;
    char revisão_de_freios;
    char suspensão_e_direção;
    char reparos_em_motor;
    char transmissão_e_sistema_elétrico;
    int escolha2;
    int opcaoo;
    do{
        printf("============================\n");
        printf("==========Servicos==========\n");
        printf("============================\n");
        printf("Nossos Servicos\n");
        printf("1-Troca de oleo\n");
        printf("2-Alinhamento e balanceamento\n");
        printf("3-Revisao de freios\n");
        printf("4-Suspensao e direcao\n");
        printf("5-Reparos em motor\n");
        printf("6-Transmissão e sistema eletrico.\n");
        printf("7-Sair");
        scanf("%d",escolha2);
        
        switch(escolha2){
            case 1:
                printf("=========================\n");
                printf("======Troca De Oleo======\n");
                printf("=========================\n");

                printf("Tempo Estimado: 30 minutos\n");
                printf("Valor : R$10.0000\n");
                printf("Deseja Agendar o serviço? (s/n)\n");
                scanf("%S", troca_de_óleo);
                if(strcmp(troca_de_óleo,"s") == 0){
                    printf("Temos esses horarios disponiveis para o dia 25/04");
                    printf("1-07:30");
                    printf("2-08:00");
                    printf("3-14:30");
                    printf("Escolha qual horario voce deseja agendar");
                    scanf("%d", opcaoo);

                    switch(opcaoo){
                        case 1:
                            printf("Troca de Oleo agendado o dia 25/04 as 07:30 de uma Sexta Feira");

                            break;

                        case 2:
                            printf("Troca de Oleo agendado o dia 25/04 as 08:00 de uma Sexta Feira");  

                            break;
                        case 3:
                            printf("Troca de Oleo agendado o dia 25/04 as 14:30 de uma Sexta Feira");    

                            break;

                    }

                }else{
                    printf("Voltando ao inicio");
                }



        }
    
    } while(escolha2 != 7);

}
int main(int argc, char const *argv[])
{
    int escolha;

    do {
        printf("============================\n");
        printf("=======Menu Principal=======\n");
        printf("============================\n");

        printf("1-Cadastrar um novo Veiculo\n");
        printf("2-Contratar Nosssos Serviços\n");
        printf("3-Sair");
        printf("Escolha uma das opcoes\n");
        scanf("%d", &escolha);

        switch (escolha){
            case 1:
                CadastroCarro();

                break;
            case 2:
                Servicomanun();

                break;
            case 3:
                printf("Saindo do Sistema...... \n");

                break;
            default:
                printf("Opcao errada,tente novamente......\n");
                    
        }

    }while (escolha != 3);

    return 0;
}