#include <stdio.h>
#include <math.h>

int main() {
    int entradas;
    float notas [entradas];
	float num;
	float media=0;
	float acd = 0;
	float acumula = 0;
    float max;
    float min;
    float ordenado =0;
    float temp;
    float mediana;
    int i=0, j=0;
    float aux=0;
    
    printf("Digite o número de entradas: ");
    scanf("%d", &entradas);
    
    
    
     for( int i=0; i<entradas; i++) {
                printf("Entre com suas notas: ");
                scanf("%f", &num);
                notas[i] = num;
                acumula += num;
                }
        media = (float) acumula / entradas;
        printf("Média: %f \n", media);
    
     
    
    for( int i=0; i<entradas; i++) {
        if (i == 0) 
          max = min = notas[i];
        else {
          if (notas[i] > max) max = notas[i];
          if (notas[i] < min) min = notas[i];
          }
      }
      
      printf("Max = %f\n",max);
      printf("Min = %f\n",min);
   
    
    
	
        for( int i=0; i<entradas; i++) {
        	acd  += pow( (notas[i] - media), 2 );
                }
        printf("Desvio padrão: %f \n",  sqrt( acd /entradas));
    
    
    
    
    
     for(i=0;i<entradas;i++){
        for(j=i+1;j<entradas;j++){
        	
            if(notas[i] > notas[j]){
            	
                aux = notas[i];
                notas[i] = notas[j];
                notas[j] = aux;
            }
        }
    }

    if(entradas%2==0){
         mediana =(notas[i/2-1]+(notas[i/2]));
         mediana = mediana/2;
    } else {
         mediana =notas[i/2] ;
    }
    
	
printf("Mediana: %f \n", mediana);
        
    
    
    
    

    
}
    
   



