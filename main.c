#include<stdio.h>

int main(){
    printf("===============================\n");
    printf("Calculadora Simples\n");
    printf("===============================\n");
    printf("Selecione uma operação:\n");
    printf("1. Adição\n");
    printf("2.Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");
    printf("5. Sair\n");
    printf("Opção:\n");
    int a, e;

    while(scanf("%d", &a) && a!= 5){
        if(a> 5 || a < 1){
            printf("Essa opção é inválida, por favor digitar outro número\n");
            while(scanf("%d", &e) && e < 1 || e > 5){
                printf("Essa opção é inválida, por favor digitar outro número\n");
            }
            

        }
        a = e;
        float b, c;
        printf("Digite o primeiro número: ");
        scanf("%f", &b);
        printf("Digite o segundo número: ");
        scanf("%f", &c);

        if(a == 1){
            float d = b+c;
            printf("Resultado: %g + %g = %g\n", b,c,d);
        }
        if(a == 2){
            float d = b-c;
            printf("Resultado: %g - %g = %g\n", b,c,d);
        }
        if(a == 3){
            float d = b*c;
            printf("Resultado: %g * %g = %g\n", b,c,d);
        }
        if(a == 4){
            if(c == 0){
                printf("Erro: Divisão por zero não é permitida.\n");
            }
            else{
                float d = b/c;
                printf("Resultado: %g / %g = %g\n", b,c,d);
            }
            
        }

        printf("Deseja realizar outra operação? (s/n):\n");
        char r;
        printf("Digite 's' para sim ou 'n' para não: ");
        while (1) { 
            
            scanf(" %c", &r); 
            
            if (r == 'N' || r == 'n') {
                break; 
            } 
            else if (r == 's' || r == 'S') {
                printf("\033[H\033[J"); 
                break;
            } 
            else {
                printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.\n");
            }
        }
        if(r == 'n' || r == 'N'){
            break;
        }
        else{
        printf("===============================\n");
        printf("Calculadora Simples\n");
        printf("===============================\n");
        printf("Selecione uma operação:\n");
        printf("1. Adição\n");
        printf("2.Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("5. Sair\n");
        printf("Opção:\n");
        }
    }
    printf("Obrigado por usar a calculadora! Até a próxima.\n");
    return 0;
}