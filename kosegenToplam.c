#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int dizi[4][4];
    int top=0;
    srand(time(NULL));
    for(int i=0;i<4;i++)
    {
      for(int j=0;j<4;j++)
      {
         dizi[i][j]=rand()%10;
      }
    }
    for(int i=0;i<4;i++)
    {
      for(int j=0;j<4;j++)
      {
         printf("%d\t",dizi[i][j]);
      }
         printf("\n");
    }
    for(int i=0;i<4;i++)
    {
      top += dizi[i][i];
    }

    printf("esas kosegendeki elemanlarin toplami:%d",top);
return 0;
}