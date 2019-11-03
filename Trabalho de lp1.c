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

//----------------------------------------------
//qcad significa a quantidade de coisas que o
//usuario quer cadastrar e deve ser chamada no menu


void CadastrarApartamento(t_Apartameno listApartamenots[],int qcad){

    int i,k;

// ---------- Procura em todo o array por 'Removido' e sobrescreve informacao
        for(i = 0; (i < QNT); i++){

            if(!(strcmp(listApartamenots[i].anuncio,"Removido"))){

                        // decrementa caso ache removido na estrutura
                        --qcad ;
                 printf("Estou em removido\n\n"); // pode apagar dps isso aqui é uma flag
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

             int b = k; // gambiarra mas deixa ae se n da merda


                    for(k; k < b+qcad ; k++){

                 printf("Estou em fim da estrutura\n\n");// pode apagar dps isso aqui é uma flag
                 printf("Digite o tiulo do anucio do Apartamento: ");
                 gets(listApartamenots[k].anuncio);
                 printf("Digite o valor do apartamento: ");
                 scanf("%f%*c",&listApartamenots[k].valor);
                 printf("Digite a disponibilidade do apartamento: ");
                 gets(listApartamenots[k].dispo);
                 printf("Digite a quantidade de quartos: ");
                 scanf("%d%*c",&listApartamenots[k].quartos);
                 printf("Digite a posicao do apartamento: ");
                 gets(listApartamenots[k].posicao);
                 printf("Digite a quantidade de andares: ");
                 gets(listApartamenots[k].andar);
                 printf("Digite o valor do condominio: ");
                 scanf("%f%*c",&listApartamenots[k].valorCond);
                 printf("Digite a quantidade de vagas de garagem: ");
                 scanf("%d%*c",&listApartamenots[k].vaga);
                 printf("Digite a rua do apartamento: ");
                 gets(listApartamenots[k].endereco.rua);
                 printf("Digite o numero do apartamento: ");
                 gets(listApartamenots[k].endereco.numero);
                 printf("Digite o bairro do apartamento: ");
                 gets(listApartamenots[k].endereco.bairro);
                 printf("Digite o CEP do apartamento: ");
                 gets(listApartamenots[k].endereco.CEP);
                 printf("Digite a Cidade do apartamento: ");
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

                        // decrementa caso ache removido na estrutura
                        --qcad ;
                        printf("Estou em removido\n\n"); // pode apagar dps isso aqui é uma flag
                        printf("Digite o tiulo do anucio da casa: ");
                        gets((listCasas + i)->anuncio);
                        printf("Digite o valor da casa: ");
                        scanf("%f%*c",&(listCasas + i)->valorcasa);
                        printf("Digite a disponibilidade da casa: ");
                        gets((listCasas + i)->dispo);
                        printf("Digite a quantidade de pavimentos da casa: ");
                        scanf("%d*c",&(listCasas + i)->pavimentos);
                        printf("Digite a quantidade de quartos: ");
                        scanf("%d*c",&(listCasas + i)->quartos);
                        printf("Digite a Area do terreno: ");
                        scanf("%f%*c",&(listCasas + i)->areaTerren);
                        printf("Digite a Area construida: ");
                        scanf("%f%*c",&(listCasas + i)->areaConstr);
                        printf("Digite a rua: ");
                        gets((listCasas + i)->endereco.rua);
                        printf("Digite o numero: ");
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

// ------------- Escreve as informacoes qcad vezes ( caso n se ache removido la em cima ele executa de boas qcad vezes)
//(caso tenha se achado la em cima ele so executa se sobrou alguma casa para cadastrar)


        if(qcad != 0){

            for(k = 0; k < QNT; k++){

                        if(!(strcmp(listCasas[k].anuncio,""))){
                            break;

                        }
                    }

             int b = k; // gambiarra mas deixa ae se n da merda


                    for(k; k < b+qcad ; k++){

                            printf("Estou em fim da estrutura\n\n");// pode apagar dps isso aqui é uma flag
                            printf("Digite o tiulo do anucio da casa: ");
                            gets((listCasas + k)->anuncio);
                            printf("Digite o valor da casa: ");
                            scanf("%f%*c",&(listCasas + k)->valorcasa);
                            printf("Digite a disponibilidade da casa: ");
                            gets((listCasas + k)->dispo);
                            printf("Digite a quantidade de pavimentos da casa: ");
                            scanf("%d*c",&(listCasas + k)->pavimentos);
                            printf("Digite a quantidade de quartos: ");
                            scanf("%d*c",&(listCasas + k)->quartos);
                            printf("Digite a Area do terreno: ");
                            scanf("%f%*c",&(listCasas + k)->areaTerren);
                            printf("Digite a Area construida: ");
                            scanf("%f%*c",&(listCasas + k)->areaConstr);
                            printf("Digite a rua: ");
                            gets((listCasas + k)->endereco.rua);
                            printf("Digite o numero: ");
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
                        printf("Digite o titulo do anuncio do terreno: ");
                        gets((listTerr + i)->anuncio);
                        printf("Digite o valor do terreno: ");
                        scanf("%f%*c",&(listTerr + i)->valor);
                        printf("Digite a disponibilidade do terreno: ");
                        gets((listTerr + i)->dispo);
                        printf("Digite o valor da area do terreno: ");
                        scanf("%f%*c",&(listTerr + i)->area);
                        printf("Digite o nome da rua: ");
                        gets((listTerr + i)->endereco.rua);
                        printf("Digite o numero do terreno: ");
                        gets((listTerr + i)->endereco.numero);
                        printf("Digite o Bairro do terreno: ");
                        gets((listTerr + i)->endereco.bairro);
                        printf("Digite o CEP do terreno: ");
                        gets((listTerr + i)->endereco.CEP);
                        printf("Digite a Cidade do terreno: ");
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

             int b = k; // gambiarra mas deixa ae se n da merda


                    for(k; k < b+qcad ; k++){

                        printf("Estou em fim da estrutura\n\n");// pode apagar dps isso aqui é uma flag
                        printf("Digite o titulo do anuncio do terreno: ");
                        gets((listTerr + k)->anuncio);
                        printf("Digite o valor do terreno: ");
                        scanf("%f%*c",&(listTerr + k)->valor);
                        printf("Digite a disponibilidade do terreno: ");
                        gets((listTerr + k)->dispo);
                        printf("Digite o valor da area do terreno: ");
                        scanf("%f%*c",&(listTerr + k)->area);
                        printf("Digite o nome da rua: ");
                        gets((listTerr + k)->endereco.rua);
                        printf("Digite o numero do terreno: ");
                        gets((listTerr + k)->endereco.numero);
                        printf("Digite o Bairro do terreno: ");
                        gets((listTerr + k)->endereco.bairro);
                        printf("Digite o CEP do terreno: ");
                        gets((listTerr + k)->endereco.CEP);
                        printf("Digite a Cidade do terreno: ");
                        gets((listTerr + k)->endereco.cidade);
                        system("cls");

                }
        }

    system("pause");
}

void CarregaDadosCasas(t_Casa listCasas[]){

    FILE *fp = fopen("C:\\Users\\yvson\\Documents\\Reaprendendo a voar em c\\Doc_de_texto\\Lista de casas.txt","r");
    int i = 0;

        if(fp==NULL){
            printf("Erro ao abrir o arquivo\n");
        }

        for(i = 0; i < QNT ; i++){

                fscanf(fp,"%[^\n]\n",listCasas[i].anuncio);
                fscanf(fp,"%f\n",&listCasas[i].valorcasa);
                fscanf(fp,"%[^\n]\n",listCasas[i].dispo);
                fscanf(fp,"%d\n",&listCasas[i].pavimentos);
                fscanf(fp,"%d\n",&listCasas[i].quartos);
                fscanf(fp,"%f\n",&listCasas[i].areaTerren);
                fscanf(fp,"%f\n",&listCasas[i].areaConstr);
                fscanf(fp,"%[^\n]\n",listCasas[i].endereco.rua);
                fscanf(fp,"%[^\n]\n",listCasas[i].endereco.numero);
                fscanf(fp,"%[^\n]\n",listCasas[i].endereco.bairro);
                fscanf(fp,"%[^\n]\n",listCasas[i].endereco.CEP);
                fscanf(fp,"%[^\n]\n",listCasas[i].endereco.cidade);


        }

     fclose(fp);
}
void CarregaDadosApartamento(t_Apartameno listApartamenots[]){

     FILE *fp = fopen("C:\\Users\\yvson\\Documents\\Reaprendendo a voar em c\\Doc_de_texto\\Lista de apartamentos.txt","r");
     int i = 0;

        if(fp==NULL){
            printf("Erro ao abrir o arquivo\n");
        }

            for(i = 0; i < QNT; i++){

                fscanf(fp,"%[^\n]\n",listApartamenots[i].anuncio);
                fscanf(fp,"%f\n",&listApartamenots[i].valor);
                fscanf(fp,"%[^\n]\n",listApartamenots[i].dispo);
                fscanf(fp,"%d\n",&listApartamenots[i].quartos);
                fscanf(fp,"%[^\n]\n",listApartamenots[i].posicao);
                fscanf(fp,"%[^\n]\n",listApartamenots[i].andar);
                fscanf(fp,"%f\n",&listApartamenots[i].valorCond);
                fscanf(fp,"%d\n",&listApartamenots[i].vaga);
                fscanf(fp,"%[^\n]\n",listApartamenots[i].endereco.rua);
                fscanf(fp,"%[^\n]\n",listApartamenots[i].endereco.numero);
                fscanf(fp,"%[^\n]\n",listApartamenots[i].endereco.bairro);
                fscanf(fp,"%[^\n]\n",listApartamenots[i].endereco.CEP);
                fscanf(fp,"%[^\n]\n",listApartamenots[i].endereco.cidade);

            }
      fclose(fp);
}

void CarregaDadosTerrenos(t_Terreno listTerrenos[]){


    FILE *fp = fopen("C:\\Users\\yvson\\Documents\\Reaprendendo a voar em c\\Doc_de_texto\\Lista de terrenos.txt","r");
    int i = 0;

       for(i = 0; i < 2; i++){

                fscanf(fp,"%[^\n]\n",listTerrenos[i].anuncio);
                fscanf(fp,"%f\n",&listTerrenos[i].valor);
                fscanf(fp,"%[^\n]\n",listTerrenos[i].dispo);
                fscanf(fp,"%f\n",&listTerrenos[i].area);
                fscanf(fp,"%[^\n]\n",listTerrenos[i].endereco.rua);
                fscanf(fp,"%[^\n]\n",listTerrenos[i].endereco.numero);
                fscanf(fp,"%[^\n]\n",listTerrenos[i].endereco.bairro);
                fscanf(fp,"%[^\n]\n",listTerrenos[i].endereco.CEP);
                fscanf(fp,"%[^\n]\n",listTerrenos[i].endereco.cidade);
        }

}

void BuscaImovelAnuncio(t_Casa listCasas[],t_Apartameno listApartamenots[],t_Terreno listTerrenos[]){

        char Anuncio[TM];


            printf("Digite o anuncio que deseja encontrar: ");
            gets(Anuncio);


              for(int j = 0; j < QNT; j++){


                         if(!(strcmp(Anuncio,listApartamenots[j].anuncio))){
                            printf("%s\n",listApartamenots[j].anuncio);
                            break;
                        }
                        if(!(strcmp(Anuncio,listCasas[j].anuncio))){
                            printf("%s\n",listCasas[j].anuncio);
                            break;
                        }
                        if(!(strcmp(Anuncio,listTerrenos[j].anuncio))){
                            printf("%s\n",listTerrenos[j].anuncio);
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
                            printf("%s\n",listApartamenots[j].anuncio);
                            break;
                        }
                        if(!(strcmp(Bairro,listCasas[j].endereco.bairro))){
                            printf("%s\n",listCasas[j].anuncio);
                            break;
                        }
                        if(!(strcmp(Bairro,listTerrenos[j].endereco.bairro))){
                            printf("%s\n",listTerrenos[j].anuncio);
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
                    printf("%s:------%.0f\n",listCasas[i].anuncio,listCasas[i].valorcasa);
             }

        }

       printf("------Apartamentos-------\n\n");
        for(i = 0; i < QNT; i++){

            if(listApartamenots[i].valor>valor){
                    printf("%s:------%.0f\n",listApartamenots[i].anuncio,listApartamenots[i].valor);
             }

        }

        printf("------Terrenos-------\n\n");
        for(i = 0; i < QNT; i++){

            if(listTerrenos[i].valor>valor){
                    printf("%s:------%.0f\n",listTerrenos[i].anuncio,listTerrenos[i].valor);
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
                    printf("Cidade: %s\n",listCasas[i].endereco.cidade);
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
              printf("Estou aqui 1");
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

                    printf("Digite o Titulo do anuncio que deseja editar: ");
                    gets(Anuncio);


                      for(k = 0; k < QNT; k++){

//-------------------------Edição dos apartamentos---------------------------------------
                    if(!(strcmp(Anuncio,listApartamenots[k].anuncio))){

                             printf(" Digite a opção que deseja modificar.\n\n");
                             printf("Opções: <anuncio><valor><disponibilidade><quartos><posicao><andares>\n");
                             printf("<condominio><vagas><rua><numero><numero><bairro><CEP><cidade>\n");
                             gets(opcao);
                             system("cls");

                             if(!strcmp(opcao,"anuncio")){
                                 printf("Digite o tiulo do anucio do Apartamento: ");
                                 gets(listApartamenots[k].anuncio);
                                 break;
                             }
                             if(!strcmp(opcao,"valor")){
                                 printf("Digite o valor do apartamento: ");
                                 scanf("%f%*c",&listApartamenots[k].valor);
                                 break;
                             }
                             if(!strcmp(opcao,"disponibilidade")){
                                 printf("Digite a disponibilidade do apartamento: ");
                                 gets(listApartamenots[k].dispo);
                                 break;
                             }
                             if(!strcmp(opcao,"quartos")){
                                 printf("Digite a quantidade de quartos: ");
                                 scanf("%d%*c",&listApartamenots[k].quartos);
                                 break;
                             }
                             if(!strcmp(opcao,"posicao")){
                                 printf("Digite a posicao do apartamento: ");
                                 gets(listApartamenots[k].posicao);
                                 break;
                             }
                             if(!strcmp(opcao,"andares")){
                                 printf("Digite a quantidade de andares: ");
                                 gets(listApartamenots[k].andar);
                                 break;
                             }
                             if(!strcmp(opcao,"condominio")){
                                 printf("Digite o valor do condominio: ");
                                 scanf("%f%*c",&listApartamenots[k].valorCond);
                                 break;
                             }
                             if(!strcmp(opcao,"vagas")){
                                 printf("Digite a quantidade de vagas de garagem: ");
                                 scanf("%d%*c",&listApartamenots[k].vaga);
                                 break;
                             }
                             if(!strcmp(opcao,"rua")){
                                 printf("Digite a rua do apartamento: ");
                                 gets(listApartamenots[k].endereco.rua);
                                 break;
                             }
                             if(!strcmp(opcao,"numero")){
                                 printf("Digite o numero do apartamento: ");
                                 gets(listApartamenots[k].endereco.numero);
                                 break;
                             }
                             if(!strcmp(opcao,"bairro")){
                                 printf("Digite o bairro do apartamento: ");
                                 gets(listApartamenots[k].endereco.bairro);
                                 break;
                             }
                             if(!strcmp(opcao,"CEP")){
                                 printf("Digite o CEP do apartamento: ");
                                 gets(listApartamenots[k].endereco.CEP);
                                 break;
                             }
                             if(!strcmp(opcao,"cidade")){
                                 printf("Digite a Cidade do apartamento: ");
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

int main(){

    setlocale(LC_ALL, "Portuguese");

    t_Casa Casas[QNT];
    t_Apartameno Apartamentos[QNT];
    t_Terreno Terrenos[QNT];
    int qcad,op,sair = 0,sair2 = 0,opCadastro,opExibir,opConsulta,opBusca;


         do{
        system("color 02");

        puts("      SISTEMA GERENCIADOR DE IMÓVEIS 9000\n\n");
        puts("      Digite o número da opção para acessar as funções.\n");
        puts("  1. Cadastrar imóvel.");
        puts("  2. Exibir Imoveis.");
        puts("  3. Consulta Imoveis Disponiveis.");
        puts("  4. Buscar imóveis.");
        puts("  5. Remover imóveis.");
        puts("  6. Editar lista de imóveis.");
        puts("  7. Sair do programa.");

        scanf("%d%*c",&op);
        system("cls");

                    switch (op){
//------------------ Cadastro dos Imoveis ------------------------
                    case 1:

             puts("  Digite o numero respectivo para escolher a opção de cadastro .\n\n");
             puts("   1.Cadastrar Casas.");
             puts("   2.Cadastrar Apartamentos.");
             puts("   3.Cadastrar Terrenos.\n");

             scanf("%d%*c",&opCadastro);
             system("cls");

                    switch (opCadastro){


                            case 1:
                            printf("Digite a quantidade de casas que deseja cadastrar. ");
                            scanf("%d%*c",&qcad);
                            CadastrarCasa(Casas,qcad);
                            system("cls");
                            break;

                            case 2:
                            printf("Digite a quantidade de apartamentos que deseja cadastrar. ");
                            scanf("%d%*c",&qcad);
                            CadastrarApartamento(Apartamentos,qcad);
                            system("cls");
                            break;

                            case 3:
                            printf("Digite a quantidade de terrenos que deseja cadastrar. ");
                            scanf("%d%*c",&qcad);
                            CadastarTerreno(Terrenos,qcad);
                            system("cls");
                            break;

                    }

                    break;
//------------------------Exibiçãos dos Imoveis ---------------------------------

                    case 2:

                   puts("  Digite um numero para a respectiva exibição. ");
                   puts("  1. Para exibir apenas casas.");
                   puts("  2. Para exibir apenas apartamentos.");
                   puts("  3. Para exibir apenas terrenos.");
                   puts("  4. Para exibir todos os Imóveis.");
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
// ----------------------   Consulta Imoveis Disponiveis -------------------------------------

                    case 3:
                   puts("   Digite um numero para escolher o tipo de exibição. ");
                   puts("   1. Para exibir todos os imoveis disponiveis. ");
                   puts("   2. Para exibir todos disponiveis para vender");
                   puts("   3. Para exibir todo disponiveis para alugar");

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
                   puts("  1.Busca por titulo do Anuncio.");
                   puts("  2.Busca por Bairro.");
                   puts("  3.Busca por Valor.");

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
                    case 6:
//---------------------- Editar determinado Imóvel---------------
                    EditarImovel(Casas,Apartamentos,Terrenos);
                    system("pause");
                    system("cls");
                    break;
                    case 7:
                    sair = 1;
                    break;


                    }



}while(!sair);


//----- Funcoes de Carregamento -------  // provavelmente isso vai sair

    // CarregaDadosCasas(Casas);
    // CarregaDadosApartamento(Apartamentos);
     //CarregaDadosTerrenos(Terrenos);




return 0;
}
