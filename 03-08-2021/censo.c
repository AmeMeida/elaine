#include <stdio.h> 
int main (void) {
	
	float inputSalario, inputFilhos = 0, salario = 0, filhos = 0, salarioMaior = 0, salarioPobreza = 0;
	int count; 

	printf ("Censo. Informe:\n\tSalário;\n\tNúmero de filhos;\n\nDigite 0 para encerrar a execução.");  

	for (count = 0; inputSalario != 0; count++) {
		
		printf ("\nInforme o salário:  "); 
		scanf ("%f", &inputSalario);
		if (inputSalario == 0) {
		     break;}
		salario += inputSalario; 
		if (inputSalario > salarioMaior) {
			salarioMaior = inputSalario;
		}
		if (inputSalario < 320) {
			salarioPobreza++;
		} 


		printf ("Informe a quantidade de filhos: ");
		scanf ("%f", &inputFilhos);
		filhos += inputFilhos;
	}
	
	salario /= count;
	filhos /= count;

	salarioPobreza = (salarioPobreza/count) * 100; 

	printf ("\n\nAmostra:  %d\nMédia de salário:  %.2f\nMédia de filhos:  %.2f\nMaior salário:  %.2f\nPorcentagem de pessoas com salário abaixo de R$320,00:  %.2f porcento.", count, salario, filhos, salarioMaior, salarioPobreza);

	setbuf (stdin, NULL);
	char a = getchar();

	return 0; 

}

	
