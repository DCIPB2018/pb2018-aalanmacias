#include<stdio.h>
#include<stdlib.h>

int main()
{
 int i, sum=0;
 int *num;

 printf("introduce 6 numeros enteros:\n");

 num=(int*) malloc(*num * sizeof(int));

 for(i=0; i<6; ++i){
	//(num+i) es equivalente a &num[i]
	scanf("%d", &num[i]);
	//*(num+i) es equivalente a num[i]
	sum +=num[i];
	}
 printf("suma=%d", sum);
 return 0;
}