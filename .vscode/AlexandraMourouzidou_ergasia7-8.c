/*
MATHIMA : DOMHMENOS PROGRAMMATISMOS
TMHMA : T10
ERGASTHRIAKH ASKHSH : 7-8
HMEROMHNIA : 30/11/2023
ONOMA : Mourouzidou Alexandra
ARITHMOS MHTRWOY : 2023095
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void fillPin(int [],int );
void showPin(int [],int );
int findThesiMax(int [],int );
int findThesiMin(int [],int );
int countAvg(int [],int ,double* );
int searchPThesiNum(int [],int ,int );
void bubbleDesc(int [],int );
int binarysearchPThesiNum(int [],int ,int ,int ,int );
void swapPin(int [],int ,int ,int );

int main(int argc, char *argv[])
{
    //askhsh 1
    
    int n; //diavasma timhs n>5
    
    do{
        printf("Give an integer n > 5 : ");
        scanf("%d",&n);
    }while (n<=5);
    
    int P[n];
    
    fillPin(P,n); //gemisma pinaka P me sinartisi
    showPin(P,n); //emfanisi pinaka P me sinartisi
    
    int thmin,thmax; //thesi min,max kai oi times tous 
                     //mesw sinartisewn
    thmin=findThesiMin(P,n);
    thmax=findThesiMax(P,n);
    
    printf("max = %d thesiMax = %d\n",P[thmax],thmax);
    printf("min = %d thesiMin = %d\n",P[thmin],thmin);
    
    int plithos; //plithos P[]>mo mesw sinartisis kai avg dhladh mo 
    double mo;   //giati yparxei sthn endiktiki ejodo programmatos
    plithos=countAvg(P,n,&mo);

    printf("count avg = %d\n",plithos);
    printf("avg = %lf\n",mo);

    int num; //anazitisi arithmou num me sinartisi

    printf("Give an integer num: ");
    scanf("%d",&num);

    int pos=searchPThesiNum(P,n,num);

    if (pos!=0)
        printf("Found num = %d in position %d, P[%d] = %d\n",num,pos,pos,num);
    else
        printf("NOT FOUND\n");

    //bubble sort
    bubbleDesc(P,n);
    showPin(P,n);

    //diadiki anazhthsh
    printf("Give an integer num: ");
    scanf("%d",&num);

    int thnum;
    thnum=binarysearchPThesiNum(P,n,num,0,n-1);

    if (thnum==-1)
        printf("NOT FOUND\n");
    else    
        printf("Found num = %d in position %d, P[%d] = %d\n",num,thnum,thnum,num);

    //dhmourgia index
    int index;
    index=rand()%(n-2-0+1)+0;

    swapPin(P,n,index,index+1); //antallagh index kai index+1 mesw sinartisis
    showPin(P,n);               //kai emfanisi pinaka

  system("PAUSE");	
  return 0;
}

                //functions//
    
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
            printf("p = %d",P[i]);
        else 
            printf(" %d",P[i]);
    }
}

int findThesiMin(int P[],int n) //vriskw thesh min
{
    int min=P[0];
    int thmin=0;
    
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
    int thmax=0;
    
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

int countAvg(int P[],int n,double *mo2) //vriskw plithos P[] > mo 
{                          
    int sum=0,pl=0;         
    double mo;

    for (int i=0;i<n;i++)
    {
        sum=sum+P[i];
    }

    mo=(double)sum/n;
    *mo2 = mo;

    for (int i=0;i<n;i++)
    {
        if (P[i]>mo)
            pl++;
    }

    return pl;
}

int searchPThesiNum(int P[],int n,int num) //vriskw thesh num
{
    int pos=0,i=1;
    bool done=false;

    while (done==false && i<n)
    {
        if (P[i]==num)
        {   
            done=true;
            pos=i;
        }
        else
            i++;
    }

    return pos;
}

void bubbleDesc(int P[],int n) //bubble sort
{
    int temp,i,j;
    
    for (i=0;i<n-1;i++)
    {
        for (j=0;j<n-1;j++)
        {
            if (P[j]<P[j+1])
            {
                temp=P[j];
                P[j]=P[j+1];
                P[j+1]=temp;
            }
        }
    }
}

//diadiki anazhthsh
int binarysearchPThesiNum(int P[],int n,int num,int st,int fin)
{
    int thnum=-1,mid;

    while (st<=fin && thnum==-1)
    {
        mid=(st+fin)/2;
        
        if (P[mid]==num)
            thnum=mid;
        else if (P[mid]>num)
            st=mid+1;
        else    
            fin=mid-1;
    }
  
    return thnum;
}

//antallagh index kai index+1
void swapPin(int P[],int n,int index,int index1)
{
    int temp=P[index];
    P[index]=P[index1];
    P[index1]=temp;
}