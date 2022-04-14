#include <stdio.h>
void le_vetor(int vetor[20]){
	int i;
	for(i=0;i<20;i++){
		printf("Vetor[%i]: ",i);
		scanf("%i",&vetor[i]);
	}
	return;
}
void exibe_vetor (int vetor[20]){
	int i;
	for(i=0;i<20;i++) printf("%i",vetor[i]);
	return;
}
void inverte (int vetor[20]){
	int i,j,aux;
	j=19;
	for(i=0;i<10;i++){
		aux=vetor[i];
		vetor[i]=vetor[j];
		vetor[j]=aux;
		j--;
	}
	return;
}
main(){
	int vet[20];
	printf("Leitura do vetor\n\n: ");
	le_vetor(vet);
	printf("\n\nVetor lido: ");
	exibe_vetor(vet);
	inverte(vet);
	printf("\n\nVetor Invertido: ");
	exibe_vetor(vet);
}
