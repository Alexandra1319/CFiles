/*
MATHIMA : DOMHMENOS PROGRAMMATISMOS
TMHMA : Τ10
ERGASTHRIAKH ASKHSH : 2
HMEROMHNIA : 26/10/2023
ONOMA : Αλεξάνδρα Μουρουζίδου
ARITHMOS MHTRWOY : 2023095
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
    //askhsh 2.1

        //int

    int i1,i2,isum;
    double dsum,dmo;
    
    i1=6;
    i2=5;

    isum= i1+i2;
    dmo= (double)isum/2;

    printf("isum= %d, dmo= %lf\n",isum,dmo);

    dsum= i1+i2;
    dmo= dsum/2;

    printf("dsum= %lf, dmo= %lf\n",dsum,dmo);
     
         //short

    short s1,s2,ssum;
    
    s1=6;
    s2=5;

    ssum= s1+s2;
    dmo= (double)ssum/2;

    printf("ssum= %d, dmo= %lf\n",ssum,dmo);

    dsum= s1+s2;
    dmo= dsum/2;

    printf("dsum= %lf, dmo= %lf\n",dsum,dmo);
    
        //long

    long l1,l2,lsum;
    
    l1=6;
    l2=5;

    lsum= l1+l2;
    dmo= (double)lsum/2;

    printf("lsum= %d, dmo= %lf\n",lsum,dmo);

    dsum= l1+l2;
    dmo= dsum/2;

    printf("dsum= %lf, dmo= %lf\n",dsum,dmo);
    
         //float
   
    float f1,f2,fsum;
    
    f1=6;
    f2=5;

    fsum= f1+f2;
    dmo= fsum/2;

    printf("fsum= %f, dmo= %lf\n",fsum,dmo);

    dsum= f1+f2;
    dmo= dsum/2;

    printf("dsum= %lf, dmo= %lf\n",dsum,dmo);
    
         //double

    double d1,d2;
    
    d1=6;
    d2=5;

    dsum= d1+d2;
    dmo= dsum/2;

    printf("dsum= %lf, dmo= %lf\n",dsum,dmo);



    //askhsh 2.2

    int N,AB,km,m,cm;

    printf("Enter the steps that the robot took on Mars: \n");
    scanf("%d",&N);

    AB = N * 80;
    
    printf("The robot from A to B travelled %d cm\n",AB);

    m = AB/100;
    km = m/1000;
    m = m%1000;
    cm = AB%100;

    printf("%dKm\n",km);
    printf("%dm\n",m);
    printf("%dcm\n",cm);
    
    system("pause");
    return 0;
}