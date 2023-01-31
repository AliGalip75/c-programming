#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define boyut 10
int main()
{
    int gecici;
    int dizi[boyut];
    srand(time(NULL));
    for(int i=0;i<boyut;i++) //diziye rastgele sayılar atıyor.
    {
        dizi[i]=rand()%100;
    }
         for(int i=1;i<boyut;i++)
         {
             for(int j=0;j<boyut-1;j++)
             {
                if(dizi[j]>dizi[j+1]) //eğer 1'inci eleman 2'nci elemandan büyükse bu ikisini yer değiştiriyor.
                {
                    gecici=dizi[j];
                    dizi[j]=dizi[j+1];
                    dizi[j+1]=gecici;
                }
             }
         }
         for(int k=0;k<boyut;k++) //dizinin elemanlarını ekrana yazdırıyor.
         {
            printf("dizi[%d]=%d\n",k,dizi[k]);
         }

}