#include <stdio.h>

int main() {

  int n,div,mod;

    printf("Num: ");
    scanf("%d",&n);
    div = n;

    while (div > 0)
    {
        mod = div % 10;
        printf("%d ",mod);
        div = div/10;
    }
printf("\n");
    
  return 0;
}