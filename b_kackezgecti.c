#include<stdio.h>




void fonksiyonum();


int main(){


fonksiyonum();




    return 0;
}



void fonksiyonum(){
int deger;
int eleman_sayisi;
int i;
int sayi=0;

printf("Bir deger giriniz: ");
scanf("%d", &deger);


printf("dizinin eleman sayisini giriniz: (1-10): ");
scanf("%d", &eleman_sayisi);

int dizi[eleman_sayisi];

for ( i = 0; i < eleman_sayisi; i++)
{
    printf("%d. elemani girin: ", i);
    scanf("%d", &dizi[i]);
    
}


for ( i = 0; i < eleman_sayisi; i++)
{


if (dizi[i]==deger)
{
    sayi=sayi+1;
}



}


printf("%d sayisi %d defa geciyor: ", deger, sayi);






}