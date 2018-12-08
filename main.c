#include <stdio.h>
#include <stdlib.h>
#include "operation.h"

void header(){
   printf("Ce programme permet d effectuer les operations arithmetiques sur les nombres complexes.\n\n");
   printf("Faites votre choix d operation(utiliser les chiffres 1,2,..)\n\n");
}


int main()
{
   int r1,r2,i1,i2,continu;
   int choix = 0;

  do{
       do{
            system("cls");
            header();
            printf("1.addition\n");
            printf("2.soustraction\n");
            printf("3.multiplication\n");
            printf("4.division\n");
            printf("5.Arreter le programme\n\n");
            scanf("%d",&choix);
       }while(choix<=0 || choix>5);

        if(choix==5){
         exit(0);
        }

        continu = 1;

        do{
            system("cls");
            printf("Entrer les donnees du premier nombre complexe\n");
            printf("partie reelle: ");
            scanf("%d",&r1);
            printf("partie imaginaire: ");
            scanf("%d",&i1);
            printf("Entrer les donnees du deuxieme nombre complexe\n");
            printf("partie reelle: ");
            scanf("%d",&r2);
            printf("partie imaginaire: ");
            scanf("%d",&i2);

            switch(choix){
               case 1:
                   addition(r1,i1,r2,i2);
                   break;
               case 2:
                   soustraction(r1,i1,r2,i2);
                   break;
               case 3:
                   multiplication(r1,i1,r2,i2);
                   break;
               case 4:
                   division(r1,i1,r2,i2);
                   break;
                }

            printf("\n\nVoulez-vous refaire cette operation(1=Oui/0=Non)?");
            scanf("%d",&continu);

        }while(continu == 1);
    }while(choix >0  && choix <6 );

    return EXIT_SUCCESS;
}
