//exercise 1
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int soma_intervalo(int a, int b)
{
 int soma = 0, i;
 if( a > 0 && b >0)
  {
    for(i = a+1; i< b; i++)
     {
       soma = soma + i;
     }
    return soma;
  }
}
int main()
{
 int a, b, soma;
 printf("Coloque dois valores maiores que 0, sendo o primeiro menor que o segundo:\n");
 scanf("%d %d", &a, &b);
 printf("O resultado da soma eh: %d", soma_intervalo(a,b));
 system("pause");    
 return 0;
}

//exercise 2
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int st(int a, int b, int c)
 {
  int aux, i, div, soma = 0;
    if(b > c)
     {
        aux = b;
        b = c;
        c = aux;
     }
    if(a > 1)
     {
       for(i = b; i <= c ;i++)
       {
          aux = i%a;
          if(aux == 0)
	   {
              soma = soma + i;
            }
       }
     }
  return soma;
 }
int main()
{
    int a, b, c, soma;
    double tempo;
    clock_t t0,tf;
    FILE *arquivo; //ponteiro para o arquivo
    arquivo = fopen("arquivo.txt","w");
    printf("Informe tres valores inteiros \n");
    scanf("%d %d %d", &a , &b, &c);
    t0 = clock();
    soma = st(a, b, c);
    printf("A soma e = %d", soma);
    tf = clock();
    tempo = ((double) (tf - t0) )/CLOCKS_PER_SEC;
    printf("Tempo gasto: %.6f \n", tempo);
    fprintf(arquivo, "Tempo gasto %.3f", tempo); //Escrevendo os valores no arquivo.
    system ("pause");
    return 0;
}

//exercise 3
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void converte(int sec)
{
    int hora, min, aux;
    hora = sec/3600;
    min = sec%3600;
    aux = min;
    min = min/60;
    sec = aux%60;
    printf("Horas: %d Minutos: %d Segundos: %d", hora, min, sec);
}
int main()
{
    int sec;
    printf("Informe os segundos: ");
    scanf("%d", &sec);
    converte(sec);
    system ("pause");
    return 0;
}

//exercise 4
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

float conv(float antigo, float atual)
 {
  float acresc;
  acresc = atual/antigo - 1;
  acresc = acresc*100;
  return acresc;
 }
 
int main()
{
 float antigo, atual;
 float porc;
 printf("Mostre os valores, atual e depois o antigo: ");
 scanf("%d %d", &atual, &antigo);
 porc = conv(antigo,atual);
 printf("Valor de acrescimo e = %.2f porcento ", porc);
 system("pause");
 return 0;
}

//exercise 5
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>

float media(float n1, float n2, float n3, char caso)
 {
  float media_a, media_p;
  media_a = (n1+n2+n3)/3;
  media_p = (n1*5 + n2*3 + n3*2)/10;
  switch(caso) //la�o de repeti��o para menu. 
    {
      case 'A':
             return media_a;
             break;
      case 'P':
             return media_p;
             break;
    }
 }
int main()
{
 char caso; //vari�vel para nome.
 printf("Informe tres notas e no final a letra: ");
 float mediat,n1,n2,n3;
 scanf("%f %f %f %c", &n1,&n2,&n3,&caso);
 caso = toupper(caso);
 mediat = media(n1,n2,n3,caso);
 switch(caso)
 {
    case 'A':
          printf("A media aritmetica e = %.2f", mediat);
          break;
     case 'P':
          printf("A media ponderada e = %.2f", mediat);
          break;
 }
 system("pause");
 return 0;
}

//exercise 6
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

float soma(int num)
 {
  int i;
  float somaS = 1,fat = 1;
  for(i = num; i>=2;i--) //la�o de repeti��o.
    {
      fat = fat*i;
    }
  for(i = num;i>=2;i--)
    {
      somaS = somaS + 1/fat;
      fat = fat/i;
    }
  return somaS;
 }
 
int main()
{
 int num;
 float s;
 printf("Digite um numero inteiro:");
 scanf("%d", &num);
 s = soma(num);
 printf("O valor de S e = %f", s);
 system("pause");
 return 0;
}

//exercise 7
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

float peso(float altura, char sexo)
 {
  float peso_ideal;
  switch(sexo)  //la�o de repeti��o para menu. 
     {
       case 'F':
            peso_ideal = (62.1*altura) - 44.7;
            break;
       case 'M':
            peso_ideal = (72.7*altura) - 58;
            break;
       default: // exibe uma mensagem, caso nenhuma das alternativas anteriores seja verdadeira.
               break;
     }
  return peso_ideal;
}

int main()
{
 float altura, pesof;
 char sexo;
 printf(" Escolha o sexo \n");
 printf(" M, Masculino \n");
 printf("F, Feminino  \n");
 scanf("%c", &sexo);
 sexo = toupper(sexo); //Converte caracter min�sculo em mai�sculo.
 printf("Insira a altura: ");
 scanf("%f", &altura);
 pesof = peso(altura,sexo);
 printf("O peso ideal e = %f \n", pesof);
 system("pause");
 return 0;
}

//exercise 8
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

float soma(int n)
 {
  int i;
  float s=0;
  for(i=1; i<=n; i++)
   {
     s=s+(pow(i,2)+1)/(i+3); //fun��o math pow. 
   }
  return s;
 }  
      
int main()
{
 int n;
 printf("Informe o valor de n ");
 scanf("%d",&n);
 printf("O resultado eh: %.2f \n",soma(n)); 
 system("pause");
 return 0;
}

//exercise 9
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int fatorial(int aux)
  {
    int j, fat = 1;
    for(j = aux; j>1;j--)
      {
        fat = fat*j;
      }
    return fat;
  }
  
void calculo_vetor_fatorial(int vet[])
 {
 	int i, fato[10];
   for(i = 0; i<10;i++)
    {
      fato[i] = fatorial(vet[i]);
    }
  for(i = 0;i<10;i++)
    {
      printf("\n%d\n", fato[i]);
    }
 }


  
int main()
{
  int vet[10], i;
  printf("Digite dez valores inteiros :\n");
  for(i = 0;i<10;i++)
    {
      scanf("%d", &vet[i]);
    }
  calculo_vetor_fatorial(vet);
  system("pause");
  return 0;
}

//exercise 10
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int binar(int a)
{
	int resp;
	if (a > 0)
	  resp = 1; 
	else
	  resp = 0;
	return resp; 	 
}

int main() 
{
	int a;
	do //la�o de repeti��o.
	{ 
		printf("Digite um n�mero inteiro:");
		scanf("%d", &a);
	} 
	while(a == 0);
	
	printf("%d \n", binar(a));
	system("pause");
	return 0;
}
