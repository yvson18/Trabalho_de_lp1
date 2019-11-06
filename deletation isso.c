#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#define TM 100
#define QNT 50

//-------- Registro dos Enderecos dos imoveis -----------
typedef struct{
    char rua[TM];
    char numero[TM];
    char bairro[TM];
    char CEP[TM];
    char cidade[TM];
}t_Endereco;

//---------Tipos de Imoveis--------------
typedef struct{
    char anuncio[TM];
    float valorcasa;
    char dispo[TM];
    int pavimentos;
    int quartos;
    float areaTerren;
    float areaConstr;
    t_Endereco endereco;
} t_Casa;

typedef struct{
    char anuncio[TM];
    float valor;
    char dispo[TM];
    int quartos;
    char posicao[TM];
    char andar[TM];
    float valorCond;
    int vaga;
    t_Endereco endereco;
}t_Apartameno;

typedef struct{
    char anuncio[TM];
    float valor;
    char dispo[TM];
    float area;
    t_Endereco endereco;

}t_Terreno;

void CadastrarApartamento(t_Apartameno listApartamenots[],int qcad){
    int i,k;
// ---------- Procura em todo o array por 'Removido' e sobrescreve informacao
    for(i = 0; (i < QNT); i++){
        if(!(strcmp(listApartamenots[i].anuncio,"Removido"))){
            --qcad ;  // decrementa caso ache removido na estrutura
            printf("Digite o tiulo do anucio do Apartamento: ");
            printf("Estou em removido\n\n");
            gets(listApartamenots[i].anuncio);
            printf("Digite o valor do apartamento: ");
            scanf("%f%*c",&listApartamenots[i].valor);
            printf("Digite a disponibilidade do apartamento: ");
            gets(listApartamenots[i].dispo);
            printf("Digite a quantidade de quartos: ");
            scanf("%d%*c",&listApartamenots[i].quartos);
            printf("Digite a posicao do apartamento: ");
            gets(listApartamenots[i].posicao);
            printf("Digite a quantidade de andares: ");
            gets(listApartamenots[i].andar);
            printf("Digite o valor do condominio: ");
            scanf("%f%*c",&listApartamenots[i].valorCond);
            printf("Digite a quantidade de vagas de garagem: ");
            scanf("%d%*c",&listApartamenots[i].vaga);
            printf("Digite a rua do apartamento: ");
            gets(listApartamenots[i].endereco.rua);
            printf("Digite o numero do apartamento: ");
            gets(listApartamenots[i].endereco.numero);
            printf("Digite o bairro do apartamento: ");
            gets(listApartamenots[i].endereco.bairro);
            printf("Digite o CEP do apartamento: ");
            gets(listApartamenots[i].endereco.CEP);
            printf("Digite a Cidade do apartamento: ");
            gets(listApartamenots[i].endereco.cidade);
            system("cls");
            system("cls");
        }
    }

// ------------- Escreve as informacoes qcad vezes ( caso n se ache removido la em cima ele executa de boas qcad vezes)
//(caso tenha se achado la em cima ele so executa se sobrou alguma casa para cadastrar)
    if(qcad != 0){
        for(k = 0; k < QNT; k++){
            if(!(strcmp(listApartamenots[k].anuncio,""))){
                break;
            }
        }
        int b = k; // gambiarra mas deixa ae se n da ruim

        for(k; k < b+qcad ; k++){
            printf("Digite o título do anúncio do apartamento: ");
            gets(listApartamenots[k].anuncio);
            printf("Digite o valor do apartamento: ");
            scanf("%f%*c",&listApartamenots[k].valor);
            printf("Digite a disponibilidade do apartamento: ");
            gets(listApartamenots[k].dispo);
            printf("Digite a quantidade de quartos: ");
            scanf("%d%*c",&listApartamenots[k].quartos);
            printf("Digite a posição do apartamento: ");
            gets(listApartamenots[k].posicao);
            printf("Digite a quantidade de andares: ");
            gets(listApartamenots[k].andar);
            printf("Digite o valor do condomínio: ");
            scanf("%f%*c",&listApartamenots[k].valorCond);
            printf("Digite a quantidade de vagas de garagem: ");
            scanf("%d%*c",&listApartamenots[k].vaga);
            printf("Digite a rua do apartamento: ");
            gets(listApartamenots[k].endereco.rua);
            printf("Digite o número do apartamento: ");
            gets(listApartamenots[k].endereco.numero);
            printf("Digite o bairro do apartamento: ");
            gets(listApartamenots[k].endereco.bairro);
            printf("Digite o CEP do apartamento: ");
            gets(listApartamenots[k].endereco.CEP);
            printf("Digite a cidade do apartamento: ");
            gets(listApartamenots[k].endereco.cidade);
            system("cls");
        }
    }
}
void CadastrarCasa(t_Casa listCasas[],int qcad){
    int i,k;
// ---------- Procura em todo o array por 'Removido' e sobrescreve informacao
    for(i = 0; (i < QNT); i++){
        if(!(strcmp(listCasas[i].anuncio,"Removido"))){
            --qcad ; // decrementa caso ache removido na estrutura
            printf("Digite o título do anúncio da casa: ");
            gets((listCasas + i)->anuncio);
            printf("Digite o valor da casa: ");
            scanf("%f%*c",&(listCasas + i)->valorcasa);
            printf("Digite a disponibilidade da casa: ");
            gets((listCasas + i)->dispo);
            printf("Digite a quantidade de pavimentos da casa: ");
            scanf("%d*c",&(listCasas + i)->pavimentos);
            printf("Digite a quantidade de quartos: ");
            scanf("%d*c",&(listCasas + i)->quartos);
            printf("Digite a área do terreno: ");
            scanf("%f%*c",&(listCasas + i)->areaTerren);
            printf("Digite a área construida: ");
            scanf("%f%*c",&(listCasas + i)->areaConstr);
            printf("Digite a rua: ");
            gets((listCasas + i)->endereco.rua);
            printf("Digite o número: ");
            gets((listCasas + i)->endereco.numero);
            printf("Digite o bairro: ");
            gets((listCasas + i)->endereco.bairro);
            printf("Digite o CEP: ");
            gets((listCasas + i)->endereco.CEP);
            printf("Digite a cidade: ");
            gets((listCasas + i)->endereco.cidade);
            system("cls");
        }
    }
    if(qcad != 0){
        for(k = 0; k < QNT; k++){
            if(!(strcmp(listCasas[k].anuncio,""))){
                break;
            }
        }
        int b = k; // gambiarra mas deixa ae se n da merda
            for(k; k < b+qcad ; k++){
                printf("Digite o título do anúncio da casa: ");
                gets((listCasas + k)->anuncio);
                printf("Digite o valor da casa: ");
                scanf("%f%*c",&(listCasas + k)->valorcasa);
                printf("Digite a disponibilidade da casa: ");
                gets((listCasas + k)->dispo);
                printf("Digite a quantidade de pavimentos da casa: ");
                scanf("%d*c",&(listCasas + k)->pavimentos);
                printf("Digite a quantidade de quartos: ");
                scanf("%d*c",&(listCasas + k)->quartos);
                printf("Digite a área do terreno: ");
                scanf("%f%*c",&(listCasas + k)->areaTerren);
                printf("Digite a área construida: ");
                scanf("%f%*c",&(listCasas + k)->areaConstr);
                printf("Digite a rua: ");
                gets((listCasas + k)->endereco.rua);
                printf("Digite o número: ");
                gets((listCasas + k)->endereco.numero);
                printf("Digite o bairro: ");
                gets((listCasas + k)->endereco.bairro);
                printf("Digite o CEP: ");
                gets((listCasas + k)->endereco.CEP);
                printf("Digite a cidade: ");
                gets((listCasas + k)->endereco.cidade);
                system("cls");
            }
    }
}
void CadastarTerreno(t_Terreno listTerr[],int qcad){
   int i,k;
// ---------- Procura em todo o array por 'Removido' e sobrescreve informacao
    for(i = 0; (i < QNT); i++){
        if(!(strcmp(listTerr[i].anuncio,"Removido"))){
            // decrementa caso ache removido na estrutura
            --qcad ;
            printf("Digite o título do anúncio do terreno: ");
            gets((listTerr + i)->anuncio);
            printf("Digite o valor do terreno: ");
            scanf("%f%*c",&(listTerr + i)->valor);
            printf("Digite a disponibilidade do terreno: ");
            gets((listTerr + i)->dispo);
            printf("Digite o valor da área do terreno: ");
            scanf("%f%*c",&(listTerr + i)->area);
            printf("Digite o nome da rua: ");
            gets((listTerr + i)->endereco.rua);
            printf("Digite o número do terreno: ");
            gets((listTerr + i)->endereco.numero);
            printf("Digite o bairro do terreno: ");
            gets((listTerr + i)->endereco.bairro);
            printf("Digite o CEP do terreno: ");
            gets((listTerr + i)->endereco.CEP);
            printf("Digite a cidade do terreno: ");
            gets((listTerr + i)->endereco.cidade);
            system("cls");
        }
    }

// ------------- Escreve as informacoes qcad vezes ( caso n se ache removido la em cima ele executa de boas qcad vezes)
//(caso tenha se achado la em cima ele so executa se sobrou alguma casa para cadastrar)

    if(qcad != 0){
        for(k = 0; k < QNT; k++){
            if(!(strcmp(listTerr[k].anuncio,""))){
                break;
            }
        }
        int b = k; // gambiarra mas deixa ae se n da ruim
        for(k; k < b+qcad ; k++){
            printf("Digite o título do anúncio do terreno: ");
            gets((listTerr + k)->anuncio);
            printf("Digite o valor do terreno: ");
            scanf("%f%*c",&(listTerr + k)->valor);
            printf("Digite a disponibilidade do terreno: ");
            gets((listTerr + k)->dispo);
            printf("Digite o valor da área do terreno: ");
            scanf("%f%*c",&(listTerr + k)->area);
            printf("Digite o nome da rua: ");
            gets((listTerr + k)->endereco.rua);
            printf("Digite o número do terreno: ");
            gets((listTerr + k)->endereco.numero);
            printf("Digite o bairro do terreno: ");
            gets((listTerr + k)->endereco.bairro);
            printf("Digite o CEP do terreno: ");
            gets((listTerr + k)->endereco.CEP);
            printf("Digite a cidade do terreno: ");
            gets((listTerr + k)->endereco.cidade);
            system("cls");
        }
    }
    system("pause");
}
void BuscaImovelAnuncio(t_Casa listCasas[],t_Apartameno listApartamenots[],t_Terreno listTerrenos[]){
    char Anuncio[TM];

    printf("Digite o anuncio que deseja encontrar: ");
    gets(Anuncio);

    for(int j = 0; j < QNT; j++){
        if(!(strcmp(Anuncio,listApartamenots[j].anuncio))){
            printf("Valor do apartamento: %f\n",listApartamenots[j].valor);
            printf("Disponibilidade do imóvel: %s\n",listApartamenots[j].dispo);
            printf("Quantidade de quartos: %d\n",listApartamenots[j].quartos);
            printf("Posição do apartamento: %s\n",listApartamenots[j].posicao);
            printf("Quantidade de andares: %s\n",listApartamenots[j].andar);
            printf("Valor do condomínio: %f\n",listApartamenots[j].valorCond);
            printf("Quantidade de vagas: %d\n",listApartamenots[j].vaga);
            printf("Rua do apartamento: %s\n",listApartamenots[j].endereco.rua);
            printf("Número do apartamento: %s\n",listApartamenots[j].endereco.numero);
            printf("Bairro do apartamento: %s\n",listApartamenots[j].endereco.bairro);
            printf("CEP: %s\n",listApartamenots[j].endereco.CEP);
            printf("Cidade: %s\n",listApartamenots[j].endereco.cidade);
            break;
        }
        if(!(strcmp(Anuncio,listCasas[j].anuncio))){
            printf("Valor da casa: %f\n",listCasas[j].valorcasa);
            printf("Disponibilidade do imóvel: %s\n",listCasas[j].dispo);
            printf("Quantidade de pavimentos: %d\n",listCasas[j].pavimentos);
            printf("Quantidade de quartos: %d\n",listCasas[j].quartos);
            printf("Área do terreno: %f\n",listCasas[j].areaTerren);
            printf("Área construída do terreno: %f\n",listCasas[j].areaConstr);
            printf("Logradouro: %s\n",listCasas[j].endereco.rua);
            printf("Bairro: %s\n",listCasas[j].endereco.bairro);
            printf("CEP: %s\n",listCasas[j].endereco.CEP);
            printf("Cidade: %s\n",listCasas[j].endereco.cidade);
            break;
        }
        if(!(strcmp(Anuncio,listTerrenos[j].anuncio))){
            printf("Título do anúncio: %s\n",listTerrenos[j].anuncio);
            printf("Valor do terreno: %f\n",listTerrenos[j].valor);
            printf("Disponibilidade do imóvel: %s\n",listTerrenos[j].dispo);
            printf("Área do terreno: %f\n",listTerrenos[j].area);
            printf("Rua do terreno: %s\n",listTerrenos[j].endereco.rua);
            printf("Número do terreno: %s\n",listTerrenos[j].endereco.numero);
            printf("Bairro do terreno: %s\n",listTerrenos[j].endereco.bairro);
            printf("CEP: %s\n",listTerrenos[j].endereco.CEP);
            printf("Cidade: %s\n",listTerrenos[j].endereco.cidade);
            break;

        }
    }
}
void BuscaImovelBairro(t_Casa listCasas[],t_Apartameno listApartamenots[],t_Terreno listTerrenos[]){
    char Bairro[TM];

    printf("Digite o bairro que deseja encontrar: ");
    gets(Bairro);

    for(int j = 0; j < QNT; j++){
        if(!(strcmp(Bairro,listApartamenots[j].endereco.bairro))){
            printf("Titulo do anuncio: %s\n",listApartamenots[j].anuncio);
            printf("Valor do Apartamento: %f\n",listApartamenots[j].valor);
            printf("Dislponibilidade do Imovel: %s\n",listApartamenots[j].dispo);
            printf("Quantidade de quartos %d\n",listApartamenots[j].quartos);
            printf("Poiscao do Apartamento: %s\n",listApartamenots[j].posicao);
            printf("Qunatidade de Andares: %s\n",listApartamenots[j].andar);
            printf("Valor do Condominio: %f\n",listApartamenots[j].valorCond);
            printf("Quantidade de vagas: %d\n",listApartamenots[j].vaga);
            printf("Rua do Apartamento: %s\n",listApartamenots[j].endereco.rua);
            printf("Numeto do Apartamento: %s\n",listApartamenots[j].endereco.numero);
            printf("CEP: %s\n",listApartamenots[j].endereco.CEP);
            printf("Cidade: %s\n",listApartamenots[j].endereco.cidade);
            break;
}
        if(!(strcmp(Bairro,listCasas[j].endereco.bairro))){
            printf("Titulo anuncio: %s\n",listCasas[j].anuncio);
            printf("Valor da Casa: %f\n",listCasas[j].valorcasa);
            printf("Disponibilidade do Imovel: %s\n",listCasas[j].dispo);
            printf("Quantidade de pavimentos: %d\n",listCasas[j].pavimentos);
            printf("Quantidade de quartos: %d\n",listCasas[j].quartos);
            printf("Area do terreno: %f\n",listCasas[j].areaTerren);
            printf("Area construida do terreno: %f\n",listCasas[j].areaConstr);
            printf("Logradouro: %s\n",listCasas[j].endereco.rua);
            printf("Bairro: %s\n",listCasas[j].endereco.bairro);
            printf("CEP: %s\n",listCasas[j].endereco.CEP);
            printf("Cidade: %s\n",listCasas[j].endereco.cidade);
            break;
        }
        if(!(strcmp(Bairro,listTerrenos[j].endereco.bairro))){
                printf("Titulo do anuncio: %s\n",listTerrenos[j].anuncio);
                printf("Titulo do Anuncio: %s\n",listTerrenos[j].anuncio);
                printf("Valor do Terreno: %f\n",listTerrenos[j].valor);
                printf("Dislponibilidade do Imovel: %s\n",listTerrenos[j].dispo);
                printf("Area do terreno: %f\n",listTerrenos[j].area);
                printf("Rua do Terreno: %s\n",listTerrenos[j].endereco.rua);
                printf("Numeto do Terreno: %s\n",listTerrenos[j].endereco.numero);
                printf("Bairro do Terreno: %s\n",listTerrenos[j].endereco.bairro);
                printf("CEP: %s\n",listTerrenos[j].endereco.CEP);
                printf("Cidade: %s\n",listTerrenos[j].endereco.cidade);
                break;
        }
    }
}
void BuscaImovelValor(t_Casa listCasas[],t_Apartameno listApartamenots[],t_Terreno listTerrenos[]){
    float valor;
    int i;
    printf("Digite uma faixa de Valor: ");
    scanf("%f",&valor);

    printf("------Casas-------\n\n");
    for(i = 0; i < QNT; i++){
        if(listCasas[i].valorcasa>valor){
            if(strcmp(listCasas[i].anuncio,"Removido") != 0) {
                printf("%s:------%.0f\n",listCasas[i].anuncio,listCasas[i].valorcasa);
            }
        }
    }

    printf("------Apartamentos-------\n\n");
    for(i = 0; i < QNT; i++){
        if(listApartamenots[i].valor>valor){
            if(strcmp(listApartamenots[i].anuncio,"Removido") != 0){
                printf("%s:------%.0f\n",listApartamenots[i].anuncio,listApartamenots[i].valor);
            }
        }
    }

    printf("------Terrenos-------\n\n");
    for(i = 0; i < QNT; i++){
        if(listTerrenos[i].valor>valor){
            if(strcmp(listTerrenos[i].anuncio,"Removido") != 0){
                printf("%s:------%.0f\n",listTerrenos[i].anuncio,listTerrenos[i].valor);
            }
         }
    }
}
void consultaImovelDispo(t_Casa listCasas[],t_Apartameno listApartamenots[],t_Terreno listTerrenos[]){
    for(int i = 0; i < QNT; i++){
        char *Dispcasa = strstr(listCasas[i].dispo,"Disponivel");
            if(Dispcasa != NULL){
                printf("%s-------------- Disponivel\n",listCasas[i].anuncio);
            }
        }

     for(int i = 0; i < QNT; i++){
        char *Dispap = strstr(listApartamenots[i].dispo,"Disponivel");
            if(Dispap != NULL){
                printf("%s-------------- Disponivel\n",listApartamenots[i].anuncio);
            }
    }

    for(int i = 0; i < QNT; i++){
        char *Dispter = strstr(listTerrenos[i].dispo,"Disponivel");
            if(Dispter != NULL){
                printf("%s-------------- Disponivel\n",listTerrenos[i].anuncio);
            }
    }
}
void consultaImovelAvenda(t_Casa listCasas[],t_Apartameno listApartamenots[],t_Terreno listTerrenos[]){
    for(int i = 0; i < QNT; i++){
        char *VendCasa = strstr(listCasas[i].dispo,"Vender");
            if(VendCasa != NULL){
                printf("%s-------------- ah venda\n",listCasas[i].anuncio);
            }
    }

     for(int i = 0; i < QNT; i++){
        char *Vendap = strstr(listApartamenots[i].dispo,"Vender");
            if(Vendap != NULL){
                printf("%s-------------- ah venda\n",listApartamenots[i].anuncio);
            }
    }

    for(int i = 0; i < QNT; i++){
        char *Vendter = strstr(listTerrenos[i].dispo,"Vender");
            if(Vendter != NULL){
                printf("%s-------------- ah venda\n",listTerrenos[i].anuncio);
            }
    }
}
void consultaImovelAlugar(t_Casa listCasas[],t_Apartameno listApartamenots[],t_Terreno listTerrenos[]){
    for(int i = 0; i < QNT; i++){
        char *alugarCasa = strstr(listCasas[i].dispo,"Alugar");
            if(alugarCasa != NULL){
                printf("%s-------------- Diponivel para alugar\n",listCasas[i].anuncio);
            }
        }

    for(int i = 0; i < QNT; i++){
        char *alugarap = strstr(listApartamenots[i].dispo,"Alugar");
            if(alugarap != NULL){
                printf("%s-------------- Diponivel para alugar\n",listApartamenots[i].anuncio);
            }
    }

    for(int i = 0; i < QNT; i++){
        char *alugarter = strstr(listTerrenos[i].dispo,"Alugar");
            if(alugarter != NULL){
                printf("%s-------------- Diponivel para alugar\n",listTerrenos[i].anuncio);
            }
    }
}
void ExibeCasa(t_Casa listCasas[]){
    int i,k;
    for(k = 0; k < QNT; k++){
        if(!(strcmp(listCasas[k].anuncio,""))){
            break;
        }
    }
    for(i = 0; i < (k+1); i++){
        if((strcmp(listCasas[i].anuncio,"Removido")) != 0 && (strcmp(listCasas[i].anuncio,"")) != 0){
            printf("Titulo anuncio: %s\n",listCasas[i].anuncio);
            printf("Valor da Casa: %f\n",listCasas[i].valorcasa);
            printf("Disponibilidade do Imovel: %s\n",listCasas[i].dispo);
            printf("Quantidade de pavimentos: %d\n",listCasas[i].pavimentos);
            printf("Quantidade de quartos: %d\n",listCasas[i].quartos);
            printf("Area do terreno: %f\n",listCasas[i].areaTerren);
            printf("Area construida do terreno: %f\n",listCasas[i].areaConstr);
            printf("Logradouro: %s\n",listCasas[i].endereco.rua);
            printf("Bairro: %s\n",listCasas[i].endereco.bairro);
            printf("CEP: %s\n",listCasas[i].endereco.CEP);
            printf("Cidade: %s\n\n",listCasas[i].endereco.cidade);
        }
    }
}
void ExibeApartamento(t_Apartameno listApartamenots[]){
    int i,k;

    for(k = 0; k < QNT; k++){
        if(!(strcmp(listApartamenots[k].anuncio,""))){
            break;
        }
    }

    for(i = 0; i < (k); i++){
        if((strcmp(listApartamenots[i].anuncio,"Removido")) && (strcmp(listApartamenots[i].anuncio,""))){
            printf("Titulo do Anuncio: %s\n",listApartamenots[i].anuncio);
            printf("Valor do Apartamento: %f\n",listApartamenots[i].valor);
            printf("Dislponibilidade do Imovel: %s\n",listApartamenots[i].dispo);
            printf("Quantidade de quartos %d\n",listApartamenots[i].quartos);
            printf("Poiscao do Apartamento: %s\n",listApartamenots[i].posicao);
            printf("Qunatidade de Andares: %s\n",listApartamenots[i].andar);
            printf("Valor do Condominio: %f\n",listApartamenots[i].valorCond);
            printf("Quantidade de vagas: %d\n",listApartamenots[i].vaga);
            printf("Rua do Apartamento: %s\n",listApartamenots[i].endereco.rua);
            printf("Numeto do Apartamento: %s\n",listApartamenots[i].endereco.numero);
            printf("Bairro do Apartamento: %s\n",listApartamenots[i].endereco.bairro);
            printf("CEP: %s\n",listApartamenots[i].endereco.CEP);
            printf("Cidade: %s\n",listApartamenots[i].endereco.cidade);
        }
    }
}
void ExibeTerreno(t_Terreno listTerr[]){
    int i,k;

    for(k = 0; k < QNT; k++){
        if(!(strcmp(listTerr[k].anuncio,""))){
            break;
        }
    }

    for(i = 0; i < (k+1); i++){
        if((strcmp(listTerr[i].anuncio,"Removido")) != 0 && (strcmp(listTerr[i].anuncio,"")) != 0){
            printf("Titulo do Anuncio: %s\n",listTerr[i].anuncio);
            printf("Valor do Terreno: %f\n",listTerr[i].valor);
            printf("Dislponibilidade do Imovel: %s\n",listTerr[i].dispo);
            printf("Area do terreno: %f\n",listTerr[i].area);
            printf("Rua do Terreno: %s\n",listTerr[i].endereco.rua);
            printf("Numeto do Terreno: %s\n",listTerr[i].endereco.numero);
            printf("Bairro do Terreno: %s\n",listTerr[i].endereco.bairro);
            printf("CEP: %s\n",listTerr[i].endereco.CEP);
            printf("Cidade: %s\n",listTerr[i].endereco.cidade);
        }
    }
}
void RemoverImovel(t_Casa listCasas[],t_Apartameno listApartamenots[],t_Terreno listTerrenos[]){
    char Anuncio[TM];
    int j;

    printf("Digite o anuncio que deseja remover: ");
    gets(Anuncio);

    for(j = 0; j < QNT; j++){
        if(!(strcmp(Anuncio,listApartamenots[j].anuncio))){
            strcpy(listApartamenots[j].anuncio,"Removido");
            break;
        }
        if(!(strcmp(Anuncio,listCasas[j].anuncio))){
            strcpy(listCasas[j].anuncio,"Removido");
            break;
        }
        if(!(strcmp(Anuncio,listTerrenos[j].anuncio))){
            strcpy(listTerrenos[j].anuncio,"Removido");
            break;
        }
    }
}
void EditarImovel(t_Casa listCasas[],t_Apartameno listApartamenots[],t_Terreno listTerr[]){
    char Anuncio[TM],opcao[TM];
    int k;

    printf("  Digite o Titulo do anuncio que deseja editar: ");
    gets(Anuncio);

    for(k = 0; k < QNT; k++){
//-------------------------Edição dos apartamentos---------------------------------------
        if(!(strcmp(Anuncio,listApartamenots[k].anuncio))){
            printf("  Digite a opção que deseja modificar.\n\n");
            printf("Opções: <anuncio><valor><disponibilidade><quartos><posicao><andares>\n");
            printf("<condominio><vagas><rua><numero><numero><bairro><CEP><cidade>\n");
            gets(opcao);
            system("cls");

            if(!strcmp(opcao,"anuncio")){
                printf("  Digite o tiulo do anucio do Apartamento: ");
                gets(listApartamenots[k].anuncio);
                break;
            }
            if(!strcmp(opcao,"valor")){
                printf("  Digite o valor do apartamento: ");
                scanf("%f%*c",&listApartamenots[k].valor);
                break;
            }
            if(!strcmp(opcao,"disponibilidade")){
                 printf("  Digite a disponibilidade do apartamento: ");
                 gets(listApartamenots[k].dispo);
                 break;
            }
            if(!strcmp(opcao,"quartos")){
                 printf("  Digite a quantidade de quartos: ");
                 scanf("%d%*c",&listApartamenots[k].quartos);
                 break;
            }
             if(!strcmp(opcao,"posicao")){
                printf("  Digite a posicao do apartamento: ");
                gets(listApartamenots[k].posicao);
                break;
            }
            if(!strcmp(opcao,"andares")){
                printf("  Digite a quantidade de andares: ");
                gets(listApartamenots[k].andar);
                break;
             }
            if(!strcmp(opcao,"condominio")){
                printf("  Digite o valor do condominio: ");
                scanf("%f%*c",&listApartamenots[k].valorCond);
                break;
            }
            if(!strcmp(opcao,"vagas")){
                printf("  Digite a quantidade de vagas de garagem: ");
                scanf("%d%*c",&listApartamenots[k].vaga);
                break;
            }
            if(!strcmp(opcao,"rua")){
                printf("  Digite a rua do apartamento: ");
                gets(listApartamenots[k].endereco.rua);
                break;
            }
            if(!strcmp(opcao,"numero")){
                printf("  Digite o numero do apartamento: ");
                gets(listApartamenots[k].endereco.numero);
                break;
            }
            if(!strcmp(opcao,"bairro")){
                printf("  Digite o bairro do apartamento: ");
                gets(listApartamenots[k].endereco.bairro);
                break;
            }
            if(!strcmp(opcao,"CEP")){
                printf("  Digite o CEP do apartamento: ");
                gets(listApartamenots[k].endereco.CEP);
                break;
            }
            if(!strcmp(opcao,"cidade")){
                printf("  Digite a Cidade do apartamento: ");
                gets(listApartamenots[k].endereco.cidade);
                break;
            }
        }

//---------------------------- Edição das casas------------------------------------------
        if(!(strcmp(Anuncio,listCasas[k].anuncio))){
            printf("Digite a opção que deseja modificar. \n");
            printf("Opções: <anuncio><valor><disponibilidade><pavimentos><quartos>\n");
            printf("<area terreno><area construida><rua><bairro><CEP><cidade>\n");
            gets(opcao);
            system("cls");

            if(!strcmp(opcao,"anuncio")){
                printf("Digite o tiulo do anucio da casa: ");
                gets((listCasas + k)->anuncio);
                break;
            }
            if(!strcmp(opcao,"valor")){
                printf("Digite o valor da casa: ");
                scanf("%f%*c",&(listCasas + k)->valorcasa);
                break;
            }
            if(!strcmp(opcao,"disponibilidade")){
                printf("Digite a disponibilidade da casa: ");
                gets((listCasas + k)->dispo);
                break;
            }
            if(!strcmp(opcao,"pavimentos")){
                printf("Digite a quantidade de pavimentos da casa: ");
                scanf("%d*c",&(listCasas + k)->pavimentos);
                break;
            }
            if(!strcmp(opcao,"quartos")){
                printf("Digite a quantidade de quartos: ");
                scanf("%d*c",&(listCasas + k)->quartos);
                break;
            }
            if(!strcmp(opcao,"area terreno")){
                printf("Digite a Area do terreno: ");
                scanf("%f%*c",&(listCasas + k)->areaTerren);
                break;
            }
            if(!strcmp(opcao,"area construida")){
                printf("Digite a Area construida: ");
                scanf("%f%*c",&(listCasas + k)->areaConstr);
                break;
            }
            if(!strcmp(opcao,"rua")){
                printf("Digite a rua: ");
                gets((listCasas + k)->endereco.rua);
                break;
            }
            if(!strcmp(opcao,"numero")){
                printf("Digite o numero: ");
                gets((listCasas + k)->endereco.numero);
                break;
            }
            if(!strcmp(opcao,"bairro")){
                printf("Digite o bairro: ");
                gets((listCasas + k)->endereco.bairro);
                break;
            }
            if(!strcmp(opcao,"CEP")){
                printf("Digite o CEP: ");
                gets((listCasas + k)->endereco.CEP);
                break;
            }
            if(!strcmp(opcao,"cidade")){
                printf("Digite a cidade: ");
                gets((listCasas + k)->endereco.cidade);
                break;
            }
        }

// --------------------Edição do terreno ------------------------------------------------
        if(!(strcmp(Anuncio,listTerr[k].anuncio))){
            printf("Digite a opção que deseja modificar.\n");
            printf("Opções: <anuncio><valor><disponibilidade>\n<area><numero><bairro><CEP><cidade>\n\n");
            gets(opcao);
            system("cls");

            if(!strcmp(opcao,"anuncio")){
                printf("Digite o titulo do anuncio do terreno: ");
                gets((listTerr + k)->anuncio);
                break;
            }
            if(!strcmp(opcao,"valor")){
                printf("Digite o valor do terreno: ");
                scanf("%f%*c",&(listTerr + k)->valor);
                break;
            }
            if(!strcmp(opcao,"disponibilidade")){
                printf("Digite a disponibilidade do terreno: ");
                gets((listTerr + k)->dispo);
                break;
            }
            if(!strcmp(opcao,"area")){
                printf("Digite o valor da area do terreno: ");
                scanf("%f%*c",&(listTerr + k)->area);
                break;
            }
            if(!strcmp(opcao,"rua")){
                printf("Digite o nome da rua: ");
                gets((listTerr + k)->endereco.rua);
                break;
            }
            if(!strcmp(opcao,"numero")){
                printf("Digite o numero do terreno: ");
                gets((listTerr + k)->endereco.numero);
                break;
            }
            if(!strcmp(opcao,"bairro")){
                printf("Digite o Bairro do terreno: ");
                gets((listTerr + k)->endereco.bairro);
                break;
            }
            if(!strcmp(opcao,"CEP")){
                printf("Digite o CEP do terreno: ");
                gets((listTerr + k)->endereco.CEP);
                break;
            }
            if(!strcmp(opcao,"cidade")){
                printf("Digite a Cidade do terreno: ");
                gets((listTerr + k)->endereco.cidade);
                break;
            }
        }
    }
}
void SalvarDados(t_Casa listCasas[],t_Apartameno listApartamenots[],t_Terreno listTerr[]){
    FILE *Casa = fopen("Arquivo_Casa.txt","w");
    int c,a,t,aux;

    for(c = 0; c < QNT; c++){
        if(!(strcmp(listCasas[c].anuncio,""))){
            break;
        }
    }
    aux = c  ;
    for(c = 0; c < aux; c++){
        if((strcmp(listCasas[c].anuncio,"Removido") != 0) && (strcmp(listCasas[c].anuncio,"") != 0)){
            fprintf(Casa,"%s\n",(listCasas + c)->anuncio);
            fprintf(Casa,"%.1f\n",(listCasas + c)->valorcasa);
            fprintf(Casa,"%s\n",(listCasas + c)->dispo);
            fprintf(Casa,"%d\n",(listCasas + c)->pavimentos);
            fprintf(Casa,"%d\n",(listCasas + c)->quartos);
            fprintf(Casa,"%.1f\n",(listCasas + c)->areaTerren);
            fprintf(Casa,"%.1f\n",(listCasas + c)->areaConstr);
            fprintf(Casa,"%s\n",(listCasas + c)->endereco.rua);
            fprintf(Casa,"%s\n",(listCasas + c)->endereco.numero);
            fprintf(Casa,"%s\n",(listCasas + c)->endereco.bairro);
            fprintf(Casa,"%s\n",(listCasas + c)->endereco.CEP);
            fprintf(Casa,"%s\n",(listCasas + c)->endereco.cidade);
        }
    }
    fclose(Casa);



    FILE *Apart = fopen("Arquivo_Apartamento.txt","w");
    for(a = 0; a < QNT; a++){
        if(!(strcmp(listApartamenots[a].anuncio,""))){
            break;
        }
    }
    aux = a;
    for(a = 0; a < aux; a++){
        if((strcmp(listApartamenots[a].anuncio,"Removido") != 0) && (strcmp(listApartamenots[a].anuncio,"") != 0)){
             fprintf(Apart,"%s\n",listApartamenots[a].anuncio);
             fprintf(Apart,"%f\n",listApartamenots[a].valor);
             fprintf(Apart,"%s\n",listApartamenots[a].dispo);
             fprintf(Apart,"%d\n",listApartamenots[a].quartos);
             fprintf(Apart,"%s\n",listApartamenots[a].posicao);
             fprintf(Apart,"%s\n",listApartamenots[a].andar);
             fprintf(Apart,"%f\n",listApartamenots[a].valorCond);
             fprintf(Apart,"%d\n",listApartamenots[a].vaga);
             fprintf(Apart,"%s\n",listApartamenots[a].endereco.rua);
             fprintf(Apart,"%s\n",listApartamenots[a].endereco.numero);
             fprintf(Apart,"%s\n",listApartamenots[a].endereco.bairro);
             fprintf(Apart,"%s\n",listApartamenots[a].endereco.CEP);
             fprintf(Apart,"%s\n",listApartamenots[a].endereco.cidade);
        }
    }
    fclose(Apart);



    FILE *Terr = fopen("Arquivo_Terreno.txt","w");
    for(t = 0; t < QNT; t++){
        if(!(strcmp(listTerr[t].anuncio,""))){
            break;
        }
    }
    aux = t;
    for(t = 0; t < aux; t++){
        if((strcmp(listTerr[t].anuncio,"Removido") != 0) && (strcmp(listTerr[t].anuncio,"") != 0))
        fprintf(Terr,"%s\n",(listTerr + t)->anuncio);
        fprintf(Terr,"%.1f\n",(listTerr + t)->valor);
        fprintf(Terr,"%s\n",(listTerr + t)->dispo);
        fprintf(Terr,"%.1f\n",(listTerr + t)->area);
        fprintf(Terr,"%s\n",(listTerr + t)->endereco.rua);
        fprintf(Terr,"%s\n",(listTerr + t)->endereco.numero);
        fprintf(Terr,"%s\n",(listTerr + t)->endereco.bairro);
        fprintf(Terr,"%s\n",(listTerr + t)->endereco.CEP);
        fprintf(Terr,"%s\n",(listTerr + t)->endereco.cidade);
    }
    fclose(Terr);

}
void lerDados(t_Casa listCasas[],t_Apartameno listApartamenots[],t_Terreno listTerr[]){
    FILE *Casa = fopen("Arquivo_Casa.txt","r+");
    int c = 0,a = 0,t = 0;

        while(1){
            fscanf(Casa,"%[^\n]\n",listCasas[c].anuncio);
            fscanf(Casa,"%f\n",&listCasas[c].valorcasa);
            fscanf(Casa,"%[^\n]\n",listCasas[c].dispo);
            fscanf(Casa,"%d\n",&listCasas[c].pavimentos);
            fscanf(Casa,"%d\n",&listCasas[c].quartos);
            fscanf(Casa,"%f\n",&listCasas[c].areaTerren);
            fscanf(Casa,"%f\n",&listCasas[c].areaConstr);
            fscanf(Casa,"%[^\n]\n",listCasas[c].endereco.rua);
            fscanf(Casa,"%[^\n]\n",listCasas[c].endereco.numero);
            fscanf(Casa,"%[^\n]\n",listCasas[c].endereco.bairro);
            fscanf(Casa,"%[^\n]\n",listCasas[c].endereco.CEP);
            fscanf(Casa,"%[^\n]\n",listCasas[c].endereco.cidade);
            c++;

            if(feof(Casa)){
                break;
            }
        }

    fclose(Casa);
        FILE *Apart = fopen("Arquivo_Apartamento.txt","r+");
            while(1){
                fscanf(Apart,"%[^\n]\n",listApartamenots[a].anuncio);
                fscanf(Apart,"%f\n",&listApartamenots[a].valor);
                fscanf(Apart,"%[^\n]\n",listApartamenots[a].dispo);
                fscanf(Apart,"%d\n",&listApartamenots[a].quartos);
                fscanf(Apart,"%[^\n]\n",listApartamenots[a].posicao);
                fscanf(Apart,"%[^\n]\n",listApartamenots[a].andar);
                fscanf(Apart,"%f\n",&listApartamenots[a].valorCond);
                fscanf(Apart,"%d\n",&listApartamenots[a].vaga);
                fscanf(Apart,"%[^\n]\n",listApartamenots[a].endereco.rua);
                fscanf(Apart,"%[^\n]\n",listApartamenots[a].endereco.numero);
                fscanf(Apart,"%[^\n]\n",listApartamenots[a].endereco.bairro);
                fscanf(Apart,"%[^\n]\n",listApartamenots[a].endereco.CEP);
                fscanf(Apart,"%[^\n]\n",listApartamenots[a].endereco.cidade);
                a++;

                if(feof(Apart)){
                    break;
                }
            }

            fclose(Apart);
                FILE *Terr = fopen("Arquivo_Terreno.txt","r+");


           while(1){
                fscanf(Terr,"%[^\n]\n",listTerr[t].anuncio);
                fscanf(Terr,"%f\n",&listTerr[t].valor);
                fscanf(Terr,"%[^\n]\n",listTerr[t].dispo);
                fscanf(Terr,"%f\n",&listTerr[t].area);
                fscanf(Terr,"%[^\n]\n",listTerr[t].endereco.rua);
                fscanf(Terr,"%[^\n]\n",listTerr[t].endereco.numero);
                fscanf(Terr,"%[^\n]\n",listTerr[t].endereco.bairro);
                fscanf(Terr,"%[^\n]\n",listTerr[t].endereco.CEP);
                fscanf(Terr,"%[^\n]\n",listTerr[t].endereco.cidade);
                t++;

                if(feof(Apart)){
                    break;
                }
            }
 fclose(Terr);
}

int main(){

    setlocale(LC_ALL, "Portuguese");

    t_Casa Casas[QNT] = {};
    t_Apartameno Apartamentos[QNT] = {};
    t_Terreno Terrenos[QNT] = {};
    int qcad, op, sair = 0, opCadastro, opExibir, opConsulta, opBusca;

    do{
        system("color 02"); //MATRIXXXXX
        puts("======================================================================");
        puts("               SISTEMA GERENCIADOR DE IMÓVEIS 9000");
        puts("======================================================================\n\n");
        puts("      Digite o número da opção para acessar as funções.\n");
        puts("  1. Cadastrar imóvel.");
        puts("  2. Exibir imóveis.");
        puts("  3. Consulta imóveis disponíveis.");
        puts("  4. Buscar imóveis.");
        puts("  5. Remover imóveis.");
        puts("  6. Editar lista de imóveis.");
        puts("  7. Carregar dados.");
        puts("  8. Salvar.");
        puts("  9. Sair.");

        scanf("%d%*c",&op);
        system("cls");

        switch (op){
//------------------ Cadastro dos Imoveis ------------------------
            case 1:
                puts("   Digite o número respectivo para escolher a opção de cadastro .\n\n");
                puts("  1. Cadastrar Casas.");
                puts("  2. Cadastrar Apartamentos.");
                puts("  3. Cadastrar Terrenos.\n");
                scanf("%d%*c",&opCadastro);
                system("cls");


                switch (opCadastro){
                    case 1:
                        printf("   Digite a quantidade de casas que deseja cadastrar. ");
                        scanf("%d%*c",&qcad);
                        CadastrarCasa(Casas,qcad);
                        system("cls");
                        break;

                    case 2:
                        printf("   Digite a quantidade de apartamentos que deseja cadastrar. ");
                        scanf("%d%*c",&qcad);
                        CadastrarApartamento(Apartamentos,qcad);
                        system("cls");
                        break;

                    case 3:
                        printf("   Digite a quantidade de terrenos que deseja cadastrar. ");
                        scanf("%d%*c",&qcad);
                        CadastarTerreno(Terrenos,qcad);
                        system("cls");
                        break;
                }
                break;


//------------------------Exibiçãos dos Imoveis ---------------------------------
            case 2:
                puts("   Digite um número para a respectiva exibição. ");
                puts("  1. Exibir casas.");
                puts("  2. Exibir apartamentos.");
                puts("  3. Exibir terrenos.");
                puts("  4. Exibir todos os imóveis.");
                scanf("%d%*c",&opExibir);
                system("cls");


                switch(opExibir){
                    case 1:
                        ExibeCasa(Casas);
                        system("pause");
                        system("cls");
                        break;

                    case 2:
                        ExibeApartamento(Apartamentos);
                        system("pause");
                        system("cls");
                        break;

                    case 3:
                        ExibeTerreno(Terrenos);
                        system("pause");
                        system("cls");
                        break;

                    case 4:
                        printf("--- Casas ---\n");
                        ExibeCasa(Casas);
                        printf("\n");
                        printf("--- Apartamentos ---\n");
                        ExibeApartamento(Apartamentos);
                        printf("--- Terrenos ---\n");
                        printf("\n");
                        ExibeTerreno(Terrenos);
                        system("pause");
                        system("cls");
                        break;
                }
            break;


// ---------------------- Consulta Imoveis Disponiveis -------------------------------------
            case 3:
                puts("   Digite um número para escolher o tipo de exibição. ");
                puts("  1. Para exibir todos os imoveis disponiveis. ");
                puts("  2. Para exibir todos disponiveis para vender");
                puts("  3. Para exibir todo disponiveis para alugar");
                scanf("%d%*c",&opConsulta);
                system("cls");


                switch(opConsulta){
                    case 1:
                        consultaImovelDispo(Casas,Apartamentos,Terrenos);
                        system("pause");
                        system("cls");
                        break;

                    case 2:
                        consultaImovelAvenda(Casas,Apartamentos,Terrenos);
                        system("pause");
                        system("cls");
                        break;

                    case 3:
                        consultaImovelAlugar(Casas,Apartamentos,Terrenos);
                        system("pause");
                        system("cls");
                        break;
                }
            break;


//----------------------Busca Imoveis----------------------------
            case 4:
                puts("   Digite um numero para o modo de busca. ");
                puts("  1. Busca por titulo do Anuncio.");
                puts("  2. Busca por Bairro.");
                puts("  3. Busca por Valor.");
                scanf("%d%*c",&opBusca);
                system("cls");


                switch(opBusca){
                    case 1:
                        BuscaImovelAnuncio(Casas,Apartamentos,Terrenos);
                        system("pause");
                        system("cls");
                        break;

                    case 2:
                        BuscaImovelBairro(Casas,Apartamentos,Terrenos);
                        system("pause");
                        system("cls");
                        break;

                    case 3:
                        BuscaImovelValor(Casas,Apartamentos,Terrenos);
                        system("pause");
                        system("cls");
                        break;
                }
            break;


//----------------------Remover imóveis---------------------------
            case 5:
                RemoverImovel(Casas,Apartamentos,Terrenos);
                system("pause");
                system("cls");
                break;


//---------------------- Editar determinado Imóvel ---------------
            case 6:
                EditarImovel(Casas,Apartamentos,Terrenos);
                system("pause");
                system("cls");
                break;


//---------------------- Carregar dados ---------------------
            case 7:
                lerDados(Casas,Apartamentos,Terrenos);
                break;


//----------------------- Salvar -----------------------------
            case 8:
                SalvarDados(Casas,Apartamentos,Terrenos);
                break;


//----------------------- Sair -----------------------
            case 9:
                puts("Tem certeza que deseja sair?");

                char str[TM];

                while(1){
                    gets(str);
                    if(strcmp("\n",str)){
                        sair = 1;
                        break;
                    }
                    break;
                }
        }

    }while(!sair);

    return 0;
}
