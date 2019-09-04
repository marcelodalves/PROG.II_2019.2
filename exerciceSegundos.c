#include <stdio.h>
#include <math.h>
int main() {
  int num_seg, segundos, minutos, hora, resto;
  
  //horas_seg = 3600 - 3600 segundos eh uma hora
  printf("Entre com o numero de segundos: ");
  scanf("%d", &num_seg); 	
  
  hora = num_seg/3600;
  resto = num_seg%3600;
  minutos = resto/60;
  segundos= resto%60;
  
  printf("\n%dh %dhmin %ds",hora,minutos,segundos);
  
  return 0;
}
