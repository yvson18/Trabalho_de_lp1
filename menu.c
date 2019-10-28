#include <stdio.h>
#include <locale.h>

int main(){
    int opcao;

    setlocale(LC_ALL, "Portuguese");

    do{
        puts("      SISTEMA GERENCIADOR DE IMÓVEIS 9000\n\n");
        puts("      Digite o número da opção para acessar as funções.\n");
        puts("  1. Cadastrar imóvel.");
        puts("  2. Consultar todos os imóveis disponíveis.");
        puts("  3. Buscar imóveis.");
        puts("  4. Editar lista de imóveis.");
        puts("  5. Sair do programa.");

        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                //função de cadastramento
                    break;
            case 2:
                //função de consulta de todos
                    break;
            case 3:
                //menu de busca (título, bairro, valor, para vender, para alugar)
                    break;
            case 4:
                //menu de edição (remoção, editar)
                    break;
            case 5:
                    break;
        }

    }while(opcao >= 5);


    return 0;
}
