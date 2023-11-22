/*
MATHIMA : DOMHMENOS PROGRAMMATISMOS
TMHMA : T10
ERGASTHRIAKH ASKHSH : 7-8
HMEROMHNIA : 22/11/2023
ONOMA : Mourouzidou Alexandra
ARITHMOS MHTRWOY : 2023095
*/

#include <stdio.h>
#include <stdlib.h>

void fillPin(int [],int );
void showPin(int [],int );
int findThesiMax(int [],int );
int findThesiMin(int [],int );
int countAvg(int [],int );

int main(int argc, char *argv[])
{
    //askhsh 1
    
    int n;
    
    do{
        printf("Give an integer n > 5 :");
        scanf("%d",&n);
    }while (n<=5);
    
    int P[n];
    
    fillPin(P,n);
    showPin(P,n);
    
    int thmin,thmax;
    
    thmin=findThesiMin(P,n);
    thmax=findThesiMax(P,n);
    
    printf("\nMax = %d ThesiMax = %d\n",P[thmax],thmax);
    printf("Min = %d ThesiMin = %d\n",P[thmin],thmin);
    
    int plithos;
    plithos=countAvg(P,n);

    printf("count avg = %d",plithos);

  system("PAUSE");	
  return 0;
}
    //functions
    
void fillPin(int P[],int n) //gemizw pinaka
{
    for (int i=0;i<n;i++)
    {
         P[i]=rand()%10+1;
    }
}

void showPin(int P[],int n) //emfanizw stoixia pinaka
{
     for (int i=0;i<n;i++)
    {
        if (i==n-1)
            printf(" %d\n",P[i]);
        else if (i==0)
            printf("P = %d",P[i]);
        else 
            printf(" %d",P[i]);
    }
}

int findThesiMin(int P[],int n) //vriskw thesh min
{
    int min=P[0];
    int thmin;
    
    for (int i=1;i<n;i++)
    {
        if (min>P[i])
        {
            min=P[i];
            thmin=i;
        }
    }
    
    return thmin;
}

int findThesiMax(int P[],int n) //vriskw thesh max
{
    int max=P[0];
    int thmax;
    
    for (int i=1;i<n;i++)
    {
        if (max<P[i])
        {
            max=P[i];
            thmax=i;
        }
    }
    
    return thmax;
}

int countAvg(int P[],int n) //vriskw plithos P[] > mo
{
    int sum=0,pl=0;
    double mo;

    for (int i=0;i<n;i++)
    {
        sum=sum+P[i];
    }

    mo=sum/n;

    for (int i=0;i<n;i++)
    {
        if (P[i]>mo)
            pl++;
    }

    return pl;
}