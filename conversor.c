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

void converteArea (int t1, int t2) {

}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int opcao;    
    char tipo1, tipo2;

    opcao = menu(); //Atribui à variavel o valor retornado da função

    //Chama as funções de acordo com a opção escolhida
    if (opcao == 1) imprimeSobre(); 
    if (opcao == 2) {
        printf("CONVERTER DE\n");
        tipo1 = escolheTipo();
        printf("PARA\n");
        tipo2 = escolheTipo();
        converteArea(tipo1, tipo2);
    }
    if (opcao == 3) imprimeDescricao();
    if (opcao == 4) return 0;
 
    return 0;
}