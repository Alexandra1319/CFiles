#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Please enter your name\n");
    char name[25];
    scanf("%s",&name);
    printf("Hi %s !!\nWould you like to play a fun game? (yes or no) :) \n",name);
    char answer[5];
    scanf("%s",&answer);
    char key[5] = "yes";
    int checknum;
    checknum = strcmp(answer,key);

    if (checknum == 0)
    {
        printf("Nice then bend over and suck my juicy big schlong bbg ;)\n");
    }
    else
    {
        printf("You're a fucking pussy boy, now bend over and get ready to recieve your punishment!!\n");
    }
    system("pause");
}