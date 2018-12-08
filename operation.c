#include "operation.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void addition(int r1, int i1, int r2, int i2){
  int r = r1 + r2;
  int i = i1 + i2;

  afficher(r,i);
}

void soustraction(int r1, int i1, int r2, int i2){
  int r = r1 - r2;
  int i = i1 - i2;

  afficher(r,i);
}

void multiplication(int r1, int i1, int r2, int i2){
    int r = r1 * r2 - (i1 * i2);
    int i = i1 * r2 + r1 * i2;

    afficher(r,i);
}

void division(int r1, int i1, int r2, int i2){

    double rslt_r,rslt_i;
    rslt_r = 0;
    rslt_i = 0;

    if(r2!=0 || i2!=0){
        if(r1!=0 && i1==0 && r2==0 && i2 != 0){
            rslt_r = 0;
            rslt_i = -r1;

            afficherd(rslt_r,rslt_i);
        }else if(i2==0){
            rslt_r = r1/r2;
            rslt_i = i1/r2;

            afficherd(rslt_r,rslt_i);
        }else if(r2==0){
            rslt_r = (r1 * r2 + i1 * i2) / (-pow(i2, 2));
            rslt_i = (i1 * r2 - i2 * r1) / (-pow(i2, 2));

            afficherd(rslt_r,rslt_i);
        }else{
            rslt_r = (r1 * r2 + i1 * i2) / (pow(r2, 2) + pow(i2, 2));
            rslt_i = (i1 * r2 - i2 * r1) / (pow(r2, 2) + pow(i2, 2));

            afficherd(rslt_r,rslt_i);
        }
    }else{
        printf("\nDivision par zero impossible,!!VALEUR ENTRER NON CORRECT!!\n");
        printf("Au moins une des deux valeurs aux dénominateurs doit etre différents de 0.\n\n");
    }
}

void afficher(int r, int i){
    if(i<0){
        i = abs(i);
        printf("\n\n Resultat : %d - %di\n",r,i);
    }else if(i==0 && r!=0){
        printf("\n\n Resultat : %d \n",r);
    }else if(r==0 && i!=0){
        printf("\n\n Resultat : %di \n",i);
    }else{
        printf("\n\n Resultat : %d + %di\n",r,i);
    }
}


void afficherd(double r, double i){
    if(i<0 && r!=0){
        i = abs(i);
        printf("\n\n Resultat : %f - %fi\n",r,i);
    }else if(i==0 && r!=0){

        printf("\n\n Resultat : %f \n",r);
    }else if(r==0 && i!=0){

        printf("\n\n Resultat : %fi \n",i);
    }else{

        printf("\n\n Resultat : %f + %fi\n",r,i);
    }
}
