#include <stdio.h>
#include <locale.h>

int menu() {
    int opc;
    printf("Escolha uma opção: ");
    printf("1) Sobre o programa - instruções e outras informações\n");
    printf("2) Realizar conversão\n");
    printf("3) Descrição - conceitos, histórico, definição e processo de conversão\n");
    printf("4) Sair");
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

void calculaArea() {

}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int opcao;    

    opcao = menu(); //Atribui à variavel o valor retornado da função

    //Chama as funções de acordo com a opção escolhida
    if (opcao == 1) imprimeSobre(); 
    if (opcao == 2) calculaArea();
    if (opcao == 3) imprimeDescricao();
 
    return 0;
}