#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRLEN 30

int main(int argc, char** argv) {

    int scelta;
    char stringa[MAX_STRLEN+1];
    
    printf("Prego inserire una stringa (per terminare scrivere [fine]: ");
    scanf("%[^\n].", stringa);
    
    while(strcmp(stringa,"[fine]"))
    { 
       
       printf("Dove vuole che sia stampato: (1: stdout; 2: stderr) ");
       scanf("%d",&scelta);
       
       switch(scelta)
       {
           case 1:
               fprintf(stdout, "La stringa e' stata stampato su stdout.\n");
               break;
           case 2:
               fprintf(stderr, "La stringa e' stata stampato su stderr.\n");
               break;
           default:
               printf("Non riconosco questa scelta.\n");
       }
       
       printf("Prego inserire una stringa (per terminare scrivere [fine]: ");
       scanf("\n%[^\n].", stringa);
    }
    
    return (EXIT_SUCCESS);
}