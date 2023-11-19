#include <stdio.h>
#include <stdlib.h>

int main()
{   
    //askhsh 6.3


    int i;      //apo prin to exeis, to evala 
               //etsi gia na min valw sto for 
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
            printf("(2^%d-1)=%d=%d^2=%d\n",n,sum,n,n*n); //Allaja merika pragmata kai eida oti evales
       else                                             //metavlhth kai h seira den htan opws thn ekfwnhsh
            printf("%d+",i);                            
                                                        //to diko sou evgaze 1+3+5+7+9+11=36=6*6=36
    }                                                   //enw to diko mou kai apo thn ekfonhsh apo oti ktlv
                                                        //eprepe na einai 1+3+5+7+9+(2^6-1)=36=6^2=36
                                                        
                                                        // dont kill me if i overlooked something (^-^)
  



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
                    printf("%d=%d=%d*%d=%d\n",i,sum,n,n,n*n);  //To idio me edw aplws kane Ctrl X to printf("(2^%d-1)=%d=%d^2=%d\n",n,sum,n,n*n);
            else                                               //Ama den kanw lafws (*-*)/
                    printf("%d+",i);
        }

   system("pause");

}