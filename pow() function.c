#include<stdio.h>
#include<conio.h>
#include<math.h>
main ()
{
    int X,Y;
    long Z;
    printf("Enter the Value Of base(X): ");
    scanf("%d",&X);
    printf("Enter the Value Of base(Y): ");
    scanf("%d",&Y);
    Z = pow(X,Y);
    printf("The Result of X to the power Y is: %d\n",Z);
    getch();

}
