#include<stdio.h>
int main()
{
int i,j;
int disp[2][3];
for (int i = 0; i < 2; i++)
{
   for (int j = 0; j < 3; j++)
   {
      printf("enter the disp[%d][%d]",i,j);
      scanf("%d",&disp[i][j]);
   }
   
}
       printf("two dimesional array element:\n");
       for (int i = 0; i < 2; i++)
       {
          for (int j = 0; j < 3; j++)
          {
             printf("%d",disp[i][j]);
          }
          
       }
       
 return 0;
}