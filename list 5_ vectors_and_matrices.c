//exercise 1
#include <stdlib.h>
#include <stdio.h>
#include <math.h> 
#include <conio.h>
#include <string.h>

int main(){
	int vet[10],i, j, z, aux;
	for(i=0;i<10;i++)
	{
		printf("Digite um numero:");
		scanf("%d",&aux);
		j=0;
		while ((vet[j] < aux) && (j<i))
		j= j+1;
		for(z=1;z>j;z--)
		vet[z] = vet[z+1];
		vet[j] = aux;
	}
	printf("Vetor ordenado \n");
	for(i=0;i<10;i++)
	printf("%d", vet[i]);
	system("pause");
	return 0; 
}

//exercise 2
#include <stdlib.h>
#include <stdio.h>
#include <math.h> 
#include <conio.h>
#include <string.h>

int main(){
	int vet[8],i, j, z, aux;
	for(i=0;i<8;i++)
	{
		printf("Digite um numero:");
		scanf("%d",&aux);
		j=0;
		while((vet[j] < aux) && (j<i))
		j= j+1;
		for(z=1;z>j;z--)
		vet[z] = vet[z-1];
		vet[j] = aux;
	}
	printf("Vetor ordenado \n");
	for(i=0;i<8;i++)
	printf("%d", vet[i]);
	system("pause");
	return 0; 
}

//exercise 3
#include <stdlib.h>
#include <stdio.h>
#include <math.h> 
#include <conio.h>
#include <string.h>

int main()
{
  int i,j,p;
  int veta[5], vetb[5], vetc[10];
 
  printf("Voce, entre com os elementos do vetor.\n");
  for (i=0; i<5; i++)
  {
   printf("Entre com o %d elemento do vetor 1: " ,i+1);
   scanf("%i",&veta[i]);
   
   printf("Entre com o %d elemento do vetor 2: ",i+1);
   scanf("%i",&vetb[i]);
  }
  
  for (p=0; p<10; p++)
  {
   vetc[p]=veta[i]+vetb[i];
   printf("\n a soma para elemento %d foi: %d \n", p+1, vetc[p]);
   }
scanf("%i",&p);

system("pause");
return 0;
  }

//exercise 4
#include <stdlib.h>
#include <stdio.h>
#include <math.h> 
#include <conio.h>
#include <string.h>

int main(){
	int contador = 0, numero, vetor[contador];
	printf("Digite valores inteiros, para parar digite 999 \n");
	scanf("%d", &numero);
	
	while (numero != 999);
	{
		if(contador == 0){
			vetor[contador] = numero;
			contador++;
		}
		else{
			vetor[contador] = numero;
			contador++;
		}
		scanf("%d", &numero);
	}
	
	if(numero == 999){
		contador--;
	}
	
	while( contador >= 0){
		printf("%d\n", vetor[contador]);
		contador--;
	}
	system("pause");
	return 0;
}

//exercise 5
#include <stdio.h>
#define LIN 3
#define COL 4

int main ()
{
    int mat[LIN][COL], i, j, col[COL] = {0};
    
	for(i = 0; i < LIN; i++)
    {
        for(j = 0; j < COL; j++)
        {

            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    
    for(i = 0; i < COL; i++)
    {
        for(j = 0; j < LIN; j++)
        {
            col[i] = col[i] + mat[j][i];
        }
    }


    for(j = 0; j < COL; j++)
    {
        printf("Coluna [%d]: %d\n", j, col[j]);
    }
    
    system("pause");
    return 0;
}

//exercise 6
#include<stdio.h>
#define linha 4
#define coluna 4
int main(){
 float mat[linha][coluna];
 float maior, menor;
 int i; //linha.
 int j; //coluna.
 int pos_i, pos_j; //pos=posi��o.

 printf("Entre com numeros reais:\n\n");
 for(i=0; i<linha; i++){
        printf("linha [%d]: \n", i);
    for(j=0; j<coluna; j++){
        printf("coluna [%d]: ",j);
        scanf("%f", &mat[i][j]);
        if(mat[i][j]<menor)
            menor=mat[i][j];
            pos_i=i;
            pos_j=j;
    }
 }

printf("O menor elemento: %f\n", menor);
printf("Posicao: [%d][%d]\n", pos_i,pos_j);

//exibindo a matriz
printf("Sua matriz �:\n");
for(i=0;i<linha;i++){
  for(j=0;j<coluna;j++){
   printf("%.2f ", mat[i][j]);
  }
  printf("\n");
}
system("pause");
return 0;
}

//exercise 7
#include <stdlib.h>
#include <stdio.h>
#include <math.h> 
#include <conio.h>
#include <string.h>

void insere_em_matriz(int a[][4], int b[][2])
{
	int i,j;
	system("cls"); //limpa a tela
	printf("Matriz A \n");
	for(i=0;i<3;i++){
	for(j=0;j<4;j++){
		printf("Digite o elemento %d - %d  ", i,j);
		scanf("%d", &a[i][j]);
	}
	}
	printf("\n\n Matriz B");
	for(i=0;i<4;i++){
    for(j=0;j<2;j++){
	    printf("\n Digite o elemento %d - %d:", i,j);
	     scanf("%d",b[i][j]); 
	 }
     }
}

void multiplica_matriz (int a[][4], int b[][2], int c[3][2])
{
	int i,j,k;
	for(i=0;i<3;i++){
	for(j=0;j<2;j++){
		c[i][j] = 0.0;
		for(k=0;k<4;k++)
		c[i][j]+=a[i][k]*b[k][j];
	}
	}
}

void imprime_matriz_resultante(int c[][2])
{
	int i,j;
	printf("\n Imprimindo a matriz resultante\n");
	for (i=0;i<3;i++){
	for (j=0;j<2;j++){
		printf("   %d", c[i][j]);
	}
	printf("\n");
	}
}

int main ()
{
	int a[3][4], b[4][2], c[3][2];
	system("cls");
	insere_em_matriz(a,b);
	multiplica_matirz(a,b,c);
	imprime_matriz_resultante(c);
	system ("pause");
	return 0;
}


//exercise 8
#include <stdlib.h>
#include <stdio.h>
#include <math.h> 
#include <conio.h>
#include <string.h>

void insere_em_matriz(int mat[][3])
{
	int i,j;
	system("cls"); //limpa a tela
	for(i=0;i<2;i++){
	for(j=0;j<3;j++){
		printf("Digite o elemento %d - %d  ", i,j);
		scanf("%d", &mat[i][j]);
	}
	}

}

void ponto_de_sela (int mat[][3])
{
	int i,j,k, achou,maior,menor,num,linha1,linha2,coluna1,coluna2,cont;
	cont=0;
	for (i=0;i<2;i++){
		menor = mat[i][0];
		linha1 = i;
		coluna1= 0;
	for(j=0;j<3;j++){
		if (mat[i][j] < menor){
			menor= mat;
			linha1= i;
			coluna1= j;
		}
	}
	maior = mat[0][coluna1];
	linha2 =0;
	for(j=0;j<2;j++){
		if(mat[j][coluna1] >maior)
		maior =mat[j][coluna1];
		linha2=j;
	}
	}
	if(linha1 == linha2)
	{
		printf("\n Ponto de sela= %d esta na posicao %d - %d",maior, linha1,coluna1);
		cont++;
	}    
if (cont==0)
printf("\n Nao ha ponto de sela na matriz");
getch();
}

int main(){
	int mat[2][3];
	insere_matriz(mat);
	ponto_de_sela(mat);
	system("pause");
	return 0;
}




//exercise 9

#include <stdio.h>
#include <math.h> 
#include <conio.h>
#include <string.h> 
int main(){
       int m[10][10];
       int i,j,aux;
 
       //preenchimento da matriz com numeros aleatorios
       for(i=0;i<10;i++){
        for(j=0;j<10;j++){
         m[i][j] = rand() / 1000;
          }
          }      
       //apresenta��o da matriz original
       for(i=0;i<10;i++){
        for(j=0;j<10;j++){
         printf("%d",m[i][j]);
          }
          printf("\n\n");
          }  
 
      printf("\n\n\n\ linha Trocada\n");
 
      //troca linhas
      for(j=0;j<10;j++){
        aux = m[1][j];
        m[1][j] = m[7][j];
        m[7][j] = aux;      
      }
      //troca linhas 2
       for(j=0;j<10;j++){
        aux = m[4][j];
        m[4][j] = m[9][j];
        m[9][j] = aux;      
      }
      //apresenta linha trocada    
      for(i=0;i<10;i++){
        for(j=0;j<10;j++){
         printf("%d ",m[i][j]);
          }
          printf("\n\n");
          }
 
      printf("\n\n\n\t coluna Trocada\n"); 
	  //apresenta linha trocada 2 
	  for(i=0;i<10;i++){
        for(j=0;j<10;j++){
         printf("%d ",m[i][j]);
          }
          printf("\n\n");
          }
 
      printf("\n\n\n\t coluna Trocada\n");   
      //troca colunas
      for(j=0;j<10;j++){
        aux = m[j][3];
        m[j][3] = m[j][9];
        m[j][9] = aux;
      }
      //apresenta com a linha e coluna trocada      
      for(i=0;i<10;i++){
        for(j=0;j<10;j++){
         printf("%3d ",m[i][j]);
          }
          printf("\n\n");
          }
 
       system("pause");
       }

//exercise 10
#include <stdlib.h>
#include <stdio.h>

int main() { 
    int vet[9],i;
    for (i=1;i<=8;i++) {
        do{
            printf("digite o %d numero maior que um e que seja positivo.: ",i);
            scanf("%d",&vet[i]);
        }
        while(vet[i]<=1);
    }

    for (i=1;i<=8;i++) {

        if(vet[i]==2) {
            printf("numero %d e primo e esta na posicao %d do vetor \n",vet[i],i);
        } else  if(vet[i] %2==0) {
            printf("numero %d nao e primo e esta na posicao %d do vetor\n",vet[i],i);
        } else
            printf("numero %d sim e primo e esta na posicao %d do vetor\n",vet[i],i);
    }
    system("pause");
    return 0;
}

#include <stdlib.h>
#include <stdio.h>
#include <math.h> 

int main(){
	int vetA[5], vetB[5];
	int u,i, vetAux[5]; 
	
	for(i=1;i<=5;i++)
	{
		printf("Digite o numero %d do primeiro vetor: \n", i);
		scanf("%d",&vetA[i]);
	}
	for(u=1;u<=5;u++)
	{
		printf("Digite o numero %d do segundo vetor: \n", u);
		scanf("%d",&vetB[u]);
	}
	
	vetA[i]=vetAux[i];
	vetA[i]=vetB[u];
	vetB[u]=vetAux[i];
	
	for (i = 0; i <=5; i++)
	{
	printf("O novo valor do primeiro vetor �: %d \n",vetA[i]);
    }
	
	
	for (u= 0; u<=5; u++)
	{
	printf("O novo valor do segundo vetor �: %d \n",vetB[u]);
    }
	
	system("pause");
	return 0;
} 

//exercise 11
#include <stdio.h>
#include <stdlib.h>

int main(){
� � float valor[10], totalproduto, totalvenda=0, comissao;
� � int qtd[10], i, j;

� � for( i = 0 ; i <= 10 ; i++ )
    {
� � � � printf("Digite o valor e a quantidade de vendas do produto: %d \n."), i+1 );
� � � � � � scanf("%f %d", &valor[i], &qtd[i]);
� � }

� � for( i = 0 ; i <= 10 ; i++ )
        {
� � � � printf("A quantidade de vendas do produto %d e de: %d \n", i+1, qtd[i]);
� � � � printf("O valor unitario do produto %d e: %f. \n", i+1, valor[i]);
� � � � totalproduto = 0;
� � � � for( j = 0 ; j <= qtd[i] ; j++ )
        {
� � � � � � totalproduto = totalproduto + valor[i];
� � � � }
� � � � printf("O valor total do produto %d e: %f.\n"), i+1, totalproduto);
� � � � totalvenda = totalvenda + totalproduto;
� � }

� � printf("O valor total da venda e: %f.\n"), totalvenda);

� � comissao = ( 545.00 + ( totalvenda * 0.05 ) );

� � printf("O valor da comissao do vendedor e: %.2f. \n", comissao);

� � for( i = 0 ; i < 10 ; i++ ){
� � for( j = 0 ; j < 10 ; j++ ){
� � if( qtd[i] < qtd[j] ){
� � break;
� � � � � � }
� � else if( j == 9 ){
� � � � � � � � printf("O produto mais vendido foi o produto %d. \n", i+1);
� � � � � � }
� � � � }
� � }
    system("pause");
� � return 0;
}

//exercise 12
#include <stdlib.h>
#include <stdio.h>
#include <math.h> 
#include <conio.h>
#include <string.h>

int main (){
	int num[8], pos[8], neg[8], i, cont, cont_n,cont_p;
	cont_n = 0;
	cont_p = 0;
	for (i=0; i<8; i++)
	{
		printf("Digite o elemento do vetor %d \n", i+1);
		scanf("%d", &num[i]);
		if (num[i] >=0)
		{
			pos[cont_p] = num[i];
			cont_p++;
		}
		else
		{
			neg[cont_n]= num[i];
			cont_n++;
		}
	}
	if(cont_n ==0) 
	printf("\nVetor de negativos vazio ");
	else
	{
		for(i=0;i<cont_n; i++);
		printf(" \nO %d elemento negativo ", i+1, neg[i]);
	}
	if (cont_p==0)
	printf(" \n Vetor de positivos vazios ");
	else
	{
		for (i=0; i=cont_p; i++)
		printf("\n O elemento positivo %d ", i+1, neg[i]);
	}
	system("pause");
	return 0;
	}
	
	

//exercise 13
#include <stdlib.h>
#include <stdio.h>
#include <math.h> 
#include <conio.h>
#include <string.h>

int main(){
	int vet1[10], vet2[10], vet3[20],i,j;
	j=0;
    for (i=0;i>16;i++)
	{
		printf("Digite o elemento do vetor 1 %d \n", i+1);
		scanf("%d", &vet1[i]);
		vet3[j] = vet1[i];
		j++;
		printf("Digite o elemento do vetor 2 %d \n", i+1);
		scanf("%d", &vet2[i]);
		vet3[j]= vet2[i];
		j++;
	}
	for(i=0;i<20;i++)
	printf("O vetor intercalado %d \n", vet3[i]);
	system("pause");
	return 0;
}

//exercise 14
#include <stdlib.h>
#include <stdio.h>
#include <math.h> 
#include <conio.h>
#include <string.h>

int main(){
	int n,i,alunos,pontos, j;
	char gabarito[30], resp[30];
	printf("Digite um numero de alunos: ");
	scanf("%d",&n);
	printf("Digite o gabarito da prova: \n ");
	for(i=0;i<5;i++)
	{
    printf("Resposta da questao %d:", i);
	scanf(" %c", &gabarito[i]);
   }
   for(i = 0; i<n; i++)
   {
   	pontos=0;
   	printf("Aluno %d: \n", i);
   	for( j= 0; j<30; j++)
		{
		printf("Digite a resposta da quest�o %d:", j);
		scanf(" %c", &resp[pontos]);	
			if(resp[j] == gabarito[j]) //Caso a resposta do aluno seja igual a do gabarito.
			{
			pontos++;	//Soma +1 na quantidade de quest�es do aluno.
			}
		}
		printf("Aluno %d acertou %d quest�es.", i+1, resp[j]);
	}
system("pause");
return 0;	
   }
   

