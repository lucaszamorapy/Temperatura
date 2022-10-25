/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

celsius(){
    float C, F, K;
    printf("A temperatura em Fahrenheit é: \n",F);
    printf("A temperatura em Kelvin é: \n",K);
    K=C+273;
    F=1.8*C+32;
}

fahrenheit(){
    float F, C, K;
    printf("A temperatura em Celsius é: \n",C);
    printf("A temperatura em Kelvin é: \n",K);
    C=(F-32)/1.8;
    K=C+273;
}
kelvin(){
    float K, C, F;
    printf("A temperatura em Celsius é: \n",C);
    printf("A temperatura em Fahrenheit é: \n",F);
    C=K-273;
    F=1.8*(K-273)+32;
}

main(){
    char c;
    float C=0,K=0,F=0;

    do{
        do{
            printf("1-Graus Celsius em Fahrenheit e Kelvin\n");
            printf("2-Graus Fahrenheit em Celsius e Kelvin\n");
            printf("3-Graus Kelvin em Celsius e Fahrenheit\n");
            printf("4-Sair do programa\n");
            printf("\n");
            printf("Informe uma das opcoes acima:");
            c = getchar();
            
            printf("\n");
        }while(c!='1' && c!='2' && c!='3' && c!='4');

    switch(c)
    {
        case '1':
        {
            printf("\nDigite a temperatura em Celsius: ");
            scanf("%f",&C);

           celsius();

            printf("\nTemperatura em Fahrenheit %.2f\n",F);
            printf("Temperatura em Kelvin %.2f\n",K);
            printf("\n");
        }
        break;
        case '2':
        {
            printf("\nDigite a temperatura em Fahrenheit: ");
            scanf("%f",&F);

            fahrenheit();

            printf("\nTemperatura em Celsius %.2f\n",C);
            printf("Temperatura em Kelvin %.2f\n",K);
            printf("\n");
        }
        break;
        case '3':
        {
            printf("\nDigite a tempertura em Kelvin: ");
            scanf("%f",&K);

            kelvin();

            printf("\nTemperatura em Celsius %.2f\n",C);
            printf("tempertura em Fahrenheit %.2f\n",F);
            printf("\n");
        }
        break;
    }
    }while(c!='4');
}
    

