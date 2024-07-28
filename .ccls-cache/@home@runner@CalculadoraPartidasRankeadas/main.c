#include <stdio.h>
#include <string.h>

int calculaRanking(vitorias, derrotas){
  return vitorias - derrotas;
}
int main(void) {
  int vitoriasPlayer, derrotasPlayer;
  char nivel[50];
  
  scanf("%d %d", &vitoriasPlayer, &derrotasPlayer);
  int rankeadas = calculaRanking(vitoriasPlayer, derrotasPlayer);

  if (rankeadas <= 10)
    strcpy(nivel, "Ferro");
  else if (rankeadas >= 11 && rankeadas <= 20)
    strcpy(nivel, "Bronze");
  else if (rankeadas >= 21 && rankeadas <= 50)
    strcpy(nivel, "Prata");
  else if (rankeadas >= 51 && rankeadas <= 80)
    strcpy(nivel, "Ouro");
  else if (rankeadas >= 81 && rankeadas <= 90)
    strcpy(nivel, "Diamante");
  else if (rankeadas >= 91 && rankeadas <= 100)
    strcpy(nivel, "Lendário");
  else
    strcpy(nivel, "Imortal");

  printf("O herói tem saldo de %d está no nível de %s", rankeadas, nivel);
  
  return 0;
}