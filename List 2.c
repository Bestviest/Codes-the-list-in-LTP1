//exercise 1
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
int dia, mes, ano,inteira_hs;
float hs,min;

printf("Informe o dia no formato:\n");
scanf("%d",&dia);
system("cls");

printf("Informe o m�s no formato: \n");
scanf("%d",&mes);
system("cls");

printf("Informe o ano no formato:\n");
scanf("%d",&ano);
system("cls");

printf("Informe a hora no formato: Hora, Minutos.\n");
scanf("%f",&hs);
system("cls");

printf("A data informada �: %d/%d/%d.\n",dia,mes,ano);

switch(mes)
{
    case 1:
    printf("O m�s informado � JANEIRO.\n");
    break;

    case 2:
    printf("O m�s informado � FEVEREIRO.\n");
    break;

    case 3:
    printf("O m�s informado � MAR�O.\n");
    break;

    case 4:
    printf("O m�s informado � ABRIL.\n");
    break;

    case 5:
    printf("O m�s informado � MAIO.\n");
    break;

    case 6:
    printf("O m�s informado � JUNHO.\n");
    break;

    case 7:
    printf("O m�s informado � JULHO.\n");
    break;

    case 8:
    printf("O m�s informado � AGOSTO.\n");
    break;

    case 9:
    printf("O m�s informado � SETEMBRO.\n");
    break;

    case 10:
    printf("O m�s informado � OUTUBRO.\n");
    break;

    case 11:
    printf("O m�s informado � NOVEMBRO.\n");
    break;

    case 12:
    printf("O m�s informado � DEZEMBRO.\n");
    break;

    default:
    printf("O m�s informado n�o confere.\n");

}
inteira_hs=(int)hs;
min=(hs-inteira_hs)*100;

printf("O hor�rio informado � %.2d:%.0f.\n",inteira_hs,min);

system("pause");
return 0;
}

//exercise 2
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
int main(){ 
int d1, m1, a1, d2, m2, a2;

printf("Digite o primeiro dia: ");
scanf("%d", &d1);
printf("Digite o primeiro mes: ");
scanf("%d", &m1);
printf("Digite o primeiro ano: ");
scanf("%d", &a1);
printf("Digite o segundo dia: ");
scanf("%d", &d2);
printf("Digite o segundo mes: ");
scanf("%d", &m2);
printf("Digite o segundo ano: ");
scanf("%d", &a2);

if (a1 > a2 && m1 > m2 && d1 > d2)
    {
        printf("A primeira data e maior que a segunda.\n");
    }
    else if (a1 < a2 && m1 < m2 && d1 < d2)
    {
        printf("A segunda data e menor que a primeira.\n");
    }
    else if (a1 > a2)
    {
        printf("A primeira data e maior que a segunda.\n");
    }
    else if (a1 == a2 && m1 == m2 && d1 == d2)
    {
        printf("As datas digitadas sao iguais.\n");
    }
    else if (a1 < a2)
    {
        printf("A segunda data e maior que a primeira.\n");
    }
    else if (a1 == a2 && m1 > m2)
    {
        printf("A primeira data e maior que a segunda.\n");
    }
    else if (a1 == a2 && m1 < m2)
    {
        printf("A segunda data e maior que a primeira.\n");
    }
    else if (a1 == a2 && m1 == m2 && d1 > d2)
    {
        printf("A primeira data e maior que a segunda.\n");
    }
    else if (a1 == a2 && m1 == m2 && d1 < d2)
    {
        printf("A segunda data e maior que a primeira.\n");
    }
    else
    {
        printf("Algum tratamento para as datas nao foi realizado.\n");
    }
    system("pause");
    return 0;
}

//exercise 3
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
int main(int argc, char *argv[])
{
int horas_inicio, horas_termino, duracao;
printf("Digite a hora do inicio da Partida:\n ");
scanf("%i",&horas_inicio);
printf("Digite a hora do termino da partida:\n ");
scanf("%i",&horas_termino); 
if(horas_inicio >= horas_termino)
	{
	duracao = ( 24 - horas_inicio) + horas_termino;
	printf("%i\n",duracao);
	}
	else
	{
	duracao = horas_termino - horas_inicio;
	printf("%i\n",duracao);
	}
    system("pause");	
	return 0;
}

//exercise 4
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
	int cargo = 0;
	float salario = 0;
	printf("Escolha o cargo desejado:\n");
	printf("(1)Escrituario\n(2)Secretario\n(3)Caixa\n(4)Gerente\n(5)Diretor\n");
	scanf("%i", &cargo);
	if(cargo == 1)
	{
		printf("Digite o salario atual: ");
		scanf("%f", &salario);
		printf("Aumento: R$%.2f\n", (salario * 1.5) - salario);
		printf("Novo salario: R$%.2f\n", salario * 1.5);
	}
	else if(cargo == 2)
	{
		printf("Digite o salario atual: ");
		scanf("%f", &salario);
		printf("Aumento: R$%.2f\n", (salario * 1.35) - salario);
		printf("Novo salario: R$%.2f\n", salario * 1.35);
	}
	else if(cargo == 3)
	{
    	printf("Digite o salario atual: ");
		scanf("%f", &salario);
		printf("Aumento: R$%.2f\n", (salario * 1.2) - salario);
		printf("Novo salario: R$%.2f\n", salario * 1.2);
	}
	else if(cargo == 4)
	{
		printf("Digite o salario atual: ");
		scanf("%f", &salario);
		printf("Aumento: R$%.2f\n", (salario * 1.1) - salario);
		printf("Novo salario: R$%.2f\n", salario * 1.1);
	}
	else if(cargo == 5)
	{
		printf("Digite o salario atual: ");
		scanf("%f", &salario);
		printf("Aumento: R$%.2f\n", (salario * 1.0) - salario);
		printf("Novo salario: R$%.2f\n", salario * 1.0);
	}
	system("pause");
}

//exercise 5
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(){
	int menu;
	float salario;
	printf("Escolha(1,2,3) no menu abaixo\n");
	printf("1-imposto\n");
	printf("2-novo salario\n");
	printf("3-classificao\n");
	scanf("%d",&menu);
	
switch(menu)
{
    case 1:
    printf("Informe o sal�rio do funcion�rio: ");
    scanf("%f",&salario);

        if(salario<500)
        printf("O imposto sobre o sal�rio � de 5%% e equivale a R$ %.2f\n",salario*0.95);

        if(salario<=850 && salario>=500)
        printf("O imposto sobre o sal�rio � de 10%% e equivale a R$ %.2f\n",salario*0.90);

        if(salario>850)
        printf("O imposto sobre o sal�rio � de 15%% e equivale a R$ %.2f\n",salario*0.75);
    break;

    case 2:
    printf("Informe o sal�rio do funcion�rio: ");
    scanf("%f",&salario);

        if(salario>1500)
            printf("O sal�rio sofre um aumento de R$ 25,00 e equivale a R$ %.2f\n",salario+25);

        if(salario>=750 && salario<=1500)
            printf("O sal�rio sofre um aumento de R$ 50,00 e equivale a R$ %.2f\n",salario+50);

        if(salario>=450 && salario<750)
            printf("O sal�rio sofre um aumento de R$ 75,00 e equivale a R$ %.2f\n",salario+75);

        if(salario<450)
            printf("O sal�rio sofre um aumento de R$ 100,00 e equivale a R$ %.2f\n",salario+100);

break;

    case 3:
    printf("Informe o sal�rio do funcion�rio: ");
    scanf("%f",&salario);

        if(salario<=700)
        printf("\nMal remunerado.\n\n");
        else
        printf("\nBem remunerado.\n\n");
    break;

    default:
    printf("Op��o inv�lida.\n");
}
system("pause");
return 0;
}

//exercise 6
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(){
	float salario, auxilio_escola;
	printf("Digite aqui seu salario: \n");
	scanf("%f", &salario);
	
	if(salario==500)
	{
		printf("Voc� recebera 5%% de bonificao no seu salario e equivale R$ %.2f \n", salario*1.05);
	}
	else if (salario>500 || salario==1.200)
	{
		printf("Voce recebera 12%% de bonificao no seu salario e equivale R$ %2.f \n", salario*1,12);
	}
	else if (salario>1.200)
	{
	    printf("Voce nao recebera bonificao no seu salario \n", salario);
    }
    else if(salario>=500 && salario==600)
    {
        printf("Voce recebera R$ %.2f\n", salario+150);
    }
    else if(salario>600)
    {
	   printf("Voce recebera R$ %.2f \n", salario+100);
    }
    system("pause");
    return 0;

}
	
//exercise 7
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main (){
  float sm, ht, df, qr, vr, salm, sald, sale, salb,sall,salr;

      printf("Insira o salario minimo: ");
      scanf("%f",&sm);

      printf ("Insira o numero de horas trabalhadas: ");
      scanf("%f",&ht);

      printf("Insira o numero de dependentes do funcionario: ");
      scanf("%f",&df);

      printf("Inira a quantidade de horas extras: ");
      scanf("%f",&qr);

vr = sm/15;
salm = ht*vr;
sald = df*32;
sale = (vr+vr*50/100)*qr;
salb = salm+sald+sale;

    if ( salb >= 200  && salb<500)

sall = salb - salb*10/100;

  else
    if (salb >=500)

sall =salb - salb*20/100;

    if (sall <= 350)

salr = sall + 100;

 else
salr =sall + 50;
printf("O Funcionario ira receber %.2f de salario",salr);

system("pause");
return 0;
}

//exercise 8
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
	float venda, preco;
	printf("Digite aqui o pre�o do produto: \n");
	scanf("%f" ,&preco);
	printf("Digite aqui o numero da venda: \n");
	scanf("%f" ,&venda);
	
	if (venda<500 || preco<30)
	{
		printf("O valor tera aumento de 10%% e equivale %.2f \n", preco*1.10);
	}
	else if (venda>500 && venda<1200 || preco>30 && preco<80) 
	{
		printf("O valor tera um aumento de 15%% e equivale %.2f \n", preco*1.15);
	}
	else if (venda>1200 || preco>80)
	{
		printf("O valor ira dimunuir 20%% e equivale %.2f \n", preco*0.80);
	}
	system("pause");
	return 0;
	
}

//exercise 9
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){

float a,b,c,Delta,x1,x2,real,img;

scanf("%f %f %f",&a,&b,&c);

Delta = b*b - 4*a*c;

if(Delta<0){
	
	printf("Nao existe raiz real", Delta);
}

if(Delta=0){
	
	printf("Existe uma raiz real",Delta);
}

if(Delta>0){ 

x1 = (-b + sqrt(Delta))/(2*a);

x2 = (-b - sqrt(Delta))/(2*a);

printf("raizes x1= %f, x2= %f\n",x1,x2);

}

else{ 

real = -b/(2*a);

img = sqrt(-Delta)/(2*a);

printf("raizes x= %f +- %fi\n",real,img);

}

return 0;

}

//exercise 10
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){

float a,b,c;

printf("Digite a primeira medida:");

scanf("%f",&a);

printf("Digite a segunda medida:");

scanf("%f",&b);

printf("Digite a terceira medida:");

scanf("%f",&c);

if((a<0)||(b<0)||(c<0)){

printf("\nOs valores n�o podem formar um triangulo\n");

}

else if((a==b)&&(a==c)&&(b==c)){

printf("O triangulo e equil�tero\n");

}

else if((a==b)&&(a==c)||(b==c)){

printf("O triangulo e is�sceles\n");

}

else if((a!=b)&&(a!=c)&&(b!=c)){

printf("O triangulo e escaleno\n");

}
system("pause");
return 0;
}

//exercise 11
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(){ 

float peso, altura;
printf("Digite aqui a sua altura: \n");
scanf("%f", &altura);
printf("Digite aqui o seu peso: \n");
scanf("%f", &peso);

if(altura<1.20 || peso<60)
{
	printf("Voce sera classificado como A");
}
else if(altura<1.20 || peso>60 && peso<90)
{
	printf("Voce sera classificado como D");
}
else if(altura<1.20 || peso>90)
{
	printf("Voce sera classificado como G");
}
else if(altura>1.20 && altura==1.70 || peso>60)
{
	printf("Voce sera classificado como B");
}
else if(altura>1.20 && altura==1.70 || peso>60 && peso<90)
{
	printf("Voce sera classificado como E");
}
else if(altura>1.20 && altura==1.70 || peso>90)
{
	printf("Voce sera classificado como H");
}
else if(altura>1.70 || peso<60)
{
	printf("Voce sera classificado como C");
}
else if(altura>1.70 || peso>60 && peso<90)
{
	printf("Voce sera classificado como F");
}
else if(altura>1.70 || peso>90)
{
	printf("Voce sera classificado como I");
}
system("pause");
return 0;
}

//exercise 12
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

int main()
{
	int cod_prod,cod_pais;
	float peso;
	
	printf("Digite o codigo do produto: ");
	printf("1 \n");
	printf("2");
	printf("3");
	printf("4");
	printf("5");
	printf("6");
	printf("7");
	printf("8");
	printf("9");
	printf("10 \n");
	scanf("%d",&cod_prod);

	printf("Digite o peso do produto em kg:\n");
	scanf("%f",&peso);
	
	if(cod_prod>=1 && cod_prod<=4)
	{
		peso*=1000;
		printf("O peso em gramas eh:%.2f \n",peso);
		peso*=0.10;
	}
	else if(cod_prod>=5 && cod_prod<=7)
	{
		peso*=1000;
		printf("O peso em gramas eh:%.2f \n",peso);
		peso*=0.25;
	}
	else if(cod_prod>=8 && cod_prod<=10)
	{
		peso*=1000;
		printf("O peso em gramas eh:%.2f \n",peso);
		peso*=0.35;
	}
	
	printf("O preco total do produto eh: %.2f reais \n",peso);
	printf("Digite o codigo do pais de origem \n");
	printf("1 \n");
	printf("2 \n");
	printf("3 \n");
	scanf("%d",&cod_pais);
	
	switch(cod_pais)
	{
		case 1:
			printf("Nesse pais, esse produto esta isento de imposto");
			break;
		case 2:
			printf("Nesse pais esse produto recebe 15 por cento de imposto");
			peso*=1.15;
			break;
		case 3:
			printf("Nesse pais esse produto recebe 25 por cento de imposto");
			peso*=1.25;
			break;
	}
	
	printf("O preco final do produto eh: %.2f",peso);
	
	system("pause");
	return 0;	
}

//exercise 13
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

main()
{
	int cod_est,cod_car;
	float peso,preco,imp;
	
	printf("\n\nDigite o codigo do estado de origem: ");
	printf("\n-----------------------------------\n");
	printf("|  1   ");
	printf("|  2   ");
	printf("|  3   ");
	printf("|  4   ");
	printf("|  5  |");
	printf("\n-----------------------------------\n");
	printf("---> ");
	scanf("%d",&cod_est);
	switch(cod_est)
	{
		case 1:
			imp=0.35;
			printf("\n35 por cento de imposto");
			break;
		case 2:
			imp=0.25;
			printf("\n25 por cento de imposto");
			break;
		case 3:
			imp=0.15;
			printf("\n15 por cento de imposto");
			break;
		case 4:
			imp=0.5;
			printf("\n5 por cento de imposto");
			break;
		case 5:
			printf("\nIsento de imposto");
			break;
		default:
			system("cls");
			printf("|Digite um codigo valido|");
			main();
	}
	
	//exercise 14	
	printf("\n\nDigite o codigo de carga: \n");
	printf("|  10  |  11  |  12  |  13  |  14  |  15  |  16  |  17  |  18  |  19  |  20  |\n");
	printf("|  21  |  22  |  23  |  24  |  25  |  26  |  27  |  28  |  29  |  30  |\n");
	printf("|  31  |  32  |  33  |  34  |  35  |  36  |  37  |  38  |  39  |  40  |\n");
	printf("---> ");
	
	scanf("%d",&cod_car);
	if(cod_car>=10&&cod_car<=20)
	{
		preco=1;
		printf("Valor do quilo: 1 real");	 		
	}
	else
	{
		if(cod_car>=21&&cod_car<=30)
		{
		preco=2.5;
		printf("Valor do quilo: 2 reais e 50 centavos"); 		
		}
		else
		{
			if(cod_car>=31&&cod_car<=40)
			{
			preco=3.4;
			printf("Valor do quilo: 3 reais e 40 centavos");
			}
			else
			{
				system("cls");
				printf("|Digite um codigo de carga valido|");
				main();
			}
		} 
	}	
	
	printf("\nDigite o peso do caminhao em toneladas: ");
	scanf("%f",&peso);
	peso*=1000;
	
	printf("\nO peso da carga em kg eh: %.2f",peso);
	printf("\nCom o devido codigo de carga o preco do caminhao eh: %.2f",preco*peso);
	printf("\nO valor do imposto sobre o valor da carga eh:%.2f",(preco*peso)*imp);
	printf("\nO valor final da carga eh: %.2f",(preco*peso)*(imp+1));
	
	getch();
	return 0;
}

//exercise 15
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
main()
{ float tl, as, ef, mediap;
system("cls");
printf("Insira a nota do trabalho de laboratorio:\n");
scanf("%f", &tl);
printf("Insira a nota da Avaliacao Semestral:\n");
scanf("%f", &as);
printf("Insira a nota do Exame Final:\n");
scanf("%f", &ef);
mediap = ((tl*2) + (as*3) + (ef*5))/10;
printf("Media ponderada e = %.1f", mediap);
if (mediap>=0 && mediap<5)
  printf("O conceito deste aluno e E \n");
else if (mediap>=5 && mediap<6)
       printf("O conceito deste aluno e D \n");
     else if (mediap>=6 && mediap<7)
            printf("O conceito deste aluno e C \n");
          else if (mediap>=7 && mediap<8)
                 printf("O conceito deste aluno e B \n");
               else if (mediap>=8 && mediap<10) 
                   printf("O conceito deste aluno e A \n");
                    
getch();
return 0;
}

//exercise 16
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
main(){
	float n1,n2,n3,media_ari, media=6, exame;
	system("cls");
	printf("Insira a sua nota 1: \n");
	scanf("%f", &n1);
	printf("Insira a sua nota 2, \n");
	scanf("%f", &n2);
	printf("Insira a sua nota 3, \n");
	scanf("%f", &n2);
	media_ari= (n1+ n2+ n3)/3; 
	printf("A media aritmetica e= %.1f", media_ari);
	if (media_ari>=0 && media_ari<3)
	printf("Este aluno esta reprovado \n");
	else if (media_ari>=3 && media_ari<7)
	printf("Este aluno esta em exame \n");
	else if (media_ari>=7 && media_ari<10)
	printf("\nEste aluno esta aprovado \n");
	exame= media_ari+media;
	printf("A nota no exame que ele precisa tirar e %.2f \n", exame);
	system("pause");
	return 0;
}

//exercise 17
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
main(){
	int n1,n2,maior;
	printf("Digite aqui o seu numero 1 \n");
	scanf("%d", &n1);
	printf("Digite aqui o seu numero 2 \n");
	scanf("%d", &n2);
	if (n1==n2)
	printf ("Os dois valores sao iguais");
	else if (n1>n2)
	printf("O valor %d e maior que %d \n", n1,n2);
	else if (n2>n1)
	printf("O valor %d e maior que %d \n", n2,n1);
	system("pause");
	return 0;
}

//exercise 18
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
main(){
	int n1,n2,n3;
	printf("Digite aqui os seus 3 numeros \n");
	scanf("%d %d %d", &n1, &n2, &n3);
	if (n1 >= n2 && n2 >= n3)
	{
	printf("A ordem dos numeros sera  de: %d,%d,%d \n", n1,n2,n3);
    }
	else if (n1>=n3 && n3>=n2)
	{
	printf("A ordem dos numeros sera de: %d,%d,%d \n", n1,n3,n2); 
	}
	else if (n2 >= n1 && n1 >= n3)
	{  
	printf("A ordem dos numeros sera de: %d,%d,%d \n", n2,n1,n3); 
	}
	else if (n2>= n3 && n3>= n1)
	{
	printf("A ordem dos numeros sera de: %d,%d,%d \n", n2,n3,n1); 
	} 
	else if (n3>=n1 && n1 >= n2)  
	{
	printf("A ordem dos numeros sera de: %d,%d,%d \n", n3,n1,n2);
    }
	else if(n3>=n2 && n2>=n1) 
    {
	printf("A ordem dos numeros sera de: %d,%d,%d \n", n3,n2,n1);
    }
	system ("pause");
	return 0;
}
	

//exercise 19
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
main(){
	int n1,n2,n3;
	int n4;
	printf("Digite aqui os seus 3 numeros \n");
	scanf("%d %d %d", &n1, &n2, &n3);
	printf("Digite aqui o seu numero 4 \n");
	scanf("%d", &n4);
	if (n1 <= n2 && n2 <= n3 && n3<=n4)
	{
	printf("A ordem dos numeros sera  de: %d,%d,%d \n", n1,n2,n3,n4);
    }
	else if (n1<=n3 && n3<=n2 && n2<=n4)
	{
	printf("A ordem dos numeros sera de: %d,%d,%d \n", n1,n3,n2,n4); 
	}
	else if (n2 <= n1 && n1 <= n3 && n3<=n4)
	{  
	printf("A ordem dos numeros sera de: %d,%d,%d \n", n2,n1,n3,n4); 
	}
	else if (n2<= n3 && n3<= n1 && n1<=n4)
	{
	printf("A ordem dos numeros sera de: %d,%d,%d \n", n2,n3,n1,n4); 
	} 
	else if (n3<=n1 && n1 <= n2 && n2<=n4)  
	{
	printf("A ordem dos numeros sera de: %d,%d,%d \n", n3,n1,n2,n4);
    }
	else if(n3<=n2 && n2<=n1 && n1<=n4) 
    {
	printf("A ordem dos numeros sera de: %d,%d,%d \n", n3,n2,n1,n4);
    }
	system ("pause");
	return 0;
}

//exercise 20
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
main(){
	int n1;
	printf("Digite aqui o numero inteiro \n");
	scanf("%d", &n1);
	if (n1%2==0)
	{
	printf("Par \n");
	}
	else
	printf("Impar \n");
	system("pause \n");
	return 0;
}

//exercise 21
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
main(){
	int i;
	float a,b,c;
	printf("Digite 1, 2 ou 3 para I: %d \n");
	scanf("%d",&i);
    printf("Digite tres valores para A,B,C: \n");
    scanf("%f,%f,%f",&a,&b,&c);
	if(i==1);
	{
		if(a<b && a<c)
		if(b<c)
		printf("Os valores crescentes sao: %.2f %.2f %.2f \n", a,b,c);
		else
		printf("Os valores crescentes sao: %.2f %.2f %.2f \n", a,c,b);
		if(b<a &&b<c)
		if(a<c)
		printf("Os valores crescentes sao: %.2f %.2f %.2f \n", b,a,c);
		else
	    printf("Os valores crescentes sao: %.2f %.2f %.2f \n", b,c,a);
	    if(c<a && c<b)
	    if(a<b)
	    printf("Os valores crescentes sao: %.2f %.2f %.2f \n", c,a,b);
	    else
	    printf("Os valores crescentes sao: %.2f %.2f %.2f \n", c,b,a);
	    }
	    if(a==2);
	    {
	    	if(a>b && a>c)
	    	if(b>c)
	    	printf("Os valores descrecente sao: %.2f %2.f %2.f \n", a,b,c);
	    	else
	    	printf("Os valores descrecente sao: %.2f %2.f %2.f \n", a,c,b );
	    	if(b>a && b>c)
	    	if(a>c)
	    	printf("Os valores descrecente sao: %.2f %2.f %2.f \n", b,a,c);
	    	else
	    	printf("Os valores descrecente sao: %.2f %2.f %2.f \n", b,c,a);
	    	if(c>a &&c>b)
	    	if(a>b)
	    	printf("Os valores descrecente sao: %.2f %2.f %2.f \n", c,a,b);
	    	else
	    	printf("Os valores descrecente sao: %.2f %2.f %2.f \n", c,b,a);
			}
			if(i==3) 
			{
			if(a>b && a>c)
			printf("A ordem desejada e: %.2f %.2f %.2f \n", b,a,c);
			if(b>a && b>c)
			printf("A ordem desejada e: %.2f %.2f %.2f \n", a,b,c);
		    if(c>a && c>b)
            printf("A ordem desejada e: %.2f %.2f %.2f \n", a,c,b);	
			}
     system("pause");
     return
    }

//exercise 22
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
main(){
	int opcao, n1,n2;
	float raiz_quadrada;
  puts("Menu de opcoes:\n");
  puts("1 - Somar dois numeros\n");
  puts("2 - Raiz quadrada de um numero\n");
  puts("Digite a op�ao desejada: \n");
  scanf("%d", &opcao);
  
  if(opcao == 1){
  	printf("Digite os dois numeros:\n");
  	scanf("%d %d",&n1,&n2);
  	printf("A soma � %d\n", n1+n2);
  } if(opcao==2){
  	printf("Digite o numero: %d \n");
  	scanf("%d",&n1);
  	printf("A raiz quadrada �: %.2f\n", sqrt(n1));
  	}system("pause");
  	return 0;
}
