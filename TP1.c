/************************************************************************************
	Fatec Santana de Parnaíba
	Linguagem de Programação
	Professor: Raphael Naves 
	Author: Lívia Moraes de Oliveira e Lívia Nicole Gomes Silva 
        Descrição: Trabalho prático com o objetivo de implementar um conjunto de funções utilizando a linguagem de programação C.
*************************************************************************************/
 
#include <stdio.h>
#include <math.h>
 
 
void FRAGMENTO(int num1, int num2) {
    int aux = 0;
    int frag = 0; 
    for (aux = num2; aux != 0; aux /= 10) {
        if (aux % 10 == num1 % 10) {
            num1 /= 10;
        }
    }
    frag = (num1 == 0); 
    if (frag) {
        printf("O primeiro numero e um fragmento do segundo numero");
    } else {
        printf("O primeiro numero nao e um fragmento do segundo numero");
    }
}
 
void INVERSO(int soma) {
    int digito;
    printf(" O inverso da soma e: ");
    for (; soma > 0; soma /= 10) {
        digito = soma % 10; // Pega o último dígito
        printf("%d", digito); // Imprime o dígito
    }
}
 
void DIVISOR(int soma) {
	printf("os divisores de %d sao: \n", soma);
	int divisor;
	for( divisor = soma; divisor>0 ; divisor--)
	{
		if(soma%divisor == 0)
		{
			printf("%d|", divisor);
		}

	}
}
 
 
void PRIMO (int num1, int num2){
	int soma, contador, num, bul = 0;
	soma = num1 + num2;
	if(soma%2==0)
	{
	INVERSO(soma);
    }
    else {
    	DIVISOR(soma);
	}
	printf("\n%d", soma);
	for(num = soma-1; num >1; num--)
	{
		if (soma%num ==0)
		{
			printf (" Nao e primo!!");
			bul = 1;
			break;
		}
	}
	if(bul==0)
	{
		printf(" E primo!!");
		SomaIndice(soma);
	}
}

void SomaIndice(int soma) {  
    int soma_par = 0, soma_impar = 0;
    int indice = 1;
    int aux =0;
 
    for ( aux = soma; aux != 0; aux /= 10, indice++) {
        int digito = aux % 10;
        if (indice % 2 == 0) {
            soma_par += digito;
        } else {
            soma_impar += digito;
        }
    }
 
    printf("\n Soma indice Par: %d\n", soma_par);
    printf("\n Soma indice impar: %d\n", soma_impar);
}
 


 
int main(){
	 int i, num1=0, num2=0;
	 for(i=1; i>0; i ++){
	 	printf("Digite um numero:");
	    scanf("%d", &num1);
	    printf("Digite outro numero:");
	    scanf("%d", &num2);
	    if (num1 <0 || num2 <0)
	    {
	    	printf("Ambos os numeros devem ser positivos, faca novamente\n");
		}
		else
		{
			break;
		}
	}
	if (num1<num2)
	{ 
	    FRAGMENTO(num1, num2);
   }
	if(num1>=num2)
	{
		PRIMO(num1, num2);
	}
}
