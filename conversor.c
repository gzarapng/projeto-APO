#include <stdio.h>
#include <locale.h>
#include <string.h>

int menu() {
    int opc;
    printf("Escolha uma opção:\n\n");
    printf("1) Sobre o programa - instruções e outras informações\n");
    printf("2) Realizar conversão\n");
    printf("3) Descrição - conceitos, histórico, definição e processo de conversão\n");
    printf("4) Sair\n\n");
    printf("Digite a opção escolhida: ");
    scanf("%d", &opc);
    while (opc < 0 || opc > 4) { //Loop enquanto uma opção inválida for digitada 
        printf("Opção inválida, digite novamente: ");
        scanf("%d", &opc);
    }

    return opc; //Retorna o valor escolhido pelo usuário
}

void imprimeSobre() {
    printf("Realizado por:\n");
    printf("Eloisa Morais - 1960881\n");
    printf("Gabriel Zara - XXXXXXX\n");
    printf("Turma A\n");
    printf("Disciplina: Algoritmos e Programação\n");
    printf("Instituto Federal de Ciência e Tecnologia (IFSP) - Campus Guarulhos\n\n");
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
    printf("Opção: ");
    scanf("%d", &tipo);

    return tipo;
}


/* Funções de conversão */

/* ADICIONAR TODOS OS TIPOS DE CONVERSÃO NECESSÁRIOS */
/* Funções de conversão de km² */
float kmQuadToHec() { //Km² para hectares
    int resultado;

    return resultado;
}

float kmQuadToMetroQuad() { //Km² para m²
    int resultado;

    return resultado;
}

float kmQuadToCmQuad() { //Km²para Cm²
    int resultado;

    return resultado;
}

float kmQuadToMmQuad() { //Km² para mm²
    int resultado;

    return resultado;
}

float kmQuadToMicroQuad() { //Km² para micrometro quadrado
    int resultado;

    return resultado;
}

float kmQuadToNanoQuad() { //Km² para nanometro quadrado
    int resultado;

    return resultado;
}


/*Funções de conversão de hectare */
float hecToKmQuad() { //Hectare para km²
    int resultado;

    return resultado;
}

float hecToMetroQuad() { //Hectare para m²
    int resultado;

    return resultado;
}

float hecToCmQuad() { //hectare para cm²
    int resultado;

    return resultado;
}

float hecToMmQuad() { //hectare para mm²
    int resultado;

    return resultado;
}

float hecToMicroQuad() { //hectare para micrometro quadrado
    int resultado;

    return resultado;
}

float hecToNanoQuad() { //hectare para nanometro quadrado
    int resultado;

    return resultado;
}

/*Funções de conversão de m² */

float mQuadToKmQuad() { //M² para km²
    int resultado;

    return resultado;
}

float mQuadToHec() { //M² para hectare
    int resultado;

    return resultado;
}

float mQuadToCmQuad() { //M² para cm²
    int resultado;

    return resultado;
}

float mQuadToMmQuad() { //M² para mm²
    int resultado;

    return resultado;
}

float mQuadToMicroQuad() { //M² para micrometro quadrado
    int resultado;

    return resultado;
}

float mQuadToNanoQuad() { //M² para nanometro quadrado
    int resultado;

    return resultado;
}

/*Funções de conversão de cm² */
float cmQuadToKmQuad() { //Cm² para km²
    int resultado;

    return resultado;
}

float cmQuadToHec() { //Cm² para hectare
    int resultado;

    return resultado;
}

float cmQuadToMQuad() { //Cm² para m²
    int resultado;

    return resultado;
}

float cmQuadToMmQuad() { //Cm² para mm²
    int resultado;

    return resultado;
}

float cmQuadToMicroQuad() { //Cm² para micrometro quadrado
    int resultado;

    return resultado;
}

float cmQuadToNanoQuad() { //Cm² para nanometro quadrado
    int resultado;

    return resultado;
}

/*Funções de conversão de milímetro quadrado */
float mmQuadToKmQuad() { //Mm² para km²
    int resultado;

    return resultado;
}

float mmQuadToHec() { //Mm² para hec
    int resultado;

    return resultado;
}

float mmQuadToMetroQuad() { //Mm² para m²
    int resultado;

    return resultado;
}

float mmQuadToCmQuad() { //Mm² para cm²
    int resultado;

    return resultado;
}

float mmQuadToMicroQua() { //Mm² para micrometro quadrado
    int resultado;

    return resultado;
}

float mmQuadToNanoQuad() { //Mm² para nanometro quadrado
    int resultado;

    return resultado;
}

/*Funções de conversão de micrometro quadrado */
float microQuadToKmQuad() { //Micrometro² para km²
    int resultado;

    return resultado;
}

float microQuadToHec() { //Micrometro² para hectare
    int resultado;

    return resultado;
}

float microQuadToMetroQuad() { //Micrometro² para m²
    int resultado;

    return resultado;
}

float microQuadToCmQuad() { //Micrometro² para cm²
    int resultado;

    return resultado;
}

float microQuadToMmQuad() { //Micrometro² para mm²
    int resultado;

    return resultado;
}

float microQuadToNanoQuad() { //Micrometro² para nanometro quadrado
    int resultado;

    return resultado;
}

/*Funções de conversão de nanometro quadrado */
float nanoQuadToKmQuad() { //Nanometro² para km²
    int resultado;

    return resultado;
}

float nanoQuadToHec() { //Nanometro² para hectare
    int resultado;

    return resultado;
}

float nanoQuadToMetroQuad() { //Nanometro² para m²
    int resultado;

    return resultado;
}

float nanoQuadToCmQuad() { //Nanometro² para cm²
    int resultado;

    return resultado;
}

float nanoQuadToMmQuad() { //Nanometro² para mm²
    int resultado;

    return resultado;
}

float nanoQuadToMicroQuad() { //Nanometro² para micrometro quadrado
    int resultado;

    return resultado;
}


int main() {
    setlocale(LC_ALL, "Portuguese");
    int opcao;
    char tipo1, tipo2;

    opcao = menu(); //Invoca a função e atribui à variavel o valor retornado da função

    while (opcao != 4) {
        //Chama as funções de acordo com a opção escolhida
        if (opcao == 1) imprimeSobre(); 
        if (opcao == 2) {
            printf("CONVERTER DE\n");
            tipo1 = escolheTipo();
            printf("PARA\n");
            tipo2 = escolheTipo();
            
            if (tipo1 == 1) {
                if (tipo2 == 1) {
                    printf("Já convertido!\n\n");
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
                    printf("Já convertido!\n\n");
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
                    printf("Já convertido!\n\n");
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
                    printf("Já convertido!\n\n");
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
                    printf("Já convertido!\n\n");
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
                    printf("Já convertido!\n\n");
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
                    printf("Já convertido!\n\n");
                }
            }
        }
        if (opcao == 3) imprimeDescricao();
        opcao = menu();
    }
    if (opcao == 4) return 0;
 
    return 0;
}