#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

    int opcao;
    float num1, num2, resultado;
    char continuar = 's'; 

    do{
        //criar o menu
        printf("===============================\n");
        printf("      Calculadora Simples       \n");
        printf("===============================\n");
        printf("Selecione uma operacao: \n");
        printf("1. Adicao\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("5. Sair\n");
        printf("Opcao: ");

        scanf("%d", &opcao);

        if(opcao >= 1 && opcao <= 4){
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);

            printf("Digite o segundo numero: ");
            scanf("%f", &num2);
        }

        switch (opcao)
        {
        case 1:
            resultado = num1 + num2;
            printf("Resultado: %.2f + %.2f = %.2f\n", num1, num2, resultado);
            break;
        
        case 2:
            resultado = num1 - num2;
            printf("Resultado: %.2f - %.2f = %.2f\n", num1, num2, resultado);
            break;
        
        case 3:
            resultado = num1 * num2;
            printf("Resultado: %.2f * %.2f = %.2f\n", num1, num2, resultado);
            break;        

        case 4:
            if(num2 != 0){
                resultado = num1 / num2;
                printf("Resultado: %.2f / %.2f = %.2f\n", num1, num2, resultado);
            } else {
                printf("Erro: Divisão por zero não é permitida.");
            }    
            break;
            
        case 5:
          printf("Obrigado por usar a calculadora! Até a próxima.");
            break;

            default:
              printf("Opcao invalida. escolha entre 1 e 5.");
            
       if(opcao !=5){
        do{
            printf("\nDeseja realizar outra operação? (s/n)\n");
             scanf("%c", &continuar);

             continuar = tolower(continuar);

             if(continuar != 's' && continuar != 'n'){
                printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.");
             }
            }while (continuar != 's'&& continuar != 'n');
        
        if(continuar == 'n'){
            printf("Obrigado por usar a calculadora! Até a próxima.");
        }

       }while (opcao != 5 && continuar == 's');


    return 0;

}
    