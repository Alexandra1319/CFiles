/*MATHIMA: DOMHMENOSPROGRAMMATISMOS
TMHMA: T10
ERGASTHRIAKH ASKHSH: 9
HMEROMHNIA: 12/12/2023
ONOMA: Mourouzidou Alexandra
ARITHMOS MHTRWOY: 2023095
*/

#include <stdio.h>
#include <stdlib.h>

int n=0;
void fillPin2D(int [][n],int );
void showPin2D(int [][n],int );
void findMeanLine(int [][n],int ,double []);
void showPinDouble1D(double [],int );
void findMeanCol(int [][n],int ,double []);
int findDSum(int [][n],int );

int main(int argc, char *argv[])
{
    //askhsh 1
    
    do{   //diavasma timhs n>5
        printf("Give an integer n > 5 : ");
        scanf("%d",&n);
    }while (n<=5);
    
    int my2DArray[n][n];
    fillPin2D(my2DArray,n); //gemisma pinaka me sinartisi

    showPin2D(my2DArray,n); //emfanisi pinaka me sinartisi
    
    double avgLine[n];
    findMeanLine(my2DArray,n,avgLine); //ypologismos max kata grammi me sinartisi
    
    showPinDouble1D(avgLine,n); //emfanisi pinaka max kata grammi

    double avgCol[n];
    findMeanCol(my2DArray,n,avgCol); //ypologismos max kata stili me sinartisi

    showPinDouble1D(avgCol,n); //emfanisi pinaka max kata stili

    int sum=findDSum(my2DArray,n); //ypologismos sum diagwniwn

    printf("\nsum1D + sum2D = %d\n",sum); //emfanisi sum diagwniwn

  system("PAUSE");	
  return 0;
}

                 //////////functions//////////
          
void fillPin2D(int my2DArray[][n],int n) //gemizw pinaka
{  
    int i,j;

    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
            my2DArray[i][j]=rand()%10+1;
    }
}

void showPin2D(int my2DArray[][n],int n) //emfanizw stoixia pinaka
{
    int i,j;

    printf("p = \n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {    
            printf("%2d ",my2DArray[i][j]);
        }
        printf("\n");
    }
}

void findMeanLine(int my2DArray[][n],int n,double avgLine[]) // vriskw max grammhs
{
    int i,j,sumi;
    
    for (i=0;i<n;i++)
    {  
        sumi=0;
        for (j=0;j<n;j++)
            sumi=sumi+my2DArray[i][j];
        avgLine[i]=(double)sumi/n;
    }
}

void showPinDouble1D(double avg[],int n) //emfanizw max greammhs/stilis
{   
    int i;
    for (i=0;i<n;i++)
    {
        if (i==0)
            printf("\navgLine/avgCol = %.2lf ",avg[i]);
        else if (i==n-1)
            printf("%.2lf\n",avg[i]);
        else
            printf("%.2lf ",avg[i]);
    }
}

void findMeanCol(int my2DArray[][n],int n,double  avgCol[]) //vriskw max stilis
{
    int i,j,sumj;

    for (j=0;j<n;j++)
    {  
        sumj=0;
        for (i=0;i<n;i++)
            sumj=sumj+my2DArray[i][j];
        avgCol[j]=(double)sumj/n;
    }
}

int findDSum(int my2DArray[][n],int n) //vriskw sum diagwniwn
{
    int i,j,s1=0,s2=0,s;

    for (i=0;i<n;i++)
    {
        s1=s1+my2DArray[i][i];

        s2=s2+my2DArray[i][n-i-1];
    }
    s=s1+s2;

    return s;
}