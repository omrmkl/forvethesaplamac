#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{   int sayi;
    int  o_no;
    char o_ad[30];
    char takimi[20];
    float oboy;
    int oyas;
    int okilo;
    int gsayisi ;
    int asayisi;
    int gpsayisi;
}Ob;
Ob *oyuncuekle()
{ int adet,i,j;
    printf("Kac adet oyuncu eklemek istediginizi girin: ");
    scanf("%d",&adet);
    Ob *oyuncu;
    oyuncu = (Ob *)malloc(sizeof(Ob)*adet);
        for(i=0;i<adet;i++)
    {

            printf("Oyuncunun adini girin: ");
            scanf("%s",&(oyuncu+i)->o_ad);
            printf("Oyuncunun takimini girin: ");
            scanf("%s",&(oyuncu+i)->takimi);
            printf("Oyuncunun boyunu girin: ");
            scanf("%f",&(oyuncu+i)->oboy);
            printf("Oyuncunun yasini girin: ");
            scanf("%d",&(oyuncu+i)->oyas);
            printf("Oyuncunun kilosunu girin: ");
            scanf("%d",&(oyuncu+i)->okilo);
            printf("Oyuncunun gol sayisini girin: ");
            scanf("%d",& (oyuncu+i)->gsayisi);
            printf("Oyuncunun asist sayisini girin: ");
            scanf("%d",&(oyuncu+i)->asayisi);
            printf("Oyuncunun girdigi gol pozisyonu sayisini girin: ");
            scanf("%d",&(oyuncu+i)->gpsayisi);
            printf("%d. Oyuncu Basariyla Eklendi.\n\n",i+1);
            (oyuncu)->sayi=adet;
}

return oyuncu;
}
void liste(Ob *oyuncu)
{ int i,j;
    for(i=0;i<(oyuncu)->sayi;i++)
    {
        printf("%d. Oyuncunun;\n    Ad: %s \tTakim: %s \tBoy: %.2f \tYas: %d \tKilo: %d \tGol Sayisi: %d \tAsist Sayisi: %d \tGirdigi Gol Pozisyonu Sayisi: %d \n\n",i+1,(oyuncu+i)->o_ad,(oyuncu+i)->takimi,(oyuncu+i)->oboy,(oyuncu+i)->oyas,(oyuncu+i)->okilo,(oyuncu+i)->gsayisi,(oyuncu+i)->asayisi,(oyuncu+i)->gpsayisi);
    }
}
void oyuncusil(Ob *oyuncu)
{
    int numara;
printf("Kacinci oyuncuyu silmek istiyorsunuz: ");
scanf("%d",&numara);
strcpy((oyuncu+numara-1)->o_ad," ");
strcpy((oyuncu+numara-1)->takimi," ");
(oyuncu+numara-1)->oboy = 0;
(oyuncu+numara-1)->oyas = 0;
(oyuncu+numara-1)->okilo = 0;
(oyuncu+numara-1)->gsayisi = 0;
(oyuncu+numara-1)->asayisi = 0;
(oyuncu+numara-1)->gpsayisi = 0;
printf("%d. Oyuncunun;\n No: %d \tAd: %s \tTakim: %s \tBoy: %.2f \tYas: %d \tKilo: %d \tGol Sayisi: %d \tAsist Sayisi: %d \tGirdigi Gol Pozisyonu Sayisi: %d \n\n",numara,numara,(oyuncu+numara-1)->o_ad,(oyuncu+numara-1)->takimi,(oyuncu+numara-1)->oboy,(oyuncu+numara-1)->oyas,(oyuncu+numara-1)->okilo,(oyuncu+numara-1)->gsayisi,(oyuncu+numara-1)->asayisi,(oyuncu+numara-1)->gpsayisi);




}
void oyuncuara(Ob *oyuncu)
{ int numara,i,numara2;

    printf("Kacinci Oyuncuyu ariyorsunuz: ");
    scanf("%d",&numara);
    printf("Kacinci oyuncu ile karsilastirmak istiyorsunuz: ");
   scanf("%d",&numara2);

   printf("%d. Oyuncunun;\n No: %d \tAd: %s \tTakim: %s \tBoy: %.2f \tYas: %d \tKilo: %d \tGol Sayisi: %d \tAsist Sayisi: %d \tGirdigi Gol Pozisyonu Sayisi: %d \n\n",numara,numara,(oyuncu+numara-1)->o_ad,(oyuncu+numara-1)->takimi,(oyuncu+numara-1)->oboy,(oyuncu+numara-1)->oyas,(oyuncu+numara-1)->okilo,(oyuncu+numara-1)->gsayisi,(oyuncu+numara-1)->asayisi,(oyuncu+numara-1)->gpsayisi);
   printf("%d. Oyuncunun;\n No: %d \tAd: %s \tTakim: %s \tBoy: %.2f \tYas: %d \tKilo: %d \tGol Sayisi: %d \tAsist Sayisi: %d \tGirdigi Gol Pozisyonu Sayisi: %d \n\n",numara2,numara2,(oyuncu+numara2-1)->o_ad,(oyuncu+numara2-1)->takimi,(oyuncu+numara2-1)->oboy,(oyuncu+numara2-1)->oyas,(oyuncu+numara2-1)->okilo,(oyuncu+numara2-1)->gsayisi,(oyuncu+numara2-1)->asayisi,(oyuncu+numara2-1)->gpsayisi);
}

void oyuncudegeri(Ob *oyuncu)
{int u,g,a,gp,od;
printf("Kacinci oyuncunun degerini hesaplamak istiyorsunuz: ");
scanf("%d",&u);
g=(oyuncu+u-1)->gsayisi;
a=(oyuncu+u-1)->asayisi;
gp=(oyuncu+u-1)->gpsayisi;
od=(((g+a)*100/gp)+g+a)*0.5;
printf("%d. oyuncunun piyasa degeri:%d milyon euro\n",u,od);
}
void oyuncuguncelle(Ob *oyuncu)
{int numara;
            printf("Kacinci oyuncuyu guncellemek istiyorsunuz: ");
            scanf("%d",&numara);
            printf("Oyuncunun adini girin: ");
            scanf("%s",&(oyuncu+numara-1)->o_ad);
            printf("Oyuncunun takimini girin: ");
            scanf("%s",&(oyuncu+numara-1)->takimi);
            printf("Oyuncunun boyunu girin: ");
            scanf("%f",&(oyuncu+numara-1)->oboy);
            printf("Oyuncunun yasini girin: ");
            scanf("%d",&(oyuncu+numara-1)->oyas);
            printf("Oyuncunun kilosunu girin: ");
            scanf("%d",&(oyuncu+numara-1)->okilo);
            printf("Oyuncunun gol sayisini girin: ");
            scanf("%d",&(oyuncu+numara-1)->gsayisi);
            printf("Oyuncunun asist sayisini girin: ");
            scanf("%d",&(oyuncu+numara-1)->asayisi);
            printf("Oyuncunun girdigi gol pozisyonu sayisini girin: ");
            scanf("%d",&(oyuncu+numara-1)->gpsayisi);
            printf("%d. Oyuncu Basariyla Guncellendi.\n\n",numara);
}
void yenioyuncu(Ob *oyuncu)
{int yenideger,i;
printf("Kac adet yeni oyuncu girmek istiyorsunuz: ");
scanf("%d",&yenideger);
oyuncu=realloc(oyuncu,sizeof(Ob)*(yenideger+(oyuncu)->sayi));
  for(i=0;i<yenideger;i++)
    {

            printf("Oyuncunun adini girin: ");
            scanf("%s",&(oyuncu+(i+(oyuncu)->sayi))->o_ad);
            printf("Oyuncunun takimini girin: ");
            scanf("%s",&(oyuncu+(i+(oyuncu)->sayi))->takimi);
            printf("Oyuncunun boyunu girin: ");
            scanf("%f",&(oyuncu+(i+(oyuncu)->sayi))->oboy);
            printf("Oyuncunun yasini girin: ");
            scanf("%d",&(oyuncu+(i+(oyuncu)->sayi))->oyas);
            printf("Oyuncunun kilosunu girin: ");
            scanf("%d",&(oyuncu+(i+(oyuncu)->sayi))->okilo);
            printf("Oyuncunun gol sayisini girin: ");
            scanf("%d",&(oyuncu+(i+(oyuncu)->sayi))->gsayisi);
            printf("Oyuncunun asist sayisini girin: ");
            scanf("%d",&(oyuncu+(i+(oyuncu)->sayi))->asayisi);
            printf("Oyuncunun girdigi gol pozisyonu sayisini girin: ");
            scanf("%d",&(oyuncu+(i+(oyuncu)->sayi))->gpsayisi);
            printf("%d. Oyuncu Basariyla Eklendi.\n\n",i+(oyuncu)->sayi);

}


}

int main()
{int menu,a,adet,secim;

    for(a=0;a<2;a++)
    {


      printf("************Forvet Oyuncusu Degeri Hesaplama************\n");
      printf("********************************************************\n\n");
      printf("1-Oyuncu Ekleme\n\n");
      printf("2-Eklenen Oyunculari Silme\n\n");
      printf("3-Oyunculari Listeleme\n\n");
      printf("4-Oyuncu Karsilastirma\n\n");
      printf("5-Guncelleme\n\n");
      printf("6-Oyuncu Degeri Bulma\n\n");
      printf("7-Menu Cikis\n\n");
      printf("Yapmak istediginiz islemi secin:");
      scanf("%d",&menu);
      Ob *gstr;
    switch(menu)
    {
    case 1:
      {

       gstr = oyuncuekle();
        a=0;
      }
        break;
    case 2:

        oyuncusil(gstr);
        a=0;
        break;
    case 3:

        liste(gstr);

        a=0;

        break;
    case 4:
       oyuncuara(gstr);
       a=0;
        break;

    case 5:
        printf("1-Oyuncu verisi guncelleme\n");
        printf("2-Yeni oyuncu ekleme\n");
        printf("3-Ana menuye don\n");
        printf("Yapmak istediginiz islemi secin: ");
        scanf("%d",&secim);
        switch(secim)
    {
    case 1:
        oyuncuguncelle(gstr);
        break;
    case 2:
        yenioyuncu(gstr);
        a=0;
        break;
    case 3:
        break;
        default:
        printf("\n\n\n\n********************************************************\n");
        printf("************Yanlis islem numarasini girdiniz************\n");
        printf("********************************************************\n\n\n");
        a=0;
        break;
    }
    a=0;
        break;
    case 6:
        oyuncudegeri(gstr);
        a=0;
        break;
    case 7:

        printf("\n\n*************Cikmak icin herhangi bir tusa basin*************");
        return 0;
        break;
    default:
        printf("\n\n\n\n********************************************************\n");
        printf("************Yanlis islem numarasini girdiniz************\n");
        printf("********************************************************\n\n\n");
        a=0;
        break;

    }


    }

    return 0;
}
