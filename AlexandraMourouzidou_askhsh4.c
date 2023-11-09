/*
MATHIMA: DOMHMENOS PROGRAMMATISMOS
TMHMA: T10
ERGASTHRIAKH ASKHSH: 4
HMEROMHNIA: 2/11/2023
ONOMA: Alexandra Mourouzidou
ARITHMOS MHTRWOY: 2023095
*/


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
    //askhsh 4.1
    
    int day;
    
    printf("Give me a number from 1 to 7 : ");
    scanf("%d",&day);
    
    if (day==1)
        printf("The first day of a week is Monday.\n");
    else if (day==2)
        printf("The second day of a week is Tuesday.\n");  
    else if (day==3)
        printf("The third day of a week is Wednesday.\n"); 
    else if (day==4)
        printf("The fourth day of a week is Thursday.\n"); 
    else if (day==5)
        printf("The fifth day of a week is Friday.\n");    
    else if (day==6)
        printf("The sixth day of a week is Saturday.\n"); 
    else if (day==7)
        printf("The seventh day of a week is Sunday.\n");
    else
        printf("You gave a wrong number.\n"); 
     

    //askhsh 4.2
    
    int x;
    
    printf("Dose enan akeraio MH ARNHTIKO arithmo gia to x : ");
    scanf("%d", &x);
    
    switch(x)
    {
        case 0:
            printf ("x = 0\n");
            break; 
        case 1:
        case 3:
        case 5:
            printf("x= perittos\n");  
            break;
        case 2:
        case 4:
            printf("x= artios\n");
            break;
        default:
            printf("x > 5\n"); 
    } 
    
            
     //askhsh 4.3
    
     char praksh;
     int a,b;
     
     printf("Dose praksh:");
     praksh = getchar();
     praksh = getchar();
     
     printf("Dose 2 integers:");
     scanf("%d %d",&a,&b);
     
     switch(praksh)
     {
            case '+':
                printf("a+b=%d\n",a+b);
                break;
            case '-':
                printf("a-b=%d\n",a-b);
                break;   
            case '*':
                printf("a*b=%d\n",a*b);
                break;
            case '/':  
                switch(b)
                {
                    case 0:
                        printf("O paronomasths den prepei na einai 0\n");
                        break;
                    default:
                          printf("a/b=%lf\n",(double)(a/b));
                }
                break;
            default:
                printf("Mh apodekth praksh\n");     
     }                   
    

    //askhsh 4.4

    int month;

    printf("Dose mhna :");
    scanf("%d",&month);

    switch (month)
    {
        case 1:
        case 2:
        case 12:
            printf("Xeimwnas\n");
            break;
        case 3:
        case 4:
        case 5:
            printf("Anoijh\n");
            break;
        case 6:
        case 7:
        case 8:
            printf("Kalokairi\n");
            break;
        case 9:
        case 10:
        case 11:
            printf("Fthinopwro\n");
            break;
        default:
            printf("Mh apodektos mhnas\n");

    }
  

    //askhsh 4.5

    if (month == 1)
        printf("Xeimwnas\n");
    else if (month == 2)
        printf("Xeimwnas\n");
    else if (month == 12)
        printf("Xeimwnas\n");
    else if (month == 3)
        printf("Anoijh\n");
    else if (month == 4)
        printf("Anoijh\n");
    else if (month == 5)
        printf("Anoijh\n");
    else if (month == 6)
        printf("Kalokairi\n");
    else if (month == 7)
        printf("Kalokairi\n");
    else if (month == 8)
        printf("Kalokairi\n");
    else if (month == 9)
        printf("Fthinopwro\n");
    else if (month == 10)
        printf("Fthinopwro\n");
    else if (month == 11)
        printf("Fthinopwro\n");
    else
        printf("Mh apodektos mhnas\n");

    //askhsh 4.6

    if (month == 1 || month == 2 || month == 12)
        printf("Xeimwnas\n");
    else if (month == 3 || month == 4 || month == 5)
        printf("Anoijh\n");
    else if (month == 6 || month == 7 || month == 8)
        printf("Kalokairi\n");
    else if (month == 9 || month == 10 || month == 11)
        printf("Fthinopwro\n");
    else
        printf("Mh apodektos mhnas\n");
     

    //askhsh 4.7

    int posoEisodhmatos,arithmosAkinhtwn;
    double aforologhtoEisodhma,forologhteoEisodhma,forosPouAnalogei;

    printf("Give posoEisodhmatos :");
    scanf("%d",&posoEisodhmatos);

    printf("Give arithmosAkinhtwn :");
    scanf("%d",&arithmosAkinhtwn);

    switch (arithmosAkinhtwn)
    {
        case 0:
            aforologhtoEisodhma = 12000;
            break;
        case 1:
            aforologhtoEisodhma = 10000;
            break;
        case 2:
            aforologhtoEisodhma = 8000;
            break;
        case 3:
            aforologhtoEisodhma = 5000;
            break;
        default:
            aforologhtoEisodhma = 0;
    }

    printf("aforologhtoEisodhma = %lf\n",aforologhtoEisodhma);

    forologhteoEisodhma = posoEisodhmatos - aforologhtoEisodhma;

    printf("forologhteoEisodhma = %lf\n",forologhteoEisodhma);

    forosPouAnalogei = forologhteoEisodhma * 30/100;
  
    printf("forosPouAnalogei = %lf\n",forosPouAnalogei);
  
  system("PAUSE");	
  return 0;
}
