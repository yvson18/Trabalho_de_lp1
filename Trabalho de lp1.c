#include <stdio.h>
#include <string.h>
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
    int ultimo;

}t_Apartameno;

typedef struct{

    char anuncio[TM];
    float valor;
    char dispo[TM];
    float area;
    t_Endereco endereco;
    int ultimo;
}t_Terreno;

//----------------------------------------------
//qcad significa a quantidade de coisas que o
//usuario quer cadastrar e deve ser chamada no menu


void CadastrarCasa(t_Casa listCasas[],int qcad){

    int i,k;



    FILE *fp = fopen("C:\\Users\\yvson\\Documents\\Reaprendendo a voar em c\\Doc_de_texto\\Lista teste de casas.txt","r");


        for(int l = 0; l < QNT ; l++){

                fscanf(fp,"%[^\n]\n",listCasas[l].anuncio);
                fscanf(fp,"%f\n",&listCasas[l].valorcasa);
                fscanf(fp,"%[^\n]\n",listCasas[l].dispo);
                fscanf(fp,"%d\n",&listCasas[l].pavimentos);
                fscanf(fp,"%d\n",&listCasas[l].quartos);
                fscanf(fp,"%f\n",&listCasas[l].areaTerren);
                fscanf(fp,"%f\n",&listCasas[l].areaConstr);
                fscanf(fp,"%[^\n]\n",listCasas[l].endereco.rua);
                fscanf(fp,"%[^\n]\n",listCasas[l].endereco.numero);
                fscanf(fp,"%[^\n]\n",listCasas[l].endereco.bairro);
                fscanf(fp,"%[^\n]\n",listCasas[l].endereco.CEP);
                fscanf(fp,"%[^\n]\n",listCasas[l].endereco.cidade);


        }




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


                }
        }

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
                            printf("%s\n",listApartamenots[j].endereco.bairro);
                            break;
                        }
                        if(!(strcmp(Bairro,listCasas[j].endereco.bairro))){
                            printf("%s\n",listCasas[j].endereco.bairro);
                            break;
                        }
                        if(!(strcmp(Bairro,listTerrenos[j].endereco.bairro))){
                            printf("%s\n",listTerrenos[j].endereco.bairro);
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

int main(){

    t_Casa Casas[QNT];
    t_Apartameno Apartamentos[QNT];
    t_Terreno Terrenos[QNT];
    int qcad = 2;

//----- Funcoes de cadastro ------

   CadastrarCasa(Casas,qcad);

//................................

//----- Funcoes de Carregamento -------  // provavelmente isso vai sair

    // CarregaDadosCasas(Casas);
    // CarregaDadosApartamento(Apartamentos);
     //CarregaDadosTerrenos(Terrenos);

//....................................

// ----- Funcoes de Busca ------------
//      BuscaImovelAnuncio(Casas,Apartamentos,Terrenos);
//      BuscaImovelBairro(Casas,Apartamentos,Terrenos);
//      BuscaImovelValor(Casas,Apartamentos,Terrenos);
//      consultaImovelDispo(Casas,Apartamentos,Terrenos);
//      consultaImovelAvenda(Casas,Apartamentos,Terrenos);
//      consultaImovelAlugar(Casas,Apartamentos,Terrenos);
//      consultaImovelDispo(Casas,Apartamentos,Terrenos);
//....................................

    printf("%s",Casas[0].anuncio);


return 0;
}
