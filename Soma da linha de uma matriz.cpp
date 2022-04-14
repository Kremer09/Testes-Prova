#include <stdio.h>
void le_matriz(int m[4][4]){
	int i,j;
	for(i=0;i<4;i++)
	for(j=0;j<4;j++){
		printf("Matriz[%i][%i]:",i,j);
		scanf("%i",&m[i][j]);
	}
	return;
}
void exibe_matriz(int m[4][4]){
	int j,soma=0;
	for(j=0;j<4;j++)
	soma=soma+m[l][j];
	return soma;
}
main(){
	int mat[4][4],linha,sm;
	prinf("Leitura da matriz\n\n");
	le_matriz(mat);
	do{
		printf("Linha: ");
		scanf("%i",&linha)
	}
	while((linha<0)||(linha>3));
	sm=soma_linha(mat,linha);
	printf("Matriz\n\n");
	exibe_matriz(mat);
	printf("Soma da linha %i = %i",linha,sm);
}
