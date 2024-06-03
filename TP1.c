#include <stdio.h>
 
int main(){

	 int num1=0, num2=0;
	for(int i=1; i>0; i ++){

		printf("Digite um numero:");
	    scanf("%d", &num1);
	    printf("Digite outro numero:");
	    scanf("%d", &num2);
	    if (num1 <0 || num2 <0)
	    {
	    	printf("ambos devem ser positivos\n");
		}
		else
		{
			break;
		}
	}

}
