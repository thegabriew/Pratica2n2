#include <stdio.h>

int maior_ou_menor (int n) {
	int a, b;
	a = n;
	b = n;
	return a;
}

int main () {
	
	int n1, n2, a, b;
	
	printf("Digite um valor: ");
	scanf("%d", &n1);
	printf("Digite mais um valor: ");
	scanf("%d", &n2);
	a = maior_ou_menor(n1);
	b = maior_ou_menor(n2);
	
	if(n1>n2) {
		
		printf("\n O maior entre os dois: %d", a);
		
	} else {
		
		printf("\n O maior entre os dois:  %d", b);
	}
	return 0;
}
