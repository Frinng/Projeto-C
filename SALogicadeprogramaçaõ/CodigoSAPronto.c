#include <stdio.h>
#include <string.h>

// Declaração de variáveis globais para armazenar dados de veículos e serviços
int numeroTabela = 0; int escolha2; int opcaoo; int ano;
char troca_de_oleo[10]; char nomeCompletoDono[50]; char alinhamento_e_balanceamento[10]; char revisaoo_de_freios[10]; char revisaoo_de_freios[10]; char suspensao_e_direcao[10]; char reparos_no_motor[10]; char transmissao_e_sistema_eletrico[10]; char modelo[50]; char pecas[50]; char placa[10];

// Função para cadastrar um veículo
void CadastroCarro(){
// Início do cadastro de veículo
    printf("==========================================\n");
    printf("===========Cadastro De Veiculos===========\n");
    printf("==========================================\n");

    //Pega o nome completo do dono do veiculo
    printf("Digite o Nome Completo do Proprietário do veiculo:\n ");
    getchar();
    fgets(nomeCompletoDono, sizeof(nomeCompletoDono), stdin);
    nomeCompletoDono[strcspn(nomeCompletoDono, "\n")] = 0;

    // Coletando os dados do carro
    printf("Digite o modelo do carro: \n");
    fgets(modelo, sizeof(modelo), stdin);
    modelo[strcspn(modelo, "\n")] = 0;

 // Solicita o ano do carro e armazena
    printf("Digite o ano do carro: \n");
    scanf("%d", &ano);
    getchar();// Limpa o buffer

// Solicita a placa do veículo e garante que tenha 7 caracteres
    do {
        printf("Digite a placa do carro (AAA1A11):\n ");
        scanf("%7s", placa);
        getchar();// Limpa o buffer

        if (strlen(placa) != 7) {
            printf("Erro: A placa deve ter exatamente 7 caracteres!\n");
        }
    } while (strlen(placa) != 7);

    // Exibindo os dados
    printf("\n--- Dados do Carro ---\n");
    printf("Nome do Proprietario: %s\n", nomeCompletoDono);
    printf("Modelo: %s\n", modelo);
    printf("Ano: %d\n", ano);
    printf("Placa: %s\n", placa);
    printf("");
}
// Função para agendamento de serviços de manutenção
void Servicomanun(){

    do{
// Menu de serviços
        printf("==========================================\n");
        printf("=================Servicos=================\n");
        printf("==========================================\n");

// Exibe os serviços disponíveis
        printf("Nossos Servicos\n");
        printf("1-Troca de oleo\n");
        printf("2-Alinhamento e balanceamento\n");
        printf("3-Revisao de freios\n");
        printf("4-Suspensao e direcao\n");
        printf("5-Reparos no motor\n");
        printf("6-Transmissao e sistema eletrico.\n");
        printf("7-Sair\n");
        scanf("%d", &escolha2);
        getchar();// Limpa o buffer

        switch(escolha2){
            case 1:
// Caso 1: Troca de óleo
                printf("==========================================\n");
                printf("===============Troca De Oleo==============\n");
                printf("==========================================\n");

                printf("Tempo Estimado: 30 minutos\n");
                printf("Valor : R$10.0000\n");
                printf("Deseja Agendar o servico? (s/n)\n");
                scanf("%s", troca_de_oleo);
                if(strcmp(troca_de_oleo,"s") == 0 || strcmp(troca_de_oleo,"S") == 0 ){
                    numeroTabela = 1;

// Exibe horários disponíveis para agendamento
                    printf("==========================================\n");
                    printf("===========Selecione um Horário===========\n");
                    printf("==========================================\n");
                    printf("");
                    printf("Temos esses horarios disponiveis para o dia 25/04\n");
                    printf("1-07:30\n");
                    printf("2-08:00\n");
                    printf("3-14:30\n");
                    printf("Escolha qual horario voce deseja agendar\n");
                    scanf("%d", &opcaoo);
                    getchar();
	 // Processa o horário escolhido
                    switch(opcaoo){
                        case 1:
                            printf("Troca de Oleo agendado para o dia 25/04 as 07:30 de uma Sexta Feira\n");

                            break;
                        case 2:
                            printf("Troca de Oleo agendado para o dia 25/04 as 08:00 de uma Sexta Feira\n");  

                            break;
                        case 3:
                            printf("Troca de Oleo agendad o para o dia 25/04 14:30 de uma Sexta Feira\n");    

                            break;
                        default:
                            printf("Escolha um horario valido\n");

                            break;

                    }

                }else{
                    printf("Voltando ao inicio\n");// Se não deseja agendar, volta ao início
                }
                break;
            case 2:

// O mesmo processo de agendamento se repete para os outros serviços
                printf("==========================================\n");
                printf("=======Alinhamento e balanceamento========\n");
                printf("==========================================\n");
		// Exibe o tempo estimado e o valor do serviço
                printf("Tempo Estimado: 1 hora\n");
                printf("Valor : R$10.0000\n");

// Pergunta ao usuário se ele deseja agendar o serviço
                printf("Deseja Agendar o servico? (s/n)\n");
                scanf("%s", alinhamento_e_balanceamento); // Lê a resposta do usuário (se deseja agendar)

// Verifica se o usuário respondeu 's' ou 'S' para agendar o serviço
                if(strcmp(alinhamento_e_balanceamento,"s") == 0 || strcmp(alinhamento_e_balanceamento,"S") == 0 ){

// Define uma variável para a tabela de horários (aparentemente, uma tabela com id 2)
                    numeroTabela = 2;

// Exibe uma mensagem para o usuário selecionar um horário
                    printf("==========================================\n");
                    printf("===========Selecione um Horário===========\n");
                    printf("==========================================\n");
                    printf("");
                    printf("Temos esses horarios disponiveis para o dia 25/04\n");

// Exibe as opções de horário para o usuário escolher
                    printf("1-08:30\n");
                    printf("2-10:00\n");
                    printf("3-16:30\n");
                    printf("Escolha qual horario voce deseja agendar\n");
                    scanf("%d", &opcaoo);
                    getchar();

// Switch case para agir de acordo com a opção escolhida pelo usuário		
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

                // Informações sobre o serviço
                printf("Tempo Estimado: 01:30min \n");
                printf("Valor: R$2.000.000.000\n");

                // Solicita ao usuário se deseja agendar o serviço
                printf("Deseja Agendar o servico? (s/n)\n");
                scanf("%s", revisaoo_de_freios);// Lê a resposta do usuário em uma string chamada revisaoo_de_freios

                // Verifica se a resposta foi 's' ou 'S' (sim)
                if(strcmp(revisaoo_de_freios,"s") == 0 || strcmp(revisaoo_de_freios,"S") == 0 ){
                    numeroTabela = 3; // Define um valor para uma variável chamada numeroTabela
                    printf("==========================================\n");
                    printf("===========Selecione um Horário===========\n");
                    printf("==========================================\n");
                    printf("");

                    // Exibe opções de horário para o agendamento
                    printf("Temos esses horarios disponiveis para o dia 25/04\n");
                    printf("1-08:00\n");
                    printf("2-10:30\n");
                    printf("3-14:30\n");
                    printf("Escolha qual horario voce deseja agendar\n");
                    scanf("%d", &opcaoo);
                    getchar();

                    // Processa a escolha do usuário usando switch-case
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
                    printf("Voltando ao inicio");// Caso o usuário não deseje agendar
                }

                break;
            case 4:

                // Exibe um cabeçalho para o serviço
                printf("==========================================\n");
                printf("===========Suspensao e direcao============\n");
                printf("==========================================\n");

                // Informações sobre o tempo e valor do serviço
                printf("Tempo Estimado: 2 horas\n");
                printf("Valor: R$480,00\n");

                // Pergunta ao usuário se ele deseja agendar o serviço
                printf("Deseja Agendar o servico? (s/n)\n");

                // Lê a resposta do usuário (espera "s" ou "n")
                scanf("%s", suspensao_e_direcao);

                // Verifica se o usuário respondeu "s" ou "S"
                if(strcmp(suspensao_e_direcao,"s") == 0 || strcmp(suspensao_e_direcao,"S") == 0 ){

                    // Define que a tabela atual é a de suspensão e direção (ex: para controle interno do sistema)
                    numeroTabela = 4;

                    // Exibe os horários disponíveis para agendamento
                    printf("==========================================\n");
                    printf("===========Selecione um Horário===========\n");
                    printf("==========================================\n");
                    printf("");
                    printf("Temos esses horarios disponiveis para o dia 25/04\n");
                    printf("1-10:00\n");
                    printf("2-12:30\n");
                    printf("3-14:30\n");

                     // Pergunta qual horário o usuário quer
                    printf("Escolha qual horario voce deseja agendar\n");

                    // Lê a escolha do usuário
                    scanf("%d", &opcaoo);

                    // Verifica a escolha usando switch-case
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
                            printf("Escolha um horario valido\n");  // Se o usuário escolher uma opção inválida

                            break;

                    }


                }else{
                    printf("Voltando ao inicio");// Caso o usuário não queira agendar
                }


                break;
            case 5:
                // Imprime o cabeçalho informando o tipo de serviço
                printf("==========================================\n");
                printf("=============Reparos no motor=============\n");
                printf("==========================================\n");

                // Mostra informações sobre duração e valor estimado do serviço
                printf("Tempo Estimado: 03:00H\n");

                // Mostra o valor
                printf("Valor: R$1.480,00\n");

                // Pergunta ao usuário se deseja agendar o serviço
                printf("Deseja Agendar o servico? (s/n)\n");

                // Recebe a resposta do usuário
                scanf("%s", reparos_no_motor);

                // Verifica se a resposta é "s" ou "S"
                if(strcmp(reparos_no_motor,"s") == 0 || strcmp(reparos_no_motor,"S") == 0 ){

                    // Define o número da tabela correspondente a esse serviço
                    numeroTabela = 5;

                    // Mostra os horários disponíveis
                    printf("==========================================\n");
                    printf("===========Selecione um Horário===========\n");
                    printf("==========================================\n");
                    printf("");
                    printf("Temos esses horarios disponiveis para o dia 25/04\n");
                    printf("1-10:00\n");
                    printf("2-13:30\n");
                    printf("3-17:30\n");
                    printf("Escolha qual horario voce deseja agendar\n");

                    // Lê a opção escolhida pelo usuário
                    scanf("%d", &opcaoo);

                    // Avalia a opção escolhida usando switch-case
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
                            printf("Escolha um horario valido\n");  // Caso a opção seja inválida

                            break;
                    }


                }else{
                    printf("Voltando ao inicio");// Se o usuário optou por não agendar
                }

                break;
            case 6:

                // Exibe o cabeçalho do serviço
                printf("==========================================\n");
                printf("======Transmissao e sistema eletrico======\n");
                printf("==========================================\n");

                // Mostra o tempo estimado e o valor do serviço
                printf("Tempo Estimado: 02:00H\n");
                printf("Valor: R$900,00\n");

                // Pergunta ao usuário se deseja agendar o serviço
                printf("Deseja Agendar o servico? (s/n)\n");

                // Lê a resposta do usuário (espera "s" ou "n")
                scanf("%s", transmissao_e_sistema_eletrico);

                // Verifica se a resposta foi "s" ou "S" (sim)
                if(strcmp(transmissao_e_sistema_eletrico,"s") == 0 || strcmp(transmissao_e_sistema_eletrico, "S") == 0 ){

                    // Define o número da tabela associada a esse serviço
                    numeroTabela = 6;

                    // Mostra os horários disponíveis para agendamento
                    printf("==========================================\n");
                    printf("===========Selecione um Horário===========\n");
                    printf("==========================================\n");
                    printf("");
                    printf("Temos esses horarios disponiveis para o dia 25/04\n");
                    printf("1-10:00\n");
                    printf("2-12:30\n");
                    printf("3-14:30\n");
                    printf("Escolha qual horario voce deseja agendar\n");

                    // Lê a escolha do usuário
                    scanf("%d", &opcaoo);

                    // Verifica a opção escolhida com switch-case
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
                            printf("Escolha um horario valido\n");  // Se a opção digitada for inválida

                            break;
                    }

                }else{
                    printf("Voltando ao inicio");// Caso o usuário não queira agendar
                }

                break;
            default:
                printf("Voltando ao menu principal...\n"); // Exibe mensagem informando que o sistema voltará ao menu principal

                break;// Sai do bloco de seleção (provavelmente um switch-case)

        }
        // Verifica se a opção selecionada foi um dos serviços válidos (1 a 6)
        if (opcaoo == 1 || opcaoo == 2 || opcaoo == 3 || opcaoo == 4 || opcaoo == 5 || opcaoo == 6) {

            // Exibe cabeçalho de peças utilizadas
            printf("==========================================\n");
            printf("=============Peças Utilizadas=============\n");
            printf("==========================================\n");
            printf("");

        // Solicita que o usuário informe as peças utilizadas    
        printf("Informe as peças a serem utilizadas neste serviço: \n");

        // Lê a linha com as peças (entrada de string com espaços)
        fgets(pecas, sizeof(pecas), stdin);
        break;// Encerra o bloco atua
        }
    } while(escolha2 != 7);// Executa o laço até que o usuário escolha a opção 7 (sair/menu principal)

    // Exibe cabeçalho de tempo esperado
    printf("==========================================\n");
    printf("==============Tempo Esperado==============\n");
    printf("==========================================\n");

    // Identifica qual foi o serviço agendado usando numeroTabela e imprime o tempo estimado
    if (numeroTabela == 1) {
        printf("1 - Troca de oleo\n");
        printf("Tempo estimado: 1 hora\n");
        opcaoo = 1;
    } else if (numeroTabela == 2) {
        printf("2 - Alinhamento e balanceamento\n");
        printf("Tempo estimado: 2 horas\n");
        opcaoo = 2;
    } else if (numeroTabela == 3) {
        printf("3 - Revisao de freios\n");
        printf("Tempo estimado: 1.5 horas\n");
        opcaoo = 2;
    } else if (numeroTabela == 4) {
        printf("4 - Suspensao e direçao\n");
        printf("Tempo estimado: 3 horas\n");
        opcaoo = 3;
    } else if (numeroTabela == 5) {
        printf("5 - Reparos no motor\n"); 
        printf("Tempo estimado: 5 horas\n");
        opcaoo = 5;
    } else if (numeroTabela == 6) {
        printf("6 - Transmissao e sistema eletrico\n");
        printf(" Tempo estimado: 4 horas\n");
        opcaoo = 4;
    } else {
        printf("Servico invalido!\n"); // Caso não tenha sido identificado nenhum serviço válido
    }
    printf("");
}

// Função principal do programa, recebe argumentos da linha de comando (não utilizados aqui)
int main(int argc, char const *argv[])
{
    int escolha;// Variável que armazenará a opção escolhida pelo usuário
    do {// Início de um laço do-while, que garante que o menu será exibido ao menos uma vez
        printf("==========================================\n");
        printf("==============Menu Principal==============\n");
        printf("==========================================\n");

         // Opções do menu principal
        printf("1-Cadastrar um novo Veiculo\n");
        printf("2-Contratar Nosssos Servicos\n");
        printf("3-Sair\n");
        printf("Escolha uma das opcoes\n");

        // Lê a opção do usuário e armazena na variável 'escolha'
        scanf("%d", &escolha);

        // Avalia o valor digitado
        switch (escolha){
            case 1:
                 // Chama a função responsável por cadastrar o veículo
                CadastroCarro();

                break;
            case 2:
                // Chama a função responsável pelos serviços de manutenção
                Servicomanun();

                break;
            case 3:
                printf("Saindo do Sistema...... \n");// Mensagem de saída

                break;
            default:
                printf("Opcao errada,tente novamente......\n"); // Mensagem de erro se o valor digitado não for 1, 2 ou 3
                break;

        }

    }while (escolha != 3);// Repete o menu até o usuário escolher sair

    // Exibe o cabeçalho do relatório
    printf("==========================================\n");
    printf("=================RELATÓRIO================\n");
    printf("==========================================\n");

    // Linha vazia desnecessária (pode ser removida)
    printf("");

    // Exibe o nome do proprietário do veículo
    printf("Propietário: %s\n", nomeCompletoDono);

    // Exibe o modelo do carro
    printf("Modelo do carro: %s\n", modelo);

    // Exibe a placa do veículo
    printf("Placa do veículo: %s\n", placa);
    if (escolha2 == 1) {
        printf("Serviço: Troca de óleo\n");
    } else if (escolha2 == 2) {
        printf("Serviço: Alinhamento e balanceamento\n");
    } else if (escolha2 == 3) {
        printf("Serviço: Revisão de freios\n");
    } else if (escolha2 == 4) {
        printf("Serviço: Suspensão e direção\n");
    } else if (escolha2 == 5) {
        printf("Serviço: Reparos no motor\n");
    } else if (escolha2 == 6) {
        printf("Serviço: Transmissão e sistema elétrico\n");
    }

    // Exibe as peças informadas pelo usuário
    printf("Peça(s) utilizada(s): %s\n", pecas);

    // Exibe o tempo estimado para o serviço
    printf("Tempo estimado: %d horas\n", opcaoo);

    // Linha vazia desnecessária (pode ser substituída por \n)
    printf("");
    
    return 0;// Finaliza a função main
}