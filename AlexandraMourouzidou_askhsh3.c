/*
MATHIMA : DOMHMENOS PROGRAMMATISMOS
TMHMA : Τ10
ERGASTHRIAKH ASKHSH : 3
HMEROMHNIA : 29/10/2023
ONOMA : Αλεξάνδρα Μουρουζίδου
ARITHMOS MHTRWOY : 2023095
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc,char *argv[])
{
    //askhsh 3.1

    int a,b,c;

    printf("Give three numbers:\n");
    scanf("%d %d %d",&a,&b,&c);

    if (a>b)
        if (b>c)
            printf("Descending order: a=%d b=%d c=%c\n",a,b,c);
        else
            if (a>c)
                printf("Descending order: a=%d c=%d b=%d\n",a,c,b);
            else
                printf("Descending order: c=%d a=%d b=%d\n",c,a,b);
    else
        if (a>c)
            printf("Descending order: b=%d a=%d c=%d\n",b,a,c);
        else
            if (b>c)
                printf("Descending order: b=%d c=%d a=%d\n",b,c,a);
            else
                printf("Descending order: c=%d b=%d a=%d\n",c,b,a);


    // askhsh 3.2

    if (a>b && a>c)
        if (b>c)
            printf("Descending order: a=%d b=%d c=%d\n",a,b,c);
        else
            printf("Descending order: a=%d c=%d b=%d\n",a,c,b);
    else
        if (b>a && b>c)
            if (a>c)
                printf("Descending order: b=%d a=%d c=%d\n",b,a,c);
            else
                printf("Descending order: b=%d c=%d a=%d\n",b,c,a);
        else
            if (c>a && c>b)
                if (a>b)
                    printf("Descending order: c=%d a=%d b=%d\n",c,a,b);
                else   
                    printf("Descending order: c=%d b=%d a=%d\n",c,b,a);

    
    //askhsh 3.3

    int age,varos;
    double ypsos,DMS;

    printf("Give age, varos and ypsos se ekatosta:\n");
    scanf("%d %d %lf",&age,&varos,&ypsos);

    if (age>18)
     {
        ypsos=ypsos/100;
        DMS=varos/pow(ypsos,2);
        
        printf("DMS= %lf\n",DMS);

        if (DMS<18.5)
            printf("Adynato Atomo\n");
        else if (DMS>=18.5 && DMS<25)
            printf("Kanoniko Atomo\n");
        else if (DMS>=25 && DMS<30)
            printf("Vary Atomo\n") ;
        else
            printf("Ypervaro Atomo\n");
     }
    else
        printf("Den mporei na ypologistei o Deikths Mazas Somatos DMS\n");


    //askhsh 3.4

    double ba,bb,tb,bc;

    printf("Dwse ton bathmo tou a kai b bathmologhth:\n");
    scanf("%lf %lf",&ba,&bb);

    if (abs(ba-bb)<20)
    {
        tb=(ba+bb)/2;
        tb=tb/5;

        printf("O telikos bathmos einai: %lf/20\n",tb);
    }    
    else
    {
        printf("Dwse to grapto gia anabathmologhsh se c bathmologhth:\n");
        scanf("%lf",&bc);
        tb=(ba+bb+bc)/3;
        tb=tb/5;

        printf("O telikos bathmos einai: %lf/20\n",tb);
    }


    //askhsh 3.5

    double am,un,sos,tm;

    printf("Dwse ton arxiko mistho tou ypallhloy:\n");
    scanf("%lf",&am);

    if (am<800)
    {
        un=am*4/100;
        sos=am*5/100;
    }
    else if (am>=800 && am<1200)
    {
        un=am*6/100;
        sos=am*7.5/100;
    }
    else if (am>=1200 && am<2000)
    {
        un=am*8/100;
        sos=am*9.5/100;
    }
    else
    {
        un=am*11/100;
        sos=am*12/100;
    }

    printf("Posa eisforwn: Unisef= %lf SOS= %lf\n",un,sos);

    tm=am-un-sos;

    printf("O telikos misthos toy ypallhloy tha einai: tm= %lf\n",tm);


    //askhsh 3.6

    int var,proorismos;
    double ejoda;

    printf("Dwse to varos ths epistolhs se grammaria:\n");
    scanf("%d",&var);

    printf("Dwse ton proorismo ths epistolhs eswteriko '0'/ejwteriko '1':\n");
    scanf("%d",&proorismos);

    if (proorismos)
        if (var>0 && var<=500)
            ejoda=4.8;
        else if (var>500 && var<=1000)
            ejoda=7.2;
        else
            ejoda=11.5;
    else  
        if (var>0 && var<=500)
            ejoda=2.0;
        else if (var>500 && var<=1000)
            ejoda=3.5;
        else    
            ejoda=4.6;
    
    printf("Ta ejoda apostolhs tha einai: %.1lf\n",ejoda);


    //askhsh 3.7

    int hlhkia,oxhma,kiv,kostos;

    printf("Dwse thn hlikia tou odhgou:\n");
    scanf("%d",&hlhkia);

    printf("Dwse ton typo oxhmatos dikyklo '0'/autokinhto '1':\n");
    scanf("%d",&oxhma);

    printf("Dwse ton kyvismo tou oxhmatos:\n");
    scanf("%d",&kiv);

    if (oxhma)
        if (kiv<=1400)
            kostos=400;
        else if (kiv>1400 && kiv<=1800)
            kostos=500;
        else
            kostos=700;
    else
        if (kiv<=125)
            kostos=100;
        else    
            kostos=140;
    

    if (hlhkia>=18 && hlhkia<=24)
        kostos=kostos+kostos*10/100;
    
    printf("To ethsio kostos asfalishs tou oxhmatos tha einai: %d\n",kostos);


    //askhsh 3.8

    int kil;
    double kost,telposo;

    printf("Dwse tis kilovatwres pou katanalwse o pelaths:\n");
    scanf("%d",&kil);

    if (kil<=200)
        kost=kil*0.20;
    else if(kil>200 && kil<=1000)
        kost=200*0.2+(kil-200)*0.35;
    else
        kost=200*0.2+800*0.35+(kil-1000)*0.50;

    telposo=kost+15;

    printf("To plhrwteo poso tha einai: %.1lf\n",telposo);


    system("pause");
    return 0;

}          
 