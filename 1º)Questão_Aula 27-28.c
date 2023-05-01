#include <stdio.h>

int main()
{
int n1,resto,impa,par,aux=0,j=1;
float media;
while(j<=10){
printf("Digite um numero\t");
scanf("%d",&n1);
resto=n1%2;
if(resto==0){
 par++ ;
}
else
{
impa++;
aux+=n1;
}
j++;
};
media=aux/impa;
printf("a media de numeros impares é %.2f\ntem um total de %d numeros pares\n",media,par);
return 0;
}