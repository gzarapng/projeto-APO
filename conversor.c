#include <stdio.h>
#include <locale.h>

int menu() {
    int opc;
    printf("Escolha uma opção\n");
    printf("1) Sobre o programa - instruções e outras informações\n");
    printf("2) Realizar conversão\n");
    printf("3) Descrição - conceitos, histórico, definição e processo de conversão\n");
    printf("4) Sair\n");
    printf("Digite a opção escolhida: ");
    scanf("%d", &opc);
    while (opc < 0 || opc > 4) { //Loop enquanto uma opção inválida for digitada 
        printf("Opção inválida, digite novamente: ");
        scanf("%d", &opc);
    }

    return opc; //Retorna o valor escolhido pelo usuário
}

void imprimeSobre() {

}

void imprimeDescricao() {

}

int escolheTipo() {
    int tipo;
    printf("1) Quilômetro quadrado (km²)\n");
    printf("2) Hectare (ha)\n");
    printf("3) Metro quadrado(m²)\n");
    printf("4) Centímetro quadrado (cm²)\n");
    printf("5) Milímetro quadrado (mm²)\n");
    printf("6) Micrometro quadrado\n");
    printf("7) Nanômetro quadrado\n");
    scanf("%d", &tipo);

    return tipo;
}


/* Funções de conversão */

/* ADICIONAR TODOS OS TIPOS DE CONVERSÃO NECESSÁRIOS */

int main() {
    setlocale(LC_ALL, "Portuguese");
    int opcao;    
    char tipo1, tipo2;
    char res = 's';

    opcao = menu(); //Atribui à variavel o valor retornado da função

    //Chama as funções de acordo com a opção escolhida
    if (opcao == 1) imprimeSobre(); 
    if (opcao == 2) {
        printf("CONVERTER DE\n");
        tipo1 = escolheTipo();
        printf("PARA\n");
        tipo2 = escolheTipo();
        
        while(res == 's') {
            if (tipo1 == 1) {
                if (tipo2 == 1) {
                    printf("Já convertido!");
                } else if (tipo2 == 2) {

                } else if (tipo2 == 3) {
                    
                } else if (tipo2 == 4) {

                } else if (tipo2 == 5) {

                } else if (tipo2 == 6) {

                } else if (tipo2 == 7) {

                }
            } else if (tipo2 == 2) {
                if (tipo2 == 1) {

                } else if (tipo2 == 2) {
                    printf("Já convertido!");
                } else if (tipo2 == 3) {
                    
                } else if (tipo2 == 4) {

                } else if (tipo2 == 5) {

                } else if (tipo2 == 6) {

                } else if (tipo2 == 7) {

                }
            } else if (tipo1 == 3) {
                if (tipo2 == 1) {
                    
                } else if (tipo2 == 2) {

                } else if (tipo2 == 3) {
                    printf("Já convertido!");
                } else if (tipo2 == 4) {

                } else if (tipo2 == 5) {

                } else if (tipo2 == 6) {

                } else if (tipo2 == 7) {

                }
            } else if (tipo1 == 4) {
                if (tipo2 == 1) {
                    
                } else if (tipo2 == 2) {

                } else if (tipo2 == 3) {
                    
                } else if (tipo2 == 4) {
                    printf("Já convertido!");
                } else if (tipo2 == 5) {

                } else if (tipo2 == 6) {

                } else if (tipo2 == 7) {

                }
            } else if (tipo1 == 5) {
                if (tipo2 == 1) {
                    
                } else if (tipo2 == 2) {

                } else if (tipo2 == 3) {
                    
                } else if (tipo2 == 4) {

                } else if (tipo2 == 5) {
                    printf("Já convertido!");
                } else if (tipo2 == 6) {

                } else if (tipo2 == 7) {

                }
            } else if (tipo1 == 6) {
                if (tipo2 == 1) {
                    
                } else if (tipo2 == 2) {

                } else if (tipo2 == 3) {
                    
                } else if (tipo2 == 4) {

                } else if (tipo2 == 5) {

                } else if (tipo2 == 6) {
                    printf("Já convertido!");
                } else if (tipo2 == 7) {

                }
            } else if (tipo1 == 7) {
                if (tipo2 == 1) {
                    
                } else if (tipo2 == 2) {

                } else if (tipo2 == 3) {
                    
                } else if (tipo2 == 4) {

                } else if (tipo2 == 5) {

                } else if (tipo2 == 6) {

                } else if (tipo2 == 7) {
                    printf("Já convertido!");
                }
            }
        }
    }
    if (opcao == 3) imprimeDescricao();
    if (opcao == 4) return 0;
 
    return 0;
}