/*
MATHIMA: DOMHMENOS PROGRAMMATISMOS
TMHMA: T10
ERGASTHRIAKH ASKHSH: 6
HMEROMHNIA: 21/11/2023
ONOMA: Mourouzidou Alexandra
ARITHMOS MHTRWOY: 2023095
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int findAthroismaPeritton(int ,int );
int findParagontiko(int );
bool isProtos(int );

int main(int argc, char *argv[])
{
    //askhsh 6.1
    
    int i;
    
    do //tropos a with do while
    {
        printf("Give an integer in [1,10]: ");
        scanf("%d",&i);
    }while (i<1 || i>10);
    
    for (int j=1; j<=10; j++)
    {
        printf("%d * %d = %d\n",i,j,i*j);
    }
  
    //tropos b with for
    
    for ( ; i>10 || i<1;)
    {
         printf("Give an integer in [1,10]: ");
         scanf("%d",&i);
    }    
    
     for (int j=1; j<=10; j++)
    {
        printf("%d * %d = %d\n",i,j,i*j);
    }
  
    //askhsh 6.2
    
    for (i=1; i<=10; i++)
       {
             for (int j=1; j<=10; j++)
            {
               if (i==10 && j==10)
                    printf("%d x %d = %d \n",i,j,i*j);
               else
                    printf("%d x %d = %d, ",i,j,i*j);
            }    
       }


    //askhsh 6.3
    
    int n;
    
    do
    {
        printf("Give an integer in [5,20]: ");
        scanf("%d",&n);
    }while (n<5 || n>20);

    int sum=0;

    for (i=1; i<=2*n-1; i+=2)
    {
        sum=sum+i;

       if (i==2*n-1) 
            printf("(2*%d-1)=%d=%d^2=%d\n",n,sum,n,n*n);
       else
            printf("%d+",i);
    }
  
    //askhsh 6.4

    do
    {
        printf("Give an integer in [0,10]: ");
        scanf("%d",&n);
    }while (n<0 || n>10);
    
    int npar;

    if (n==0 || n==1)
        npar=1;
    else
    {
        npar=1;
        for (i=2;i<=n;i++) 
        {
            npar=npar*i;
        }
    }

    printf("%d! = %d\n",n,npar);

    //askhsh 6.5

    do
    {
        printf("Give an integer in [0,10]: ");
        scanf("%d",&n);
    }while (n<0 || n>10);

    npar=1;

    for (i=1;i<=n;i++) 
    {
        npar=npar*i;
    }

    printf("%d! = %d\n",n,npar);

    //askhsh 6.6

    do
    {
        printf("Give an integer in [2,100]: ");
        scanf("%d",&n);
    }while (n<2 || n>100);

    bool protos=true;

    for (i=2;i<=n/2;i++) 
    {
        if (n%i==0)
            protos=false;
    }

    if (protos)
        printf("n = %d einai protos\n",n);
    else
        printf("n = %d den einai protos\n",n);

    //askhsh 6.7

        //ask 6.3 me sinartisi

        do
        {
            printf("Give an integer in [5,20]: ");
            scanf("%d",&n);
        }while (n<5 || n>20);
        
        sum=0;

        for (i=1; i<=2*n-1; i+=2)
        {
            sum=findAthroismaPeritton(sum,i);
            if (i==2*n-1)
                    printf("(2*%d-1)=%d=%d^2=%d\n",n,sum,n,n*n);
            else
                    printf("%d+",i);
        }

        //ask 6.5 me sinartisi

        do
        {
            printf("Give an integer in [0,10]: ");
            scanf("%d",&n);
        }while (n<0 || n>10);

        npar=findParagontiko(n);

        printf("%d! = %d\n",n,npar);

        //ask 6.6 me sinartisi

        do
        {
            printf("Give an integer in [2,100]: ");
            scanf("%d",&n);
        }while (n<2 || n>100);

        if (isProtos(n))
            printf("n = %d einai protos\n",n);
        else
            printf("n = %d den einai protos\n",n);

  system("PAUSE");	
  return 0;
}


int findAthroismaPeritton(int sum,int i) //sinartisi ask 6.3
{
    sum=sum+i;

    return sum;
}

int findParagontiko(int n) //sinartisi ask 6.5
{
    int npar=1;

    for (int i=1;i<=n;i++) 
    {
        npar=npar*i;
    }

    return npar;
}

bool isProtos(int n) //sinartisi ask 6.6
{
    bool protos=true;

    for (int i=2;i<=n/2;i++) 
    {
        if (n%i==0)
            protos=false;
    }

    return protos;
}