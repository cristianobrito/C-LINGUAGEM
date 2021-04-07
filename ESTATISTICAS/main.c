#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char phrase[] = "quando penso em alguem so penso em voce,e ai entao estamos bem, mesmo com tantos motivos pra deixar tudo como esta,nem desistir de tentar agora tanto faz estamos indo devolta,pra casa.";
         
  int index,alpha,blank,punct;
  
  alpha = blank = punct = 0;
  
  //REUNE DADOS
  index = 0;
  while(phrase[index])
  {
   if(isalpha(phrase[index]))
        alpha++;
        if(isblank(phrase[index]))
            blank++;
            if(ispunct(phrase[index]))
                 punct++;
                 index++;
  }
  
  //IMPRIME RESULTADOS 
  printf("\"%s\"\n",phrase);
  puts("ESTATISTICAS:");
  printf("%d letras na frase\n",alpha);
  printf("%d blank\n",blank);
  printf("%d sinais de pontuacao \n",punct);
  system("PAUSE");	
  return 0;
}
