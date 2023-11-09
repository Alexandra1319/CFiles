/*
MATHIMA: DOMHMENOS PROGRAMMATISMOS
TMHMA: T10
ERGASTHRIAKH ASKHSH: 5
HMEROMHNIA: 9/11/2023
ONOMA: Mourouzidou Alexandra
ARITHMOS MHTRWOY: 2023095
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
      // askhsh 5.1

      int num;

      printf("Give a number between 2 and 10:\t");
      scanf("%d", &num);

      while (num < 2 || num > 10)
      {
            printf("Give a number between 2 and 10:\t");
            scanf("%d", &num);
      }

      double dynamh;
      int i = 1;
      dynamh = num;

      while (dynamh <= 100) // 5.1.a
      {
            printf("dynamh = %lf\n", dynamh);
            i++;
            dynamh = pow(num, i);
      }

      printf("Give a number between 2 and 10:\t"); // 5.1.b
      scanf("%d", &num);

      while (num < 2 || num > 10)
      {
            printf("Give a number between 2 and 10:\t");
            scanf("%d", &num);
      }

      i = 1;
      dynamh = num;

      while (dynamh <= 100)
      {
            dynamh = pow(num, i);
            i++;
            printf("dynamh = %lf\n", dynamh);
      }

      // askhsh 5.2

      do
      {
            printf("Give a number between 2 and 10:\t");
            scanf("%d", &num);
      }
      while (num < 2 || num > 10);

      double res;
      res = num;
      printf("dynamh = %lf\n", res);

      do
      {
            res = res * num;
            printf("dynamh = %lf\n", res);

      } 
      while (res <= 100);

      // askhsh 5.3

      int xoritikotita, plaith, sumep, sumthes;

      plaith = 0;
      sumep = 0;
      sumthes = 0;

      do
      {
            plaith = plaith + 1;

            printf("Give an integer number :\t");
            scanf("%d", &xoritikotita);
            sumthes = sumthes + xoritikotita;

            if (xoritikotita <= 15)
            {
                  printf("Apaitountai 1 epithrhtes\n");
                  sumep = sumep + 1;
            }
            else if (xoritikotita >= 16 && xoritikotita <= 23)
            {
                  printf("Apaitountai 2 epithrhtes\n");
                  sumep = sumep + 2;
            }
            else
            {
                  printf("Apaitountai 3 epithrhtes\n");
                  sumep = sumep + 3;
            }

      } 
      while (sumthes <= 100);

      printf("Synolo Aithouswn = %d\n", plaith);
      printf("Synolo Epithrhtwn = %d\n", sumep);
      printf("Synolo Thesewn = %d\n", sumthes);

      // askhsh 5.4

      int a, sumth, sumarn, sum12;

      sumth = 0;
      sumarn = 0;
      sum12 = 0;

      do
      {
            printf("Give an integer number:\t");
            scanf("%d", &a);

            if (a % 2 == 0)
                  printf("The square root of a is:%d\n", a * a);

            if (a >= 0)
                  sumth = sumth + 1;
            else
                  sumarn = sumarn + 1;

            if (a >= 100 && a <= 200)
                  sum12 = sum12 + 1;

      } 
      while (a < 15 || a > 25);

      printf("The total number of positive numbers is: %d\n", sumth);
      printf("The total number of negative numbers is: %d\n", sumarn);
      printf("The total number of numbers between 100 and 200 is: %d\n", sum12);

      // askhsh 5.5

      int a, b, p;

      printf("Give two numbers a and b : ");
      scanf("%d %d", &a, &b);

      printf("a*b = %d\n", a * b);
      p = 0;

      while (b > 0)
      {

            if (b % 2 == 1)
            {
                  p = p + a;
            }

            printf("a = %d, b = %d, p = %d\n", a, b, p);

            a = a * 2;
            b = b / 2;
      }

      printf("p = %d\n", p);

      system("PAUSE");
      return 0;
}