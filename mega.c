#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#define qt_permitida 15

typedef struct{
char nome [15];
char sobrenome [15];
char estado [3];
char municipio [15];
int telefone;
}dados;

int escolha();//QUANTIDADE DE NUMEROS A SER ESCOLHIDO PELO USUARIO
int ch_de_estr();//CHAMADA DE ESTRUTURA DE INFORMACOES
int wellcome();//BOAS VINDAS AO USUARIO
int receber_aposta();//RECEBE OS NUMEROS PARA O SORTEIO
int numeros_sorteados();//NUMEROS QUE SERAO SORTIADOS PELO SISTEMA
int comparar_sor_apos();

//VARIAVEIS GLOBAL

dados info;
int qt_de_numeros = 0 ;
int recebe = 0 ;
int nu_sorteio [qt_permitida];
int nu_apostador [7];
int guarda [7];
int global = 0;
int pular = 0;

main()
{
int apagar;
system("cls");
global = 0;
system("title MEGA - SENA v.1.0 © Josue Moura");
char continuar;
//INICIO DO PROGRAMA
if(pular <= 0)
{
ch_de_estr();}
escolha();
wellcome();
receber_aposta();
numeros_sortiados();
comparar_sor_apos();
printf("\n\n");
printf("Deseja tentar novamente s/n: ");
scanf("%s",&continuar);
if(continuar == 's')
{
for(apagar = 0;apagar <16;apagar++)
{
pular++; 
nu_apostador [apagar] = 0;
}
main();
}
else
{
printf("\n\n\t\tEspero que tenha gostado do jogo (Mega - Sena).\n");
sleep(4000);
}

}

int ch_de_estr()
{_flushall();

int cont;

printf("\t------ Preencha as informacoes abaixo ------\n\n");
sleep(1500);
printf("Nome: ");
gets(&info.nome);
printf("Sobrenome: ");
gets(&info.sobrenome);
//printf("Estado (Somente 2 letras. Ex: [SP]): ");
//gets(&info.estado);
//printf("Municipio. Ex: (Santo Andre): ");//gets(info.municipio);
//printf("Telefone com DDD Ex: (1100005555): ");
//scanf("%d",&info.telefone);

}
int escolha()
{
int ok;
char repetir,resposta;
printf("\nQuantos numeros deseja escolher para a aposta\n\n");
printf("\tAs opcoes sao de 6 a 15\n\n");

do{_flushall();

printf("Quantidade: ");
scanf("%d",&qt_de_numeros);
recebe = qt_de_numeros;

if(recebe >= 6 && recebe <=15 )
{
switch (recebe){
case 6 : printf("\nCusto da aposta = RS 2.00\n");
printf("Deseja continuar s/n: ");
scanf("%s",&resposta);
if(resposta == 's')
{ ok = 1; }
break;
case 7 : printf("\nCusto da aposta = RS 10.00\n");
printf("Deseja continuar s/n: ");
scanf("%s",&resposta);
if(resposta == 's')
{ ok = 1; }
break;
case 8 : printf("\nCusto da aposta = RS 56.00\n");
printf("Deseja continuar s/n: ");
scanf("%s",&resposta);
if(resposta == 's')
{ ok = 1; }
break;
case 9 : printf("\nCusto da aposta = RS 168.00\n");
printf("Deseja continuar s/n: ");
scanf("%s",&resposta);
if(resposta == 's')
{ ok = 1; }
break;
case 10: printf("\nCusto da aposta = RS 420.00\n");
printf("Deseja continuar s/n: ");
scanf("%s",&resposta);
if(resposta == 's')
{ ok = 1; }
break;
case 11: printf("\nCusto da aposta = RS 924.00\n");
printf("Deseja continuar s/n: ");
scanf("%s",&resposta);
if(resposta == 's')
{ ok = 1; }
break;case 12: printf("\nCusto da aposta = RS 1948.00\n");
printf("Deseja continuar s/n: ");
scanf("%s",&resposta);
if(resposta == 's')
{ ok = 1; }
break;
case 13: printf("\nCusto da aposta = RS 3432.00\n");
printf("Deseja continuar s/n: ");
scanf("%s",&resposta);
if(resposta == 's')
{ ok = 1; }
break;
case 14: printf("\nCusto da aposta = RS 6006.00\n");
printf("Deseja continuar s/n: ");
scanf("%s",&resposta);
if(resposta == 's')
{ ok = 1; }
break;
case 15: printf("\nCusto da aposta = RS 10010.00\n");
printf("Deseja continuar s/n: ");
scanf("%s",&resposta);
if(resposta == 's')
{ ok = 1; }
break;
}

}
else
{
printf("O valor digitado esta incorreto\n");
printf("Precione a tecla 'r' para repetir: ");
scanf("%s",&repetir);
}
}while(ok != 1);

}

int wellcome()
{
system("cls");
if(pular < 1)
{
printf("Ola Sr.(a) %s %s\n\n",info.nome,info.sobrenome);
}
}

int receber_aposta()
{
int contador,par=0,pwhile = 0,pfor,parametro,valor,gambiarra = 0;
sleep(750);
gambiarra = qt_de_numeros - 1;
if(pular < 1)
{
printf("Jogador: %s \n\n",info.nome);
}
printf("\nEscolha %d numeros entre 1 - 60\n",qt_de_numeros);

while(pwhile<qt_de_numeros)
{
printf("\n%do numero: ",pwhile + 1);
scanf("%d",&valor);
//VERIFICA SE VALOR ESTA DENTRO DO INTERVALO
if(valor >=1 && valor <=60)
{
//VARRE TODO O VETOR PARA EVITAR NUMERO REPETIDO
for(pfor=0;pfor<qt_de_numeros;pfor++)
{
if(valor == nu_apostador [pfor]){
printf("\nEste valor ja foi digitado, por favor selecione outro\n");
par = 1;
}

else if(pfor == gambiarra && par != 1)
{
nu_apostador[pwhile] = valor;
}
}


if(par != 1)
{
pwhile++;
}
else
{
par = 0;
}
}

else
{
printf("\nO valor digitado nao esta dentro do intervalo indicado\n\tPor favor entre com outro diferente\n");
}
}//Fecha 
system("cls");
printf("Numeros escolhidos :");
for(pfor=0;pfor<qt_de_numeros;pfor++)
{
printf("[%d] ",nu_apostador [pfor]);
}
printf("\n\n");
}

int numeros_sortiados()
{
printf("\n\n\t Numeros sorteados\n\n");
int pfor = 0,contador = 0,parametro = 0,interno;

srand(time(0));
//DEFINE 0 PARA TODOS OS VALORES DO VETOR
for(pfor = 0;pfor < 60; pfor++)
{
nu_sorteio [pfor] = 0;
}

//GERA AS 6 DEZENAS
for(;;)
{
parametro = rand() % 60;

if(parametro != 0)
{
if(nu_sorteio[parametro] == 0)
{
contador++;
nu_sorteio[parametro] = 1;
}
}

if( contador > 5)
break;
}

contador = 1;
for(pfor = 0;pfor <60 ;pfor++)
{
if(nu_sorteio[pfor] == 1)
{
sleep(1200);
printf("\t %do [ %d ]\n",contador++,pfor);
for(interno = 0;interno < 20 ;interno++)
{
if(pfor == nu_apostador [interno])
{
global++;
}
}
}
}


}

int comparar_sor_apos()
{
if(global > 0 )
{
printf("\n\nVoce acertou %d numero(s) \n\n",global);
}
else
{
printf("\n\nNenhum dos numeros escolhidos foi sorteado, mais sorte da proxima vez!\n\n");
}
} 
