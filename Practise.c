#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct playpolo
{
    char name[50];
    int arfan;
    int thesi;
    int gol;
    int lepta;
    int poines;
};

void goalplayer(struct playpolo [13]);
double avgtime(struct playpolo [13], int);

int main()
{
    char lname[50];
    int i,larfan,lthesi,lgol,llepta,lpoines;
    struct playpolo teampolo[13];

    for ( i=0 ; i<13 ; i++)
    {
        printf("Give name : ");
        scanf("%s",lname);
        strcpy(teampolo[i].name,lname);

        printf("Give arithmo fanelas : ");
        scanf("%d",&larfan);
        teampolo[i].arfan = larfan;

        do
        {
            printf("Give thesi : ");
            scanf("%d",&lthesi);

        }while (lthesi<1 || lthesi>7);
        teampolo[i].thesi = lthesi;

        printf("Give plithos gol : ");
        scanf("%d",&lgol);
        teampolo[i].gol = lgol; 

        printf("Give lepta simetoxis se agones : ");
        scanf("%d",&llepta);
        teampolo[i].lepta = llepta;

        printf("Give poines : ");
        scanf("%d",&lpoines);
        teampolo[i].poines = lpoines; 
    }

    int key;
    printf("Give arithmo thesis paikth : ");
    scanf("%d",&key);

    int pos,pl,answer;
    
    do
    {
        pos=0,pl=0;
        i=0;

        while (i<13)
        {
            if (teampolo[i].thesi == key)
            {
                pos = i;
                pl++;
            }

            i++;

            if (pl==1)
            {
                printf("Onoma paikth : %s\n",teampolo[pos].name);
                printf("Arithmos fanelas : %d\n",teampolo[pos].arfan);
                printf("Thesi : %d\n",teampolo[pos].thesi);
                printf("Gol : %d\n",teampolo[pos].gol);
                printf("Lepta : %d\n",teampolo[pos].lepta);
                printf("Poines : %d\n",teampolo[pos].poines);
                pl = 0;
            }
        }

        if (pos == 0)
        {
            printf("Sti thesi auth paikths den vrethike\n");
        }
       
        printf("Theleis na epanalaveis thn anazhthsh me diaforetiko arithmo thesis? (press 1 if yes and 0 if no\n");
        scanf("%d",answer);

    }while (answer);

    goalplayer(teampolo);

    int num;
    printf("Give a number : ");
    scanf("%d",&num);
    double mo = avgtime(teampolo,num);
    printf("Mesos oros : %lf\n",mo);

    mo = avgtime(teampolo,3);
    printf("Mesos oros : %lf\n",mo);
    
    system("pause");
    return 0;
}


void goalplayer(struct playpolo teampolo[13])
{
    int i,j;
    struct playpolo temp;

    for (i=1 ; i<13 ; i++)
    {
        for(j=12 ; j<i ; j--)
        {
            if(teampolo[j-1].gol < teampolo[j].gol)
            {
                temp = teampolo[j-1];
                teampolo[j-1] = teampolo[j];
                teampolo[j] = temp;
            }
        }
    }

    for (i=0 ; i<5 ; i++)
    {
        printf("Name of the og no%d : %s\n",i+1,teampolo[i].name);
        printf("Arithmos Fanelas of the og no%d : %d\n",i+1,teampolo[i].arfan);
    }
}

double avgtime(struct playpolo teampolo[13], int num)
{
    int i,sum=0;
    double mo;

    for ( i=0 ; i<num ; i++)
    {
        sum = sum + teampolo[num].lepta;
    }

    mo =(double)sum/num-1;

    return mo; 
}