#include <stdio.h>

int main() {
     float voto;
     int nvoti;
     float svoti;
     float media;
     printf("inserisci il numero di voti:\n ");
     while(1) {
          printf("inserisci il voto:");
          scanf("%f",&voto);
          if(voto==0) {
               break;
          }
          svoti+=voto;
          nvoti++;
     }
     if(nvoti>0) {
          media=svoti/nvoti;
          printf("la media dei voti e':%.2f\n",media);
     }else {
          printf("nessuno voto inseristo");
     }
     return 0;
}
