/* creado por Alan Macías. segundo programa de ejemplo usando if...else. Dado un numero imprimir si este es par o impar. semana 3. 22/08/18.*/

#include<stdio.h>

 int main()
{
  int a;
  printf("introduce un numero\n");
  scanf("%i", &a);
  if(a%2==0){
  printf("a=%i es par\n", a);
  }else{
  printf("a=%i es impar\n", a);
}
return 0;
}
