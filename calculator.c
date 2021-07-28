#include<stdio.h>
#include<math.h>
int menu ()
{
printf ("1:Addition \n 2:Substraction \n 3:Multiplication \n 4:Division \n 5:power \n");
}
int main ()
{
menu();
int a,num1,num2,result;
printf ("Enter a number:");
scanf ("%d",&a);
switch(a)
   {
    case 1:
    printf ("Enter first number: \n");
   scanf ("%d",&num1);
    printf ("Enter second number: \n");
    scanf ("%d",&num2);
   result=num1+num2;
   printf ("%d",result);
  main();
    break;
    case 2:
    printf ("Enter first number: \n");
   scanf ("%d",&num1);
    printf ("Enter second number: \n");
    scanf ("%d",&num2);
   result=num1-num2;
    printf ("%d",result);
   main();
    break;
    case 3:
    printf ("Enter first number: \n");
   scanf ("%d",&num1); 
   printf ("Enter second number: \n");
   scanf ("%d",num2);
   result=num1*num2;
   printf ("%d",result);
   main();
   break;
    case 4:
    printf ("Enter first number: \n");
    scanf ("%d",&num1);
   printf ("Enter second number: \n");
   scanf ("%d",&num2);
   result=num1/num2;
   printf ("%d",result);
   main();
   break;
    case 5:
    printf ("Enter base: \n");
    scanf ("%d",&num1);
    printf ("Enter power: \n");
    scanf ("%d",&num2);
   result=1;
    while (num2!=0)
   {
    num2=num2-1;
   result=result*num1;
   }
   printf ("%d \n",result);
   main();
     break;
    }
}
