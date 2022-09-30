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
        	acd  += pow( notas[i] - media, 2 );
                }
        printf("Desvio padrão: %f \n", sqrt( acd )/entradas);
        printf("Desvio padrão amostral: %f \n", sqrt( acd )/(entradas-1));
    
    
while(ordenado==0) {
  ordenado=1;
  for(int i=0;i<entradas; i++) {
     if( notas[i]>notas[i+1] ) {
              ordenado=0;  //teve mudança
              temp= notas[i]; //troca i com i+1
               notas[i] = notas[i+1];
                notas[i+1] = temp;
                }
      
      for(int i=0;i<entradas; i++) {
   if (entradas%2 == 0){
       mediana = (notas[i]/2-1 + (notas[i]/2));
       mediana = mediana/2;
   }
    else{
    mediana= notas[i]/2;
    }
    }
     printf("Mediana: %2.2f\n", mediana);
    }
}
    
   

}

