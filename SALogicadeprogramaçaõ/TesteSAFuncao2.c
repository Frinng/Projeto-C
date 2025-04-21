#include <stdio.h>
#include <string.h>

void CadastroCarro(){
    char modelo[50];
    int ano;
    char placa[20];
    char nomeCompletoDono[50];

    printf("==========================================\n");
    printf("===========Cadastro De Veiculos===========\n");
    printf("==========================================\n");

    //Pega o nome completo do dono do veiculo
    printf("Digite o Nome Completo do Proprietario do veiculo:\n ");
    scanf("%s", nomeCompletoDono);
    
    // Coletando os dados do carro
    printf("Digite o modelo do carro: \n");
    scanf("%s",modelo);

    printf("Digite o ano do carro: \n");
    scanf("%d", &ano);
    getchar();

    printf("Digite a placa do carro:\n ");
    scanf("%s", placa);
    
    // Exibindo os dados
    printf("\n--- Dados do Carro ---\n");
    printf("Nome do Proprietario: %s\n", nomeCompletoDono);
    printf("Modelo: %s\n", modelo);
    printf("Ano: %d\n", ano);
    printf("Placa: %s\n", placa);
}
void Servicomanun(){
    char troca_de_oleo[10];
    char alinhamento_e_balanceamento[10];
    char revisaoo_de_freios[10];
    char suspensao_e_direcao[10];
    char reparos_no_motor[10];
    char transmissao_e_sistema_eletrico[10];
    int escolha2;
    int opcaoo;

    do{
        printf("==========================================\n");
        printf("=================Servicos=================\n");
        printf("==========================================\n");

        printf("Nossos Servicos\n");
        printf("1-Troca de oleo\n");
        printf("2-Alinhamento e balanceamento\n");
        printf("3-Revisao de freios\n");
        printf("4-Suspensao e direcao\n");
        printf("5-Reparos no motor\n");
        printf("6-Transmissao e sistema eletrico.\n");
        printf("7-Sair\n");
        scanf("%d", &escolha2);
        getchar();

        switch(escolha2){
            case 1:
                printf("==========================================\n");
                printf("===============Troca De Oleo==============\n");
                printf("==========================================\n");

                printf("Tempo Estimado: 30 minutos\n");
                printf("Valor : R$10.0000\n");
                printf("Deseja Agendar o servico? (s/n)\n");
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
                            printf("Troca de Oleo agendado para o dia 25/04 as 07:30 de uma Sexta Feira\n");

                            break;
                        case 2:
                            printf("Troca de Oleo agendado para o dia 25/04 as 08:00 de uma Sexta Feira\n");  

                            break;
                        case 3:
                            printf("Troca de Oleo agendado para o dia 25/04 as 14:30 de uma Sexta Feira\n");    

                            break;
                        default:
                            printf("Escolha um horario valido\n");

                            break;

                    }

                }else{
                    printf("Voltando ao inicio\n");
                }
                break;
            case 2:
                printf("==========================================\n");
                printf("=======Alinhamento e balanceamento========\n");
                printf("==========================================\n");

                printf("Tempo Estimado: 1 hora\n");
                printf("Valor : R$10.0000\n");
                printf("Deseja Agendar o servico? (s/n)\n");
                scanf("%s", alinhamento_e_balanceamento);
                if(strcmp(alinhamento_e_balanceamento,"s") == 0 || strcmp(alinhamento_e_balanceamento,"S") == 0 ){
                    printf("Temos esses horarios disponiveis para o dia 25/04\n");
                    printf("1-08:30\n");
                    printf("2-10:00\n");
                    printf("3-16:30\n");
                    printf("Escolha qual horario voce deseja agendar\n");
                    scanf("%d", &opcaoo);
                    getchar();

                    switch(opcaoo){
                        case 1:
                            printf("Alinhamento e balanceamento agendado para o dia 25/04 as 08:30 de uma Sexta Feira\n");

                            break;
                        case 2:
                            printf("Alinhamento e balanceamento agendado para o dia 25/04 as 10:00 de uma Sexta Feira\n");  

                            break;
                        case 3:
                            printf("Alinhamento e balanceamento agendado para o dia 25/04 as 16:30 de uma Sexta Feira\n");    

                            break;
                        default:
                            printf("Escolha um horario valido\n");
                            
                            break;
                    }

                }else{
                    printf("Voltando ao inicio\n");
                }

                break;
            case 3:
                printf("==========================================\n");
                printf("===========Revisao de freios==============\n");
                printf("==========================================\n");

                printf("Tempo Estimado: 01:30min \n");
                printf("Valor: R$2.000.000.000\n");
                printf("Deseja Agendar o servico? (s/n)\n");
                scanf("%s", revisaoo_de_freios);
                if(strcmp(revisaoo_de_freios,"s") == 0 || strcmp(revisaoo_de_freios,"S") == 0 ){
                    printf("Temos esses horarios disponiveis para o dia 25/04\n");
                    printf("1-08:00\n");
                    printf("2-10:30\n");
                    printf("3-14:30\n");
                    printf("Escolha qual horario voce deseja agendar\n");
                    scanf("%d", &opcaoo);
                    getchar();

                    switch(opcaoo){
                        case 1:
                            printf("Revisao de freios agendado para o dia 25/04 as 08:00 de uma Sexta Feira\n");

                            break;
                        case 2:
                            printf("Revisao de freios agendado para o dia 25/04 as 10:30 de uma Sexta Feira\n");

                            break;
                        case 3:
                            printf("Revisao de freios agendado para o dia 25/04 as 14:30 de uma Sexta Feira\n");

                            break;
                        default:
                            printf("Escolha um horario valido\n");    


                    }
                }else
                {
                    printf("Voltando ao inicio");
                }
                
                break;
            case 4:
                printf("==========================================\n");
                printf("===========Suspensao e direcao============\n");
                printf("==========================================\n");

                printf("Tempo Estimado: 2 horas\n");
                printf("Valor: R$480,00\n");
                printf("Deseja Agendar o servico? (s/n)\n");
                scanf("%s", suspensao_e_direcao);
                if(strcmp(suspensao_e_direcao,"s") == 0 || strcmp(suspensao_e_direcao,"S") == 0 ){
                    printf("Temos esses horarios disponiveis para o dia 25/04\n");
                    printf("1-10:00\n");
                    printf("2-12:30\n");
                    printf("3-14:30\n");
                    printf("Escolha qual horario voce deseja agendar\n");
                    scanf("%d", &opcaoo);

                    switch(opcaoo){
                        case 1:
                            printf("revisao Suspensao e direcao agendada para o dia 25/04 as 10:00 de uma Sexta Feira\n");

                            break;
                        case 2:
                            printf("revisao Suspensao e direcao agendada para o dia 25/04 as 12:30 de uma Sexta Feira\n");

                            break;
                        case 3:
                            printf("revisao Suspensao e direcao agendada para o dia 25/04 as 14:30 de uma Sexta Feira\n");
                            
                            break;
                        default:
                            printf("Escolha um horario valido\n");  

                            break;

                    }


                }else{
                    printf("Voltando ao inicio");
                }


                break;
            case 5:
                printf("==========================================\n");
                printf("=============Reparos no motor=============\n");
                printf("==========================================\n");

                printf("Tempo Estimado: 03:00H\n");
                printf("Valor: R$1,480,00\n");
                printf("Deseja Agendar o servico? (s/n)\n");
                scanf("%s", reparos_no_motor);
                if(strcmp(reparos_no_motor,"s") == 0 || strcmp(reparos_no_motor,"S") == 0 ){
                    printf("Temos esses horarios disponiveis para o dia 25/04\n");
                    printf("1-10:00\n");
                    printf("2-13:30\n");
                    printf("3-17:30\n");
                    printf("Escolha qual horario voce deseja agendar\n");
                    scanf("%d", &opcaoo);

                    switch(opcaoo){
                        case 1:
                            printf("Reparos no motor agendado para o dia 25/04 as 10:00 de uma Sexta Feira\n");

                            break;
                        case 2:
                            printf("Reparos no motor agendado para o dia 25/04 as 13:30 de uma Sexta Feira\n");

                            break;
                        case 3:
                            printf("Reparos no motor agendado para o dia 25/04 as 17:30 de uma Sexta Feira\n");

                            break;
                        default:
                            printf("Escolha um horario valido\n");  

                            break;
                    }


                }else{
                    printf("Voltando ao inicio");
                }

                break;
            case 6:
                printf("==========================================\n");
                printf("======Transmissao e sistema eletrico======\n");
                printf("==========================================\n");

                printf("Tempo Estimado: 02:00H\n");
                printf("Valor: R$900,00\n");
                printf("Deseja Agendar o servico? (s/n)\n");
                scanf("%s", transmissao_e_sistema_eletrico);
                if(strcmp(transmissao_e_sistema_eletrico,"s") == 0 || strcmp(transmissao_e_sistema_eletrico, "S") == 0 ){
                    printf("Temos esses horarios disponiveis para o dia 25/04\n");
                    printf("1-10:00\n");
                    printf("2-12:30\n");
                    printf("3-14:30\n");
                    printf("Escolha qual horario voce deseja agendar\n");
                    scanf("%d", &opcaoo);

                    switch(opcaoo){
                        case 1:
                            printf("Transmissao e sistema eletrico agendado para o dia 25/04 as 10:00 de uma Sexta Feira\n");

                            break;
                        case 2:
                            printf("Transmissao e sistema eletrico agendado para o dia 25/04 as 12:30 de uma Sexta Feira\n");

                            break;
                        case 3:
                            printf("Transmissao e sistema eletrico agendado para o dia 25/04 as 14:30 de uma Sexta Feira\n");

                            break;
                        default:
                            printf("Escolha um horario valido\n");  

                            break;
                    }

                }else{
                    printf("Voltando ao inicio");
                }

                break;
            default:
                printf("Escolha uma opcao valida..\n"); 

                break;

        }
    
    } while(escolha2 != 7);

}
int main(int argc, char const *argv[])
{
    int escolha;

    do {
        printf("==========================================\n");
        printf("==============Menu Principal==============\n");
        printf("==========================================\n");

        printf("1-Cadastrar um novo Veiculo\n");
        printf("2-Contratar Nosssos Servicos\n");
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