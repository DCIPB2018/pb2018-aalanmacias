/*Creado por Alan Macías. Segundo programa ejemplo semana 4. 29/08/18*/

#include<stdio.h>
 
 int main()
{
 
	float temp_C, temp_K;
	float inicial=100, final=200, delta;
	int n=10;
	int op=1;

 delta=(final-inicial)/n;
 while(op==1)
 {
	temp_K=0;
	temp_C=inicial; 	

 while(temp_C<=final)
 {
  temp_K=temp_C+273.15;
  printf("%f %f", temp_C, temp_K);
  temp_C=temp_C+delta;
 }	
  printf("¿deseas hacer otra operación?\n Presiona 1 para si.\n Presiona 2 para no\n");
  scanf("%i", &op);
	return 0; 
}

return 0;
}
