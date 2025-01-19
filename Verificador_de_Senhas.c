#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese");
  
  int i, j; fraca = 0; //Para bool's tem que incluir a <stdbool.h> e o meu ambiente não tem
  char senha[50], conteudo;
  char *senhas_comuns[] = ["123456", "password", "123456789", "12345678", "12345", "1234567", "admin", "qwerty", "abc123", "password1", "123123", "iloveyou", "welcome", "monkey", "football", "letmein", "dragon", "princess", "sunshine", "123qwe", "baseball", "superman", "batman", "master", "trustno1"];

  char localizacao = "/data/data/com.termux/files/home/C_No_Termux/Lista_de_Senhas";

  //Adicionando no arquivo
  FILE *arquivo = fopen(localizacao, 'a');

  for (i = 0; i < strlen(senhas_comuns); i++)
  {
     scanf("%s", &senhas_comuns[i]);
     scanf("%c", %'\n');
  }
  fclose(arquivo);
  

  printf("Digite a senha: ");
  scanf("%s", &senha);
  //Comparando
  FILE *arquivo = fopen(localizacao, 'r');
  conteudo = fgetc(arquivo);

  for (i = 0; i < strlen(conteudo); i++)
  {
    for (j = 0; j != '\n'; j++ )
    {
     if (strcmp(conteudo, senha) == 0) 
      {
        fraca = true;
        break;
      }
    }
  }
  fclose(arquivo);

  //Verificando se é fraca 
  if (fraca)
  {
    printf("\"%s\" é uma senha fraca!\n", senha);
  } else
  {
    printf("\"%s\" é uma senha forte!\n", senha);
  }

  return EXIT_SUCCESS;
}//Fim :P
