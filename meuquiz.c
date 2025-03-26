
#include<stdio.h>

int main()
{
    int a = 0;
    int r;
    printf("Bem-vindo ao Meu Quiz!\nSeu desafio é acertar as perguntas sobre a minha vida!\n");
    printf("1. Qual era o nome do meu cachorro(a)?\n1) Bolt\n2) Milly\n3) Jessie\n4) Spike");
    scanf("%d",&r);
    if(r==3){
        a++;
    }
    printf("2. Qual é a minha comida favorita?\n1) Churrasco\n2) Hamburguer\n3) Pizza\n4) Japonesa");
    scanf("%d",&r);
    if(r==4){
        a++;
    }
    printf("3. Qual meu sobrenome?\n1) Coelho\n2) Silva\n3) Robertoni\n4) Pereira");
    scanf("%d",&r);
    if(r==1){
        a++;
    }
    printf("4. Em que ano eu nasci?\n1) 2004\n2) 2005\n3) 2006\n4) 2007");
    scanf("%d",&r);
    if(r==3){
        a++;
    }
    printf("Você acertou %d de 4!",a);
    return 0;
}