#include <stdio.h>
#include <locale.h>

int main(){
    int opcao;

    setlocale(LC_ALL, "Portuguese");

    do{
        puts("      SISTEMA GERENCIADOR DE IM�VEIS 9000\n\n");
        puts("      Digite o n�mero da op��o para acessar as fun��es.\n");
        puts("  1. Cadastrar im�vel.");
        puts("  2. Consultar todos os im�veis dispon�veis.");
        puts("  3. Buscar im�veis.");
        puts("  4. Editar lista de im�veis.");
        puts("  5. Sair do programa.");

        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                //fun��o de cadastramento
                    break;
            case 2:
                //fun��o de consulta de todos
                    break;
            case 3:
                //menu de busca (t�tulo, bairro, valor, para vender, para alugar)
                    break;
            case 4:
                //menu de edi��o (remo��o, editar)
                    break;
            case 5:
                    break;
        }

    }while(opcao >= 5);


    return 0;
}
