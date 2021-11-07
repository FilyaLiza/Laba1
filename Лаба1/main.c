#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x1, x2, x, delta;
    unsigned int N;
    int a, j=0;

    printf("Write a variant:\n");
    scanf("%d", &a);


    if (a==1)
    {
        //F(x)=sqrt(x)+1
         printf("Write start value:\n");
         scanf("%lf", &x1);
         printf("Write finish value:\n");
         scanf("%lf", &x2);
         printf("Amount of points:\n");
         scanf("%u", &N);
         int i=1;
          printf("**********************************\n");
          printf("* N * X * F(X) *\n");
          printf("**********************************\n");
         for(i; i<=N; i++)
         {
             //F(x)=sqrt(x)+1
             x=sqrt(x1)+1;
             printf("| %d| %.2lf| %.2lf|\n",i,x1,x);
             printf("**********************************\n");
             x1++;

             if (i/10==j)
             {
                 getchar();
                 j++;
             }

         }

    }

    if (a==2)
    {
         printf("Write start value:\n");
         scanf("%lf", &x1);
         printf("Write finish value:\n");
         scanf("%lf", &x2);
         printf("Write a step:\n");
         scanf("%lf", &delta);
         int i=1;
          printf("**********************************\n");
          printf("* N * X * F(X) *\n");
          printf("**********************************\n");
         for(i; i<=x2; i++)
         {
             //F(x)=sqrt(x)+1
             x=sqrt(x1)+1;
             printf("| %d| %.2lf| %.2lf|\n",i,x1,x);
             printf("**********************************\n");
             x1=x1+delta;

             if (i/10==j)
             {
                 getchar();
                 j++;
             }
         }

    }
    printf("Не викон жодна умова\n");
     getchar();
    return 0;
}
