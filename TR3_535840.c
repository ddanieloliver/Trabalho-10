#include <stdio.h>
#include <stdlib.h>

//MODELO DE EXEMPLO

int main(){
	   
   	//VariÃ¡veis que podem ser usadas
   	unsigned int x[200];
   	int y;
   	int z;
   	int k;
   	int w;
   	int j;
   	int i;
   	
   	//#########################
	for(j = 0; j < 200; j++){
		x[j] = 0;
	}
	while (y != -1){

		printf("Digite um número entre 0 e 5000: ");
		scanf("%d", &y);
		
		if(y > 5000 || y < 0){
			if(y != -1){
			printf("Número inválido! \n");
			}
		}else{
			    x[y/32] = x[y/32] | (1<<(y%32));
            
		}
	}
	printf("Números digitados: ");
	for(i = 0; i<=5000; i++){
		if((x[i/32]) >>(i%32) & 1){
			printf("%d ", i);
		}
	}
	printf("\n");
   	
   	//#########################
   
	return 0;  
}