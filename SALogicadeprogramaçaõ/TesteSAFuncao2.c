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
    nomeCompletoDono[strcspn(nomeCompletoDono, "\n")] = '\0';
    
    // Coletando os dados do carro
    printf("Digite o modelo do carro: \n");
    fgets(modelo, 50, stdin);  // Lê o modelo com espaços
    modelo[strcspn(modelo, "\n")] = '\0';

    printf("Digite o ano do carro: \n");
    scanf("%d", &ano);
    getchar();

    printf("Digite a placa do carro:\n ");
    fgets(placa, 20, stdin);
    placa[strcspn(placa, "\n")] = '\0';
    
    // Exibindo os dados
    printf("\n--- Dados do Carro ---\n");
    printf("Nome do Proprietario: %s", nomeCompletoDono);
    printf("Modelo: %s", modelo);
    printf("Ano: %d\n", ano);
    printf("Placa: %s", placa);
}
void Servicomanun(){
    char troca_de_oleo[10];
    char alinhamento_e_balanceamento[10];
    char revisaoo_de_freios[10];
    char suspensao_e_direcao[10];
    char reparos_em_motor[10];
    char transmissao_e_sistema_eletrico[10];
    int escolha2;
    int opcaoo, opcao1, opcao2, opcao3, opcao4, opcao5, opcao6, opcao7;

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
        printf("7-Sair\n");
        scanf("%d", &escolha2);
        getchar();

        switch(escolha2){
            case 1:
                printf("=========================\n");
                printf("======Troca De Oleo======\n");
                printf("=========================\n");

                printf("Tempo Estimado: 30 minutos\n");
                printf("Valor : R$10.0000\n");
                printf("Deseja Agendar o serviço? (s/n)\n");
                scanf("%s", troca_de_oleo);
                if(strcmp(troca_de_oleo,"s") == 0 || strcmp(troca_de_oleo,"S") == 0 ){
                    printf("Temos esses horarios disponiveis para o dia 25/04\n");
                    printf("1-07:30\n");
                    printf("2-08:00\n");
                    printf("3-14:30\n");
                    printf("Escolha qual horario voce deseja agendar\n");
                    scanf("%d", &opcaoo);
                    getchar();

                    switch(opcaoo){
                        case 1:
                            printf("Troca de Oleo agendado o dia 25/04 as 07:30 de uma Sexta Feira\n");

                            break;
                        case 2:
                            printf("Troca de Oleo agendado o dia 25/04 as 08:00 de uma Sexta Feira\n");  

                            break;
                        case 3:
                            printf("Troca de Oleo agendado o dia 25/04 as 14:30 de uma Sexta Feira\n");    

                            break;
                        default:
                            printf("Escolha um horario valido\n");

                            break;

                    }

                }else{
                    printf("Escolha um horario disponivel");
                }
                break;
            case 2:
                printf("=========================================\n");
                printf("=======Alinhamento e balanceamento=======\n");
                printf("=========================================\n");

                printf("Tempo Estimado: 1 hora\n");
                printf("Valor : R$10.0000\n");
                printf("Deseja Agendar o serviço? (s/n)\n");
                scanf("%s", alinhamento_e_balanceamento);
                if(strcmp(alinhamento_e_balanceamento,"s") == 0 || strcmp(alinhamento_e_balanceamento,"S") == 0 ){
                    printf("Temos esses horarios disponiveis para o dia 25/04\n");
                    printf("1-08:30\n");
                    printf("2-10:00\n");
                    printf("3-16:30\n");
                    printf("Escolha qual horario voce deseja agendar\n");
                    scanf("%d", opcao1);
                    getchar();

                    switch(opcao1){
                        case 1:
                            printf("Alinhamento e balanceamento o dia 25/04 as 08:30 de uma Sexta Feira\n");

                            break;
                        case 2:
                            printf("Alinhamento e balanceamento o dia 25/04 as 10:00 de uma Sexta Feira\n");  

                            break;
                        case 3:
                            printf("Alinhamento e balanceamento o dia 25/04 as 16:30 de uma Sexta Feira\n");    

                            break;
                        default:
                            printf("Escolha um horario disponivel");
                            
                            break;
                    }

                }

                break;

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
        printf("3-Sair\n");
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
                break;
                    
        }

    }while (escolha != 3);

    return 0;
}