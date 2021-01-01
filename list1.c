//exercise 1
#include <stdlib.h>
#include <conio.h>

int main () {
	int n1, n2, n3, n4, soma;
	//limpa a tela

system("cls");
//Recebe as tres notas
printf("Digite os quatro numeros: \n");
scanf("%d",&n1);
scanf("%d",&n2);
scanf("%d",&n3);
//calcula a m�dia
soma = n1 + n2 + n3 + n3;
//formata a mensagem de saida para as duas casas decimais
//printf("valor da media: %. 2f", media);
printf("Valor da soma: %d",soma);
// Mostra o resultado do m, dia
// Pra o programa a espera de um ENTER 
getch();
return 0;
}

//exercise 2 
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){

float n1, n2, n3;
float soma, media;
printf("Digite os 3 n�meros:  \n");
scanf("%f",&n1);
scanf("%f",&n2);
scanf("%f",&n3);
soma= n1 + n2+ n3;
media= soma/3;
    printf("valor da soma: %f \n", soma);
    printf("valor da media: %f \n", media);
    getch();
system("pause");
return 0;
}

//exercise 3
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
  int main(){
  	float nota1, nota2, nota3, peso1, peso2, peso3;
  	float soma1, soma2, soma3, media, total; 
	printf ("digite as 3 notas\n");
	scanf ("%f" ,&nota1);
	scanf ("%f" ,&nota2);
	scanf ("%f" ,&nota3);
	printf ("Digite os pesos\n"); 
    scanf ("%f", &peso1);
	scanf ("%f", &peso2);
	scanf ("%f", &peso3);
	soma1= nota1 * peso1;
	soma2= nota2 * peso2;
	soma3= nota3 * peso3;
	total= peso1 + peso2 + peso3;
	media= (soma1+ soma2 + soma3) / total;
	printf("valor da media: %f \n", media);
	getch();
system("pause");
return 0;
	}

//exercise 4
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
  int main(){
  	float salario;
  	int n=25;
  	int mult, div, total;
	printf("Digite o numero do seu sal�rio \n");
  	scanf("%f", &salario);
  	scanf("%d", &n);
  	mult= salario*n;
  	div=mult/100;
  	total= salario + div;
  	printf("Novo sal�rio ser� de %d \n", total);
   	system("pause");
  	return 0;
  }
  
 //exercise 5
  #include <stdio.h>
#include <stdlib.h>
#include <conio.h>
  int main(){
  	float salario;
  	int n=25;
  	int mult, div, total;
	printf("Digite o numero do seu sal�rio \n");
  	scanf("%f", &salario);
  	scanf("%d", &n);
  	mult= salario*n;
  	div=mult/100;
  	total= salario + div;
  	printf("Novo sal�rio ser� de %d \n", total);
   	system("pause");
  	return 0;
  }
  
  
//exercise 6
  #include <stdio.h>
#include <stdlib.h>
#include <conio.h>
  int main(){
  	int salario, percentual, aumento, novo;
  	int mult, soma;
  	printf("Digite aqui seu salario \n");
  	scanf("%d",&salario);
  	printf("Digite aqui seu percentual de aumento \n");
  	scanf("%d",&percentual);
  	aumento= salario * percentual/100;
  	printf("Valor do seu aumento ser� de: %d \n", aumento);
  	novo= salario + aumento;
  	printf("Seu novo salario ser� de: %d \n", novo);
  	getch();
  	system("pause");
  	return 0;
  }

//exercise 7  
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
 int main(){
 	int salario, receber, gratificacao, imposto;
 	int mult, soma, sub, div; 
 	printf("Digite o n�mero do seu salario: \n");
 	scanf("%d",&salario);
 	gratificacao= salario * 5 / 100;
 	imposto= salario * 7 / 100;
 	receber= salario + gratificacao - imposto;
 	printf("Seu novo sal�rio a receber ser� de: %d \n", receber);
 	getch();
 	system("pause");
 	return 0;
 }

//exercise 8  
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
  int main(){
   int salario, receber, imposto;
   printf("Digite o seu salario: \n");
   scanf("%d",&salario);
   imposto= salario * 10/100;
   receber= salario + 50 - imposto;
   printf("Seu novo salario sera de: %d \n", receber);
   getch();
   system("pause");
   return 0;
}

//exercise 9
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
 int main(){
 	float deposito, taxa, renda, total;
 	printf("Qual � o numero do seu deposito? \n");
 	scanf("%f",&deposito);
 	printf("Qual � a taxa de juros? \n");
 	scanf("%f",&taxa);
 	renda= deposito * taxa/100;
 	total= deposito + renda;
 	printf("Sua nova renda sera de: %f \n", renda);
 	printf("Seu total sera de: %f \n", total);
 	getch();
 	system("pause");
 	return 0;
 }
 
 //exercise 10
 #include <stdio.h>
#include <stdlib.h>
#include <conio.h>
 int main(){
 	int base, altura, area;
 	printf("Digite o valor da base: \n");
 	scanf("%d",&base);
 	printf("Digite o valor da altura: \n");
 	scanf("%d",&altura);
 	area=(base * altura)/2;
 	printf("A area do triangulo ser� de: %d \n", area);
 	getch();
 	system("pause");
 	return 0;
 }
 
 //exercise 11
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
 int main(){
 	float pi, area, raio;	
 	printf("Digite o n�mero do raio: \n");
 	scanf("%f", &raio);
 	pi= 3.1415;
 	area= pi * (raio * raio);
 	printf("O valor da area do circulo ser� de: %d \n", area);
 	getch();
 	system("pause");
 	return 0; 
 }
 
//exercise 12
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
 int main(){
 	float resul;
	float e, b;
 	printf("Digite sua base: \n");
 	scanf("%f",&e);
 	printf("Digite seu expoente: \n");
 	scanf("%f",&b);
 	resul= pow(e, b);
 	printf("O resultado: \n", resul);
 	getch();
 	system("pause");
 	return 0;
 }
 
//exercise 13
 #include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
  int main(){
float pes, polegadas, jardas, milhas;
printf("Qual o valor de pes: \n");
scanf("%f",&pes);
polegadas= pes* 12;
jardas= pes/ 3;
milhas= jardas/ 1760;
printf("Conversao em polegadas? \n", polegadas);
printf("Conversao em jardas? \n", jardas);
printf(" Conversao em milhas? \n", milhas);
getch();
system("pause");
return 0;
}

//exercise 14
#include <conio.h>
#include <stdio.h>
#include<stdlib.h>
int main(){ 
int ano_atual, ano_nasc, id_atual, id_2050;

  system("cls");

  printf("\nDigite o ano de nascimento: ");

  scanf("%i",&ano_nasc);

	printf("\nDigite o ano atual: ");

	scanf("%i",&ano_atual);

	id_atual = ano_atual - ano_nasc;

	id_2050 = 2050 - ano_nasc;

	printf("\nA idade atual �: %i",id_atual);

	printf("\nA idade em 2050 ser�: %i",id_2050);
	
	system ("pause");
	return 0;
	}
  
//exercise 15
#include <conio.h>
#include <stdio.h>
#include<stdlib.h>
int main(){ 
float p_fab, perc_d, perc_i, vlr_d, vlr_i, p_final;
	system("cls");

	printf("\nDigite o pre�o de f�brica: ");

	scanf("%f",&p_fab);
	
	printf("\nDigite o percentual de lucro do distribuidor: ");
	
	scanf("%f",&perc_d);

	printf("\nDigite o percentual de impostos: ");

	scanf("%f",&perc_i);

	vlr_d = p_fab * perc_d / 100;

	vlr_i  = p_fab * perc_i / 100;

	p_final = p_fab + vlr_d + vlr_i;

	printf("\nO lucro do distribuidor � %.2f",vlr_d);

	printf("\nO valor dos impostos � %.2f",vlr_i);

	printf("\nO pre�o final do ve�culo ao consumidor �%.2f",p_final);

	system("pause");
	return 0;
}

//exercise 16
#include <stdio.h>>
#include <conio.h>
#include <string.h>
#include<stdlib.h>
int main(){ 
float horas_t, vlr_sal_min, vlr_hora_t, vlr_sal_bru, imp, vlr_sal_liq;

	system("cls");
	printf( "\nDigite o total de horas trabalhadas: ");
	scanf("%f",&horas_t);
	printf("\nDigite o valor do sal rio m�nimo: ");
	scanf("%f",&vlr_sal_min);
	vlr_hora_t =  vlr_sal_min / 2;
	vlr_sal_bru = vlr_hora_t * horas_t;
	imp = vlr_sal_bru * 3 / 100;
	vlr_sal_liq = vlr_sal_bru - imp;
	printf("\nO sal rio a receber :%.2f", vlr_sal_liq);
	system("pause");
	return 0;
}

//exercise 17
#include <stdio.h>>
#include <conio.h>
#include <string.h>
#include<stdlib.h>
int main(){ 
float horas_t, vlr_sal_min, vlr_hora_t, vlr_sal_bru, imp, vlr_sal_liq;

	system("cls");
	printf( "\nDigite o total de horas trabalhadas: ");
	scanf("%f",&horas_t);
	printf("\nDigite o valor do sal rio m�nimo: ");
	scanf("%f",&vlr_sal_min);
	vlr_hora_t =  vlr_sal_min / 2;
	vlr_sal_bru = vlr_hora_t * horas_t;
	imp = vlr_sal_bru * 3 / 100;
	vlr_sal_liq = vlr_sal_bru - imp;
	printf("\nO sal rio a receber :%.2f", vlr_sal_liq);
	system("pause");
	return 0;
}

//exercise 18
#include <conio.h>
#include <stdio.h>
#include<stdlib.h>

int main(){ 
float salario, cheque1, cheque2, cpmf1, cpmf2, saldo;

	system("cls");
	printf("\nDigite o sal�rio recebido: ");
	scanf("%f",&salario);

	printf("\nDigite o valor do 1� cheque: ");
	scanf("%f",&cheque1);

	printf("\nDigite o valor do 2� cheque: ");
	scanf("%f",&cheque2);
	cpmf1 = cheque1 * 0.38 / 100;
	cpmf2 = cheque2 * 0.38 / 100;

	saldo = salario - cheque1 - cheque2 - cpmf1 - cpmf2;

	printf("\nO valor do saldo eh�: %.2f",saldo);
	
 system("pause");
 return 0;
}

//exercise 19
#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
int main(){ 
float peso_saco, racao_gato1, racao_gato2, total_final;

	system("cls");
	printf("\nDigite o peso do saco de ra�ao (em Kg): ");
	scanf("%f",&peso_saco);
	printf("\nDigite a ra�ao consumida pelo 1� gato (em gramas):");
	scanf("%f",&racao_gato1);
	printf("\nDigite a ra�ao consumida pelo 2� gato (em gramas):");
	scanf("%f",&racao_gato2);
	racao_gato1 = racao_gato1 / 1000;
	racao_gato2 = racao_gato2 / 1000;
	total_final = peso_saco - 5 * (racao_gato1 + racao_gato2);
	printf("\nTotal de ra�ao restante (em Kg): %.2f",total_final);
    
	system("pause");
    return 0;
}






