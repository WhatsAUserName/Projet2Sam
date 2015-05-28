#include <stdio.h>
#include <math.h>


int main(void){
	
	int nb = 87;
	
	int nb_binaire[8];
	
	int i;
	for (i=7;i>=0;i=i-1){
		if(nb>=pow(2,i)){
			//printf("%d-%d plus grand\n",nb,(int)pow(2,i));
			nb_binaire[7-i]=1;
			nb=nb-(int)pow(2,i);
		}else{
		//printf("%d-%d plus petit\n",nb(int)pow(2,i));
		nb_binaire[7-i]=0;
		}
	}
	
	for(i=0;i<8;i=i+1){
		printf("%d",nb_binaire[i]);
		}
		printf("\n");
		
		for(i=0;i<8;i=i+1){
		
		if(nb_binaire[i]==0){
			nb_binaire[i]=1;

		}else{
			nb_binaire[i]=0;
			}
		
		}
	
		i=7;
		while(nb_binaire[i]!=0){
			nb_binaire[i]=(nb_binaire[i]+1)%2;
			i=i-1;
			
			}	
		nb_binaire[i]=1;
		
		for(i=0; i<8; i=i+1){
			printf("%d",nb_binaire[i]);
			}
			printf("\n");
		}
		
