#include <stdio.h>
int fatorial (int n){
	int i,f=1;
	for(i=2;i<n;i++)
	f=f*i;
	return f;
}
int combinacao (int n, int p){
	int c;
	c=fatorial (n)/(fatorial(p)*fatorial(n-p));
	return c;
}
main(){
	int a,b,comb;
	do{
		printf("Valor de n:");
		scanf("%i",&a);
	}
	while(a<2);
	do{
		printf("Valor de p:");
		scanf("%i",&b);
	}
	while((b<1)||(b>=a));
	comb=combinacao(a,b);
	printf("\nCombinacao de %i,%i = %i",a,b,comb);
}
