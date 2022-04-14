#include <stdio.h>
int potencia (int x, int y){
	int i,p;
	if(y==0)
	p=1;
	else p=x;
	for(i=2;i<=y;i++)
	p=p*x;
	return p;
}
main(){
	int a,b;
	printf("Base:");
	scanf("%i",&a);
	do{
		printf("Expoente:");
		scanf("%i",&b);
	}
	while (b < 0);
	printf("\n\n%i elevado a %i = %i",a,b,potencia(a,b));
}
