#include <stdio.h>

int main(){

	int celsius;
	printf("Qual a temperatura em celsius?\n");
	scanf("%d", &celsius);
	float f = (celsius * 9/5) +32;
	printf("A temperatura é %.2f\n", f);

	return 0;
}