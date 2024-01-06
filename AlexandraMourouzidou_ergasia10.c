/*MATHIMA: DOMHMENOSPROGRAMMATISMOS
TMHMA: T10
ERGASTHRIAKH ASKHSH: 10
HMEROMHNIA: 06/01/2024
ONOMA: Mourouzidou Alexandra
ARITHMOS MHTRWOY: 2023095
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    //askhsh 10.1
struct ypallhlos //dilwsh domhs enos ypallhlou 
{
    char name[50];
    int aM;
    int ptyxio;
    int yperories;
    double basikosMisthos;
    double tM;
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

void emfanishPedion(struct ypallhlos );
void findTMisthos(struct ypallhlos );
double returnTMisthos(struct ypallhlos ); 
void findMaxTΜ(struct ypallhlos , struct ypallhlos );
void swapYp1Yp2(struct ypallhlos *, struct ypallhlos *);

    //asakhsh 10.2

int n;
void setTΜAll(struct ypallhlos [], int );
void swapYpiYpi1(struct ypallhlos [], int, int );
int returnThesiMaxTM(struct ypallhlos [], int );

int main(int argc, char *argv[])
{
            //askhsh 10.1

    struct ypallhlos yp1,yp2;

    //gemisma me statheres times
     yp1 = gemismaPedion("Ioannou", 191234, 1, 7, 600);

    //emfanizw ypallhlo 1 mesw sinartishs
    printf("ypallhlos yp1 :\n");
    emfanishPedion(yp1);
    
    //ypologizw kai emfanizw ton teliko mistho yp1 mesw sinartishs
    findTMisthos(yp1);

    //gemisma me times apto plhktrologio
    char name2[50];
    int aM2, ptyxio2, yperories2;
    double basikosMisthos2;

    printf("Give name of ypallhlos 2 : ");
    scanf("%s",name2);
    printf("Give aM of ypallhlos 2 : ");
    scanf("%d",&aM2);
    printf("Give ptyxio of ypallhlos 2 : ");
    scanf("%d",&ptyxio2);
    printf("Give yperories of ypallhlos 2 : ");
    scanf("%d",&yperories2);
    printf("Give basikosMisthos of ypallhlos 2 : ");
    scanf("%lf",&basikosMisthos2);

    yp2 = gemismaPedion(name2, aM2, ptyxio2, yperories2, basikosMisthos2);

    //emfanizw ypallhlo 2 mesw sinartishs
    printf("ypallhlos yp2 :\n");
    emfanishPedion(yp2);

    //ypologizw kai epistrtefw ton teliko mistho yp2 mesw sinartishs
    double tM = returnTMisthos(yp2); 
    printf("call returnTMisthos() - tM = %lf\n",tM);

    //vriskw kai emfanizw ton megalytero teliko bathmo me sinartish
    findMaxTΜ(yp1,yp2);

    //andalassw kai emfanizw ta periexomena yp1 kai yp2
    struct ypallhlos yp3;
    yp3 = yp1;
    yp1 = yp2;
    yp2 = yp3;

    printf("ypallhlos yp1 after swap yp1 yp2 :\n");
    emfanishPedion(yp1);
    printf("ypallhlos yp2 after swap yp1 yp2 :\n");
    emfanishPedion(yp2);

    //andalassw ta periexomena yp1 kai yp2 me sinarthsh kai emfanizw
    swapYp1Yp2(&yp1,&yp2);

    printf("ypallhlos yp1 after call swapYp1Yp2() :\n");
    emfanishPedion(yp1);
    printf("ypallhlos yp2 after call swapYp1Yp2() :\n");
    emfanishPedion(yp2);


            //askhsh 10.2

    //diavasma timhs n>=50
    do{
        printf("Give n <= 50 : ");
        scanf("%d",&n);
    }while (n>50);

    //eisagwgh timwn ston pinaka yp[n] apto plhktrologio
    struct ypallhlos yp[n];

    int i;
    for ( i=0; i<n; i++ )
    {
        printf("Give name of ypallhlos yp[%d] : ",i);
        scanf("%s",name2);
        printf("Give aM of ypallhlos yp[%d] : ",i);
        scanf("%d",&aM2);
        printf("Give ptyxio of ypallhlos yp[%d] : ",i);
        scanf("%d",&ptyxio2);
        printf("Give yperories of ypallhlos yp[%d] : ",i);
        scanf("%d",&yperories2);
        printf("Give basikosMisthos of ypallhlos yp[%d] : ",i);
        scanf("%lf",&basikosMisthos2);

        yp[i] = gemismaPedion(name2, aM2, ptyxio2, yperories2, basikosMisthos2);
    }

     setTΜAll(yp,n);

    //emfanish pediwn yp[n]
    
    for ( i=0; i<n; i++ )
    {
        printf("ypallhlos yp[%d] :\n",i);
        emfanishPedion(yp[i]);
        printf("Telikos Misthos = %lf\n",yp[i].tM); //to ekana etsi giati alliws h sinartish 
    }                                              //tha evgaze lathos apotelesma gia thn askhsh 10.1

    int index = rand()% n-1; //kanonika einai (n-2 -0 +1) +0 apla to ekana kateftheian

    printf("Pinakas after Swap yp[%d] <--> yp[%d]\n",index,index+1); //swap & emfanish yp[index],yp[index+1] me sinartish
    swapYpiYpi1(yp,index,index+1);

    for ( i=0; i<n; i++ )
    {
        printf("ypallhlos yp[%d] :\n",i);
        emfanishPedion(yp[i]);
        printf("Telikos Misthos = %lf\n",yp[i].tM);
    }

    int thmax = returnThesiMaxTM(yp,n); //evresh kia emfanish thesi ypallhlou me max tM
    printf("Pedia ypallhlou yp[%d] me maxTM :\n",thmax);
    emfanishPedion(yp[thmax]);
    printf("Telikos Misthos = %lf\n",yp[thmax].tM);

    system("PAUSE");	
    return 0;
}
                //////////functions//////////
            //askhsh 10.1
// Emfanish pediwn domhs ypallhlou
void emfanishPedion(struct ypallhlos yp)
{
    printf("name : %s\n", yp.name);
    printf("aM = %d\n", yp.aM);
    printf("Ptyxio = %d\n", yp.ptyxio);
    printf("Yperories = %d\n", yp.yperories);
    printf("Vasikos misthos = %lf\n", yp.basikosMisthos);
}

void findTMisthos(struct ypallhlos yp) //ypologizw kai emfanizw teliko mistho
{  
    double tM,epidoma;

    switch (yp.ptyxio)
    {
        case 1: 
            epidoma = 300;
            break;
        case 2:
            epidoma = 150;
            break;
        case 3:
            epidoma = 100;
            break;
        case 4:
            epidoma = 50;
            break;
        default:
            epidoma = 0;
    }

    tM = yp.basikosMisthos + yp.yperories * 20 + epidoma;
    printf("call findMisthos() - tM = %lf\n",tM);
}

double returnTMisthos(struct ypallhlos yp) //ypologizw kai epistrefw telikko mistho
{
    double tM,epidoma;

    switch (yp.ptyxio)
    {
        case 1: 
            epidoma = 300;
            break;
        case 2:
            epidoma = 150;
            break;
        case 3:
            epidoma = 100;
            break;
        case 4:
            epidoma = 50;
            break;
        default:
            epidoma = 0;
    }

    tM = yp.basikosMisthos + yp.yperories * 20 + epidoma;

    return tM;
}

void findMaxTΜ(struct ypallhlos yp1, struct ypallhlos yp2) //vriskw kai emfanizw megisto teliko mistho
{
    double tm1,tm2;
    tm1 = returnTMisthos(yp1);
    tm2 = returnTMisthos(yp2);
        if (tm2 > tm1)
        printf("TM yp2 = %lf > TM yp1 = %lf\n",tm2,tm1);
    else    
        printf("TM yp1 = %lf > TM yp2 = %lf\n",tm1,tm2);
}

void swapYp1Yp2(struct ypallhlos *yp1, struct ypallhlos *yp2) //antalassw times yp1 kai yp2
{
    struct ypallhlos yp3;
    yp3 = *yp1;
    *yp1 = *yp2;
    *yp2 = yp3;
}

            //askhsh 10.2

void setTΜAll(struct ypallhlos yp[], int n) //gemizw pedio pinaka typou struct
{
    int i;
    for ( i=0; i<n; i++ )
    {
        yp[i].tM = returnTMisthos(yp[i]);
    }
}

void swapYpiYpi1(struct ypallhlos yp[], int a, int b) //antallagh periexomena 2 ypallhlwn
{
    struct ypallhlos Yp;
    Yp = yp[a];
    yp[a] = yp[b];
    yp[b] = Yp;
}

int returnThesiMaxTM(struct ypallhlos yp[], int n) //evresh thesi ypallhlou me max tM
{
    int i,thmax = 0;
    double maxtM = yp[0].tM;

    for ( i=1; i<n; i++ )
    {
        if (maxtM < yp[i].tM)
        {
            maxtM = yp[i].tM;
            thmax = i;
        }
    }

    return thmax;
}