/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void main()
{
 int i,j, p=1;
 for (i=1;i<=5;i++)
 {
     for(j=1;j<=i;j++)
     {
         printf("%d",p);
         {
             p++;
             printf("\n");
         }
     }
  }
}