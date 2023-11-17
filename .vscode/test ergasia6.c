#include <stdio.h>
#include <stdlib.h>
int main(int argc, char argv[])
{
    
    //askhsh 6.1

    int i = 0;

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
    

 /*   for (; i<1 || i>10;)
    {
         printf("Give an integer in [1,10]: ");  //no clue how to do it send help
         scanf("%d",&i);   
    }

    for (int j=1; j<=10; j++)
    {
        printf("%d * %d = %d\n",i,j,i*j);
    } */

    //askhsh 6.2

    for (i=1; i<=10; i++)
       {
             for (int j=1; j<=10; j++)
            {
                printf("%dx%d = %d, ",i,j,i*j);
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

    for (int i=1; i<=2*n-1; i+=2)
    {

        printf("%d+",i);
    }

  system("PAUSE");
  return 0;
}