 #include <stdio.h>
 #include <stdlib.h>
 
 int main()
 {
    int a,b,p;

      printf("Give two numbers a and b : ");
      scanf("%d %d",&a,&b);

      printf("a*b = %d\n",a*b);
      p=0;

      while (b>0)
      {
 
            if (b%2==1)
            {
                  p=p+a;
            }

            printf("a = %d, b = %d, p = %d\n",a,b,p);

            a=a*2;
            b=b/2;

      }

      printf("p = %d\n",p);

      system("pause");

      return 0;
 }