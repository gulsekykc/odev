void fonk();

int main()
{

fonk();

    return 0;
}





void fonk()
{
int eleman_sayisi;
int i;



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
    

if (dizi[0] > dizi[i])
{
    dizi[0]=dizi[i];
}


}

printf("En kucuk eleman: %d", dizi[0]);





}