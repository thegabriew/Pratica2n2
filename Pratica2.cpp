#include <stdio.h>

int dobro (int n) {
	int a, b;
	a = 2 * n;
	b = 2* n;
	return a;
}

int main () {
	
	int n1, n2, a, b;
	
	printf("Digite um valor: ");
	scanf("%d", &n1);
	printf("Digite mais um valor: ");
	scanf("%d", &n2);
	a = dobro(n1);
	b = dobro(n2);
	
	if(n1>n2) {
		
		printf("\n %d", a);
		
	} else {
		
		printf("\n %d", b);
	}
	return 0;
}
