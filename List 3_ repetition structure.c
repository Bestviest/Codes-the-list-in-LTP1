//exercise 1
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{ 
      int soma = 1, i = 0, aux=1;
      printf("  0  1 ");
      while (aux >0 && aux < 20)
      {
		  aux = soma;
          soma = i + soma; 
          i = aux;
          printf("%d",soma);
     }

system("pause");
return 0;
}

//exercise 2
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415
int main(){ 
float fat, x, numerador, soma = 1, valor, cosx;
int i, j, aux, y;
printf("Informe o valor de X: ");
scanf("%f", &x);
x = (x*PI)/180;
for(i = 1; i<=8; i++) //la�o de repeti��o.
{
  if(i%2 == 0) 
   {
       fat = 1; //fat= biblioteca math.
       for(j = i; j>1; j--)
           fat = fat*j;
      
       numerador = pow(x,i); //pow= biblioteca math.
       valor = numerador/fat;
  
       if(i%4 == 0)
            soma = soma + valor;
       else
            soma = soma - valor;   
   }
}
cosx = cos(x);
printf(" \n O valor do cos de x pela funcao cos(x) = %f \n", cosx);
printf("\n Calculado pelo programa por meio da serie de Taylor: %f \n", soma);
system("pause");
return 0;
}

//exercise 3
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
int main()
{
float k= 1, n, raiz;
int i;
printf("Digite n \n");
scanf("%f", &n);
for(i = 1; i <=15; i++)
   {
      k = (k + (n/k))/2;
      printf(" raiz aproximada e = %.10f \n", k);
   }
raiz = sqrt(n); //raiz ao quadrado. 
printf(" Usando a funcao sqrt a raiz e = %.10f\n", raiz);
if( raiz == k)
  {
        printf("A raiz a partir do calculo e igual a raiz verdadeira");
  }
else
  {
        printf("A raiz nao se aproxima");
  }
system("pause");
return 0;
    }

//exercise 4
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main()
{
int num, maior = -30000, menor = 30000, i, numpr, div;
float soma = 0,somap = 0, media, mediap,porci, a, b, cont = 0, conti = 0, contp = 0, contpr = 0, somapr = 0, mediapr;
do
{
  printf("Digite um valor inteiro  ");
  scanf("%d", &num);
  if(num < 30000)
    {            
       cont++;
       soma = soma + num;
       media = soma/cont;
       if (num%2 == 0)
         {
            somap = somap + num;
            contp++;
            mediap = somap/contp;
         }
       else
            conti++;
            
       if(num > maior)
            maior = num;
       else
            maior = maior;
       
       if(num < menor)
            menor = num;
       else
            menor = menor;
   }
  div = 0;
  for(i = 1; i <=num; i++)
     {
        if(num%i == 0)
            {
              div++;
            }
     }
        if(div == 2)
	   {
              somapr = somapr + num;
              contpr++;
            }
     
}while(num != 30000);

mediapr = (contpr/cont)*100;
porci = (conti/cont)*100;

printf("a) A soma dos numeros digitados e = %.2f \n", soma);
printf("b) O total de numeros digitados e = %.f \n", cont);
printf("c) A media dos numeros digitados e = %.2f \n", media);
printf("d) O maior numero digitado e = %.d \n", maior);
printf("e) O menor numero digitado e = %.d \n", menor);
printf("f) A media dos numeros pares e = %.2f \n", mediap);
printf("g) A porcentagem de numeros impares digitados e = %.1f \n", porci);
printf("h) A porcentagem de numeros primos digitados e = %.1f \n", mediapr);
printf("i) Quantidade de primos = %.2f \n", contpr);
printf("J) Soma de primos = %.2f \n", somapr);

system("pause");
return 0; 
}

//exercise 5
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
float num, maior = -1, menor = 1000000000;
do
{
   printf("Digite um valor ");
   scanf("%f", &num);
   if (num >= 0)
   {
      if(num > maior)
         maior = num;
      
      if (num < menor)
         menor = num;
    
   }
}while(num != -1);

printf("\nO maior numero e = %.f \n e o menor e %.2f\n", maior, menor);
system("pause");
return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
int voto, cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0, cont5 = 0, cont6 = 0, i, aux;
printf("Vote 1 - Candidato 1 \n");
printf("Vote 2 - Candidato 2 \n");
printf("Vote 3 - Candidato 3 \n");
printf("Vote 4 - Candidato 5 \n");
printf("Vote 5 - Voto Nulo \n");
printf("Vote 6 - Voto em Branco \n");

do 
{
  printf("Digite seu voto ou 0 para encerrar a eleicao \n");
 
  scanf("%d",&voto);
  switch(voto)
  {
         case 0:
               break;
         case 1:
               cont1++;
               break;
         case 2:
               cont2++;
               break;
         case 3:
               cont3++;
               break;
         case 4:
               cont4++;
               break;
         case 5:
               cont5++;
               break;
         case 6:
               cont6++;
               break;
         default:
               printf("Voto Invalido");
               break;
 }
 
 }while(voto != 0);

printf("Votacoes encerradas\n");
printf("Aguarde alguns segundos para receber o resultado \n");
if (cont1 > cont2)
   {
      aux = cont1;
   }
else
  {
      aux = cont2;
  }
if (aux > cont3)
  {
      aux = aux;
  }
else
  {
      aux = cont3;
  }
if (aux > cont4)
  {
      aux = aux;
  }
else
  {
      aux = cont4;
  }
  
for(i = 10; i >= 0; i--)
 {
   printf("%d \n", i);
 }
system("cls");
printf("O candidato 1 teve %d voto(s)\ n", cont1);
printf("O candidato 2 teve %d voto(s) \n", cont2);
printf("O candidato 3 teve %d voto(s) \n", cont3);
printf("O candidato 4 teve %d voto(s) \n", cont4);
printf("Foram anulados %d voto(s) \n", cont5);
printf("Foram brancos %d voto(s) \n", cont6);
printf("O vencedor da eleicao � o candidato x com %d voto(s)\n", aux);
system ("pause");
return 0;
}

//exercise 6
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
int main()
{
      float sal = 1000, perc = 1.5;
      int i, ano_atual;
      sal = sal + (sal * perc)/100;
      printf("Salario em 2006 = %.2f \n", sal);
      printf("Informe o ano atual: ");
      scanf("%d",&ano_atual);
      for (i = 2007; i <= ano_atual; i++) //la�o de repeti��o. 
      {
          perc = (2 * perc);
          sal = sal + perc/100 * sal;
          printf("Percentual acumulado de aumento foi igual a %.2f \n",perc );
          printf("Salario em %d foi igual a %.2f \n", i,sal);
      } 
        
  system("pause");
  return 0;
}

//exercise 7
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
int main(){
int i, n;
    float fat, result;
    
    printf("Digite um numero: \n");
    scanf("%d", &n);
    
    result = 1.0;
    fat = 1.0;
    for(i=1; i<=n; i++){ //la�o de repeti��o. 
        fat = fat * i;
        result = result + 1.0/fat;
    }
    
    printf("O valor de E �: %f \n", result);

    system("pause");
    return 0;
}

//exercise 8
#include <stdio.h>
#include <stdlib.h>

int main() {

int n, i, j;
      
system("cls"); //limpar a tela.
                    
printf("Digite o numero N:\n ");
scanf("%d",&n);
j=4;
i=1;
for(i=1; i<=n; i++ && j++) //la�o de repeti��o.
    {
      printf("%d  %d  %d", i, j, j);
    }
system("pause > null");
}
system("pause");
return 0;

//exercise 9
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
int i, j, a, fat, n;
printf("Digite um numero: \n");
scanf("%d", &n);
for(i = 1; i<=n; i++) //la�o de repeti��o. 
   {
      printf("Insira um valor para o calculo do fatorial \n");
      scanf("%d", &a);
      fat = 1;
      for (j = a; j>=1; j--) //Decremento.
           fat = fat*j;
   
      printf("Valor de %d!: %d \n", a, fat);
   }
system("pause");
return 0;
}

