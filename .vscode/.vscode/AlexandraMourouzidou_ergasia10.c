/*MATHIMA: DOMHMENOSPROGRAMMATISMOS
TMHMA: T10
ERGASTHRIAKH ASKHSH: 10
HMEROMHNIA: 27/12/2023
ONOMA: Mourouzidou Alexandra
ARITHMOS MHTRWOY: 2023095
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ypallhlos //dilwsh domhs enos ypallhlou 
{
    char name[50];
    int aM;
    int ptyxio;
    int yperories;
    double basikosMisthos;
};

//gemizw pedia domhs ypallhlou parametrika
struct ypallhlos gemismaPedion(char name[], int aM, int ptyxio, int yperories, double basikosMisthos)
{
    struct ypallhlos yp;
    strcpy (yp.name, name);
    yp.aM = aM;
    yp.ptyxio = ptyxio;
    yp.yperories = yperories;
    yp.basikosMisthos = basikosMisthos;
    return yp;
}

void emfanishPedion (struct ypallhlos );

int main(int argc, char *argv[])
{
    //askhsh 10.1

    struct ypallhlos yp1,yp2;

    //gemisma me statheres times
     yp1 = gemismaPedion("Ioannou", 191234, 1, 7, 600);

    //emfanizw ypallhlo 1 mesw sinartishs
    printf("ypallhlos yp1 :\n");
    emfanishPedion(yp1);
    






    system("PAUSE");	
    return 0;
}
                //////////functions//////////

// Emfanish pediwn domhs ypallhlou
void emfanishPedion(struct ypallhlos yp)
{
    printf("name: %s\n", yp.name);
    printf("AM: %d\n", yp.aM);
    printf("Ptyxio: %d\n", yp.ptyxio);
    printf("Yperories: %d\n", yp.yperories);
    printf("Vasikos misthos: %.2lf\n", yp.basikosMisthos);
}