#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("What is your name?\n");
    char name[25];
    scanf("%s",&name);
    printf("Hello %s !\n",name);
    int age;
    printf("What is your age?\n");
    scanf("%d",&age);
    
    if (age>=18)
     {  printf("You are of legal age\n");
        printf("Now enter your grades\n");
        double grade1,grade2,grade3;
        scanf("%lf %lf %lf",&grade1,&grade2,&grade3);
        double sum=grade1+grade2+grade3;
        double mo=sum/3;
        printf("Your total grade is: %.2lf\n",mo);
     }
    else
        {printf("You are underaged and thus unable to continue\n");}
    system("pause");
}