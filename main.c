#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
//f(x)=0.5(x+250)*(x+250)*(x+250)-(x-125)*(x-125)+500//
//ширина стовпців (символів): номер точки 4//
//аргумент 11, значення функції 21//
int main()
{
   double X1, X2, delta, result, F0;
   unsigned int N, Var, i, ;

   printf (" Please choose Var1 or Var2\t");
   scanf ("%d", &Var);
   while (Var!=1&&Var!=2)
   {
    printf (" Please be more attentive and choose Var1 or Var2 again\t");
    scanf ("%d", &Var);
   }
   if (Var==1)
   {
       printf ("-------------------------------------------");
       printf ("\n  Great! Now enter the following, please:");
       printf ("\n      X1\t");
       scanf ("%lf", &X1);
       printf ("      X2\t");
       scanf ("%lf", &X2);
       printf ("      N \t");
       scanf ("%u", &N);
       delta = (X2-X1)/N;
   }
   else
   {
       printf ("-------------------------------------------");
       printf ("\n  Great! Now enter the following, please:");
       printf ("\n      X1\t");
       scanf ("%lf", &X1);
       printf ("      X2\t");
       scanf ("%lf", &X2);
       printf ("      delta\t");
       scanf ("%lf", &delta);
       N = (X2-X1)/delta;
   }
    system("cls");
    F0=0.5*pow((250),3)-15125;
    printf (" f(x)=0,5(x+250)^3-(x-125)^2+500");
    printf ("\n\n X1=%.2lf, X2=%.2lf, N=%d, delta=%.0lf", X1, X2, N, delta);
    printf ("\n f(0)=%.1lf", F0);
    printf ("\n**************************************************");
    printf ("\n| N  |          X          |         F(X)        |");
    printf ("\n**************************************************");
    for (i=1; i<=N; ++i){
       result = 0.5*pow((X1+250),3)-pow((X1-125),2)+500;
       printf ("\n|%4d|%21.3lf|%21.5lf|", (i), X1+delta*i, result);
       printf ("\n+----+---------------------+---------------------+");
       X1=X1+delta*i;
       if (i%12==0) {
        getch();
       }
    }

   //getch, щоб пішло далі лише після введення символу
   // pow для степеня
}
