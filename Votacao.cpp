#include <stdio.h>
#include <locale.h>
int main()
{	
	setlocale(LC_ALL, "Portuguese");
	
	int i, voto, h=0, z=0, l=0, n=0; //iniciar, votos, huguinho, zezinho, luizinho, nulos
	
	printf("Bem-vindo(a) ao site de votação oficial da República Federativa do Brasil\n\nCandidatos:\n\nHuguinho = 1\nZezinho = 2\nLuizinho = 3\n\n\n");
	printf("Digite 5 para iniciar a votação.");
	scanf("%d", &i);
	
	while(i!=0)
	{
		printf("Selecione um candidato para votar (Quando quiser parar a votação digite 0).");
		scanf("%d", &voto);
		
		switch(voto)
		{
			case 0:
			printf("Você parou a votação.\n\n");
			i-=5; break;
			
			case 1:
			printf("Você votou em Huguinho.\n\n");
			h++; break;
			
			case 2:
			printf("Você votou em Zezinho.\n\n");
			z++; break;
			
			case 3:
			printf("Você votou em Luizinho.\n\n");
			l++; break;
			
			default:
			printf("Você votou nulo.\n\n");
			n++; break;
		}
	}
	
	printf("Votação Encerrada!!!\n\n");
	printf("Quantidades de votos de Huguinho: %d\n", h);
	printf("Quantidades de votos de Zezinho: %d\n", z);
	printf("Quantidades de votos de Luizinho: %d\n", l);
	printf("Votos nulos: %d", n);
}
